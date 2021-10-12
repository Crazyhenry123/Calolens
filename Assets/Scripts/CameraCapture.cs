using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;
using UnityEngine.Windows.WebCam;
using UnityEngine.Networking;
using System.Net;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Threading.Tasks;
using System.IO;
using System;
using System.Threading;
using CustomVision;
using Newtonsoft.Json;
using Microsoft.MixedReality.Toolkit.Utilities;
using UnityEngine.Events;
using Assets.Utilities;


public class CameraCapture : MonoBehaviour
{

    private string photofilePath = null;
    private CustomVisionResult cvresponse = null;
    private HttpResponseMessage httpresponse = null;
    Resolution cameraResolution = new Resolution();
    private List<GameObject> _createdObjects = new List<GameObject>();
    private string maxscoreTag = null;

    [SerializeField]
    private UnityEvent onCameraStarted = default;

    // Start is called before the first frame update
    public void Start()
    {

    }

    public void TakePicture()
    {
        if (IsCameraActive)
        {
            return;
        }

        //    ClearLabels();
        cameraResolution = PhotoCapture.SupportedResolutions.OrderByDescending((res) => res.width * res.height).First();
        PhotoCapture.CreateAsync(false, OnPhotoCaptureCreated);

    }


    public string MaxScoreTag
    {
        set { maxscoreTag = value; }
        get { return maxscoreTag; }    
    }


    private PhotoCapture photoCaptureObject = null;

    public bool IsCameraActive { private set; get; }

    void OnPhotoCaptureCreated(PhotoCapture captureObject)
    {
        photoCaptureObject = captureObject;

        CameraParameters c = new CameraParameters();
        c.hologramOpacity = 0.0f;
        c.cameraResolutionWidth = cameraResolution.width;
        c.cameraResolutionHeight = cameraResolution.height;
        c.pixelFormat = CapturePixelFormat.BGRA32;

        photoCaptureObject.StartPhotoModeAsync(c, startResult =>
        {
            Debug.Log($"Camera system start result = {startResult.resultType}.");
            IsCameraActive = startResult.success;
            onCameraStarted?.Invoke();
        });
    }

    public Task<byte[]> TakePhoto()
    {
        if (!IsCameraActive)
        {
            throw new Exception("Can't take photo when camera is not ready.");
        }

        return Task.Run(() =>
        {
            var completionSource = new TaskCompletionSource<byte[]>();

            AppDispatcher.Instance().Enqueue(() =>
            {
                Debug.Log("Starting photo capture.");

#if UNITY_WSA
                photoCaptureObject.TakePhotoAsync((photoCaptureResult, frame) =>
                {
                    Debug.Log("Photo capture done.");

                    var buffer = new List<byte>();
                    frame.CopyRawImageDataIntoBuffer(buffer);
                    completionSource.TrySetResult(buffer.ToArray());
                });
#else
                    var tex = new Texture2D(webCamTexture.width, webCamTexture.height);
                    tex.SetPixels(webCamTexture.GetPixels());
                    tex.Apply();
                    var data = tex.EncodeToPNG();
                    completionSource.TrySetResult(data);
#endif
            });

            return completionSource.Task;
        });
    }

    private void OnPhotoModeStarted(PhotoCapture.PhotoCaptureResult result)
    {
        if (result.success)
        {
            string filename = string.Format(@"CalolensImage{0}_n.jpg", Time.time);
            string filePath = System.IO.Path.Combine(Application.persistentDataPath.Replace("/","\\"), filename);
            photofilePath = filePath;

            photoCaptureObject.TakePhotoAsync(filePath, PhotoCaptureFileOutputFormat.JPG, OnCapturedPhotoToDisk);
 //           photoCaptureObject.TakePhotoAsync(OnCapturedPhotoToMemory);

        }
        else
        {
            Debug.LogError("Unable to start photo mode!");
        }
    }
    

    /*
    private void OnPhotoModeStarted(PhotoCapture.PhotoCaptureResult result)
    {
        if (result.success)
        {
            photoCaptureObject.TakePhotoAsync(OnCapturedPhotoToMemory);
        }
        else
        {
            Debug.LogError("Unable to start photo mode!");
        }
    }
    */

    void OnCapturedPhotoToDisk(PhotoCapture.PhotoCaptureResult result)
    {
        if (result.success)
        {
            Debug.Log("Saved Photo to disk!");
            photoCaptureObject.StopPhotoModeAsync(OnStoppedPhotoMode);

            Debug.Log(cvresponse);

            SetLabel("File saved, not yet predicted.", new Vector3(0.03f, 0.03f, 0.03f));


            MakePredictionRequest(photofilePath).Wait(1000);


            if (httpresponse != null)
            {
             bool flag = httpresponse.StatusCode == HttpStatusCode.OK;
                
                if (flag)
                {
                    cvresponse = JsonConvert.DeserializeObject<CustomVisionResult>(httpresponse.Content.ReadAsStringAsync().Result);

                }

                if (cvresponse != null)
                {
                    var maxscore = 0.0;

                    /*
                    var cameraTransform = CopyCameraTransForm();
                    var heightFactor = cameraResolution.height / cameraResolution.width;
                    var topCorner = cameraTransform.position + cameraTransform.forward -
                                    cameraTransform.right / 2f +
                                    cameraTransform.up * heightFactor / 2f;

                    var center = r.GetCenter();
                    var recognizedPos = topCorner + cameraTransform.right * center.x -
                                        cameraTransform.up * center.y * heightFactor;
                    */

                    for (var i = 0; i < cvresponse.predictions.Count; i++)
                    {
                        var score = cvresponse.predictions[i].probability;

                        if (score > maxscore)
                        {

                            maxscore = score;
                            maxscoreTag = cvresponse.predictions[i].tagName;

                        }

                    }



                    SetLabel(maxscoreTag, new Vector3(0.03f, 0.03f, 0.03f));


                }
                else
                {
                    SetLabel("Prediction made with HPPTresponse null", new Vector3(0.03f, 0.03f, 0.03f));
                    Debug.Log("Failed to get prediction result from azure custom vision.");


                }


            }

     //       SetLabel("HTTP response from custom vision has not been received yet..", new Vector3(0.03f, 0.03f, 0.03f));



        }
        else
        {
            Debug.Log("Failed to save Photo to disk");
        }
    }

    void OnCapturedPhotoToMemory(PhotoCapture.PhotoCaptureResult result, PhotoCaptureFrame photoCaptureFrame)
    {
        /*
        if (result.success)
        {
            // Create our Texture2D for use and set the correct resolution
            Resolution cameraResolution = PhotoCapture.SupportedResolutions.OrderByDescending((res) => res.width * res.height).First();
            Texture2D targetTexture = new Texture2D(cameraResolution.width, cameraResolution.height);
            // Copy the raw image data into our target texture
            photoCaptureFrame.UploadImageDataToTexture(targetTexture);
            // Do as we wish with the texture such as apply it to a material, etc.

            if (photoCaptureFrame.hasLocationData)
            {
                photoCaptureFrame.TryGetCameraToWorldMatrix(out Matrix4x4 cameraToWorldMatrix);

                Vector3 position = cameraToWorldMatrix.GetColumn(3) - cameraToWorldMatrix.GetColumn(2);
                Quaternion rotation = Quaternion.LookRotation(-cameraToWorldMatrix.GetColumn(2), cameraToWorldMatrix.GetColumn(1));

                photoCaptureFrame.TryGetProjectionMatrix(Camera.main.nearClipPlane, Camera.main.farClipPlane, out Matrix4x4 projectionMatrix);
            }

        }
        */
    //    CreateLabel("PhotoCaptureResult: " + result.success, new Vector3(0.01f, 0.01f, 0.01f));


        if (result.success)
        {
    //        CreateLabel("PhotoCaptureResult: Succeeded" , new Vector3(0.01f, 0.01f, 0.01f));

            List<byte> imageBufferList = new List<byte>();
            // Copy the raw IMFMediaBuffer data into our empty byte list.
            photoCaptureFrame.CopyRawImageDataIntoBuffer(imageBufferList);

     //       CreateLabel("image list rows: "+imageBufferList.Count, new Vector3(0.01f, 0.01f, 0.01f));


            // In this example, we captured the image using the BGRA32 format.
            // So our stride will be 4 since we have a byte for each rgba channel.
            // The raw image data will also be flipped so we access our pixel data
            // in the reverse order.
            int stride = 4;
            float denominator = 1.0f / 255.0f;
            List<Color> colorArray = new List<Color>();
            for (int i = imageBufferList.Count - 1; i >= 0; i -= stride)
            {
                float a = (int)(imageBufferList[i - 0]) * denominator;
                float r = (int)(imageBufferList[i - 1]) * denominator;
                float g = (int)(imageBufferList[i - 2]) * denominator;
                float b = (int)(imageBufferList[i - 3]) * denominator;

                colorArray.Add(new Color(r, g, b, a));
            }
            // Now we could do something with the array such as texture.SetPixels() or run image processing on the list
       //     CreateLabel("colorArray rows: " + colorArray.Count, new Vector3(0.01f, 0.01f, 0.01f));


       //     var cvresponse = RecognizeObjectsInternal(imageBufferList, "https://calolenscustomvisi-prediction.cognitiveservices.azure.com/customvision/v3.0/Prediction/381a2e3d-d2a6-42e6-9a68-46eb999888bd/detect/iterations/Iteration1/image", "c1bea107affe4f4c80f161aaa0c5bdc0");

            Thread.Sleep(10000);

            //     CreateLabel("Photo Path: " + photofilePath, new Vector3(0.01f, 0.01f, 0.01f));
            //     CreateLabel("CVResponse: " + cvresponse.Current.ToString(), new Vector3(0.01f, 0.01f, 0.01f));


        }

        // Clean up
        photoCaptureObject.StopPhotoModeAsync(OnStoppedPhotoMode);
    }

    /*
    private IEnumerator RecognizeObjectsInternal(List<byte> image,
       string predictUrl, string predictKey)
    {
        CreateLabel("Predict URL: " + predictUrl, new Vector3(0.01f, 0.01f, 0.01f));
        CreateLabel("Predict Key: " + predictKey, new Vector3(0.01f, 0.01f, 0.01f));


        var request = UnityWebRequest.Post(predictUrl, string.Empty);
        request.SetRequestHeader("Prediction-Key", predictKey);
        request.SetRequestHeader("Content-Type", "application/octet-stream");
        request.uploadHandler = new UploadHandlerRaw(image.ToArray());

        yield return request.SendWebRequest();

        var text = request.downloadHandler.text;
        var result = JsonConvert.DeserializeObject<CustomVisionResult>(text);

    }
    */


    void OnStoppedPhotoMode(PhotoCapture.PhotoCaptureResult result)
    {
        photoCaptureObject.Dispose();
        photoCaptureObject = null;
    }

    private void SetLabel(string text, Vector3 scale)
    {
        // Create a sphere as new cursor
        GameObject newLabel = GameObject.Find("Label");
      //  newLabel.SetActive(true);
        //      GameObject sceneDes = GameObject.Find("");


        //        newLabel.SetActive(true);

        //        _createdObjects.Add(newLabel);

        // Resize the new cursor
        //       newLabel.transform.localScale = scale;
        //       newLabel.transform.position = new Vector3(0, 0.03f, 0.3f);

        // Creating the text of the label


       TextMesh t = newLabel.GetComponent<TextMesh>();
        t.anchor = TextAnchor.MiddleCenter;
        t.alignment = TextAlignment.Center;
        t.fontSize = 34;
        t.text = text;
        t.color = Color.red;
        //  t.gameObject.SetActive(true);

        return ;
      // return newLabel;
    }

    private Transform CopyCameraTransForm()
    {
        var g = new GameObject();
        g.transform.position = CameraCache.Main.transform.position;
        g.transform.rotation = CameraCache.Main.transform.rotation;
        g.transform.localScale = CameraCache.Main.transform.localScale;
        return g.transform;
    }

    private void ClearLabels()
    {
        foreach (var label in _createdObjects)
        {
            Destroy(label);
        }
        _createdObjects.Clear();
    }


    public async Task MakePredictionRequest(string imageFilePath)
    {
        var client = new HttpClient();

        // Request headers - replace this example key with your valid Prediction-Key.
        client.DefaultRequestHeaders.Add("Prediction-Key", "c1bea107affe4f4c80f161aaa0c5bdc0");

        // Prediction URL - replace this example URL with your valid Prediction URL.
        string url = "https://calolenscustomvisi-prediction.cognitiveservices.azure.com/customvision/v3.0/Prediction/381a2e3d-d2a6-42e6-9a68-46eb999888bd/detect/iterations/Iteration1/image";

        //HttpResponseMessage response;

        // Request body. Try this sample with a locally stored image.
        byte[] byteData = GetImageAsByteArray(imageFilePath);

        try
        {
            using (var content = new ByteArrayContent(byteData))
            {
                content.Headers.ContentType = new MediaTypeHeaderValue("application/octet-stream");
                httpresponse = await client.PostAsync(url, content);
                Thread.Sleep(500);


 //               bool flag = httpresponse.StatusCode == HttpStatusCode.OK;

 //               CreateLabel("Request failed with HTTP Status Code: " + httpresponse.StatusCode, new Vector3(0.01f, 0.01f, 0.01f));


 //               if (flag)
 //               {
 //                 JsonConvert.DeserializeObject<CustomVisionResult>(await httpresponse.Content.ReadAsStringAsync());
 //              }

 //              CreateLabel("Request failed with HTTP Status Code: " + response.StatusCode, new Vector3(0.01f, 0.01f, 0.01f));

                //Console.WriteLine(await response.Content.ReadAsStringAsync());
            }
        }
        catch (Exception e)

        {
            Console.WriteLine("Exception occured while making http request: " + e.Message + "\n");
  
        }


    }

    private byte[] GetImageAsByteArray(string imageFilePath)
    {
        FileStream fileStream = new FileStream(imageFilePath, FileMode.Open, FileAccess.Read);
        BinaryReader binaryReader = new BinaryReader(fileStream);
        return binaryReader.ReadBytes((int)fileStream.Length);
    }

    /*
    private HttpResponseMessage PostImage(HttpClient client, string filePath)
    {
        // Request headers - replace this example key with your valid Prediction-Key.
        client.DefaultRequestHeaders.Add("Prediction-Key", "c1bea107affe4f4c80f161aaa0c5bdc0");
        HttpResponseMessage response = null;
        // Prediction URL - replace this example URL with your valid Prediction URL.
        string url = "https://calolenscustomvisi-prediction.cognitiveservices.azure.com/customvision/v3.0/Prediction/381a2e3d-d2a6-42e6-9a68-46eb999888bd/detect/iterations/Iteration1/image";

        // Request body. Try this sample with a locally stored image.
        byte[] byteData = GetImageAsByteArray(filePath);
        try
        {
            using (var content = new ByteArrayContent(byteData))
            {
                content.Headers.ContentType = new MediaTypeHeaderValue("application/octet-stream");
                response =  client.PostAsync(url, content).Result;
                //        Thread.Sleep(500);


                //               bool flag = httpresponse.StatusCode == HttpStatusCode.OK;

                //               CreateLabel("Request failed with HTTP Status Code: " + httpresponse.StatusCode, new Vector3(0.01f, 0.01f, 0.01f));


                //               if (flag)
                //               {
                //                 JsonConvert.DeserializeObject<CustomVisionResult>(await httpresponse.Content.ReadAsStringAsync());
                //              }

                //              CreateLabel("Request failed with HTTP Status Code: " + response.StatusCode, new Vector3(0.01f, 0.01f, 0.01f));

                //Console.WriteLine(await response.Content.ReadAsStringAsync());
            }
        }
        catch (Exception e)

        {
            Console.WriteLine("Exception occured while making http request: " + e.Message + "\n");

        }

        return null;


    }
    */



    // Update is called once per frame
    void Update()
    {
        
    }
}
