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


public class SceneController : MonoBehaviour
{


    public bool IsCameraActive { private set; get; }

    public GameObject foodDetailsPrefab;

    public ObjectDetectionManager ObjectDetectionManager => objectDetectionManager;

    [Header("Managers")]
    [SerializeField]
    private ObjectDetectionManager objectDetectionManager = default;

    [Header("Events")]
    [SerializeField]
    private UnityEvent onCameraStarted = default;
    [SerializeField]
    private UnityEvent onCameraStopped = default;

    private List<GameObject> Labels = new List<GameObject>();

#if UNITY_WSA
    private PhotoCapture photoCapture;
#else
        private WebCamTexture webCamTexture; 
#endif

    // Start is called before the first frame update
    void Start()
    {


    }

    /// <summary>
    /// Start the camera to use for custom vision.
    /// </summary>
    public void StartCamera()
      {
        if (IsCameraActive)
        {
            return;
        }

        Debug.Log("Starting camera system.");
#if UNITY_WSA
        if (photoCapture == null)
        {
            PhotoCapture.CreateAsync(false, captureObject =>
            {
                photoCapture = captureObject;
                StartPhotoMode();
            });

        }
        else
        {
            StartPhotoMode();
        }
#else
            if (webCamTexture == null)
            {
                webCamTexture = new WebCamTexture();
                var webcamRenderer = gameObject.AddComponent<MeshRenderer>();
                webcamRenderer.material = new Material(Shader.Find("Standard"));
                webcamRenderer.material.mainTexture = webCamTexture;
                webCamTexture.Play();
            }
            else if (!webCamTexture.isPlaying)
            {
                webCamTexture.Play();
            }
#endif

        IsCameraActive = true;
    }

    /// <summary>
    /// Stop camera the camera.
    /// </summary>
    public void StopCamera()
    {
        if (!IsCameraActive)
        {
            return;
        }

        Debug.Log("Stopping camera system.");
#if UNITY_WSA
        photoCapture.StopPhotoModeAsync(result =>
        {
            if (result.success)
            {
                IsCameraActive = false;
                onCameraStopped?.Invoke();
            }
        });
#else
            webCamTexture.Stop();
#endif
        IsCameraActive = false;
    }

#if UNITY_WSA
    private void StartPhotoMode()
    {
        var cameraResolution = PhotoCapture.SupportedResolutions
            .OrderByDescending((res) => res.width * res.height)
            .First();

        var cameraParams = new CameraParameters()
        {
            hologramOpacity = 0f,
            cameraResolutionWidth = cameraResolution.width,
            cameraResolutionHeight = cameraResolution.height,
            pixelFormat = CapturePixelFormat.JPEG
        };

        photoCapture.StartPhotoModeAsync(cameraParams, startResult =>
        {
            Debug.Log($"Camera system start result = {startResult.resultType}.");
            IsCameraActive = startResult.success;
            onCameraStarted?.Invoke();
        });
    }
#endif

    /// <summary>
    /// Take a photo from the WebCam. Make sure the camera is active.
    /// </summary>
    /// <returns>Image data encoded as jpg.</returns>
    public Task<byte[]> TakePhoto()
    {
        if (Labels.Count != 0)
        {
            foreach (GameObject gameobj in Labels)
            {
                AppDispatcher.Instance().Enqueue(() => Destroy(gameobj));

            }

        }

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
                photoCapture.TakePhotoAsync((photoCaptureResult, frame) =>
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

    /// <summary>
    /// Take a photo from the WebCam. Make sure the camera is active.
    /// </summary>
    /// <returns>Image data with a Texture for thumbnail.</returns>
    public Task<ImageThumbnail> TakePhotoWithThumbnail()
    {
        if (!IsCameraActive)
        {
            throw new Exception("Can't take photo when camera is not ready.");
        }

        return Task.Run(() =>
        {
            var completionSource = new TaskCompletionSource<ImageThumbnail>();

            AppDispatcher.Instance().Enqueue(() =>
            {
                Debug.Log("Starting photo capture.");

#if UNITY_WSA
                photoCapture.TakePhotoAsync((photoCaptureResult, frame) =>
                {
                    Debug.Log("Photo capture done.");

                    var buffer = new List<byte>();
                    frame.CopyRawImageDataIntoBuffer(buffer);
                    var texture = new Texture2D(2, 2);
                    var imageData = buffer.ToArray();
                    texture.LoadImage(imageData);
                    var imageThumbnail = new ImageThumbnail
                    {
                        ImageData = imageData,
                        Texture = texture
                    };

                    completionSource.TrySetResult(imageThumbnail);
                });
#else
                    var tex = new Texture2D(webCamTexture.width, webCamTexture.height);
                    tex.SetPixels(webCamTexture.GetPixels());
                    tex.Apply();
                    var data = tex.EncodeToPNG();
                    var imageThumbnail = new ImageThumbnail
                    {
                        ImageData = data,
                        Texture = tex
                    };
                    
                    completionSource.TrySetResult(imageThumbnail);
#endif
            });

            return completionSource.Task;
        });
    }

    public void SetLabel(string text, Vector3 scale)
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

        return;
        // return newLabel;
    }

    public void CreateFoodLabel(GameObject label, Color txtcolor, string txt, Vector3 pos, Quaternion rotation)
    {

        Labels.Add(Instantiate(label, pos, rotation));
        TextMesh t = label.GetComponent<TextMesh>();

        t.anchor = TextAnchor.MiddleCenter;
        t.alignment = TextAlignment.Center;
        t.fontSize = 34;
        t.text = txt;
        t.color = txtcolor;
    }

    public void OnLabelManipulatingLabel()
    {

        Vector3 camPos = Camera.main.transform.position;
        Quaternion camRot = Camera.main.transform.rotation;

        GameObject foodDetailsPan = Instantiate(foodDetailsPrefab, new Vector3(camPos.x, camPos.y - 0.15f, camPos.z + 0.4f), camRot);
        foodDetailsPan.transform.localScale = new Vector3(0.4f, 0.4f, 0.4f);
        foodDetailsPan.SetActive(true);

        GameObject foodDescription = GameObject.Find("Description");
        UnityEngine.UI.Text foodDescriptionText = foodDescription.GetComponent<UnityEngine.UI.Text>();

        /*
        GameObject foodCalories = GameObject.Find("CaloriesSub");
        UnityEngine.UI.Text caloriesAnalysis = foodCalories.GetComponent<UnityEngine.UI.Text>();

        GameObject foodNutrition = GameObject.Find("NutritionSub");
        UnityEngine.UI.Text nutritionAnalysis = foodNutrition.GetComponent<UnityEngine.UI.Text>();

        GameObject foodRecommandation = GameObject.Find("RecommandationSub");
        UnityEngine.UI.Text recommmandationText = foodRecommandation.GetComponent<UnityEngine.UI.Text>();
        */

        TextMesh labelTextMesh = gameObject.GetComponent<TextMesh>();

        foodDescriptionText.text = "Name: " + labelTextMesh.text;

        switch (labelTextMesh.text)
        {

            case "Vegetable":
                foodDescriptionText.text += @"






Weight: 132g, 
18.24 kCAL.
";
                foodDescriptionText.text += @"



Protein: 1.98g,
Fat: 0.13g,
Carbenhydrate: 4.22g.
";
                foodDescriptionText.text += @"


Highly Recommanded.
";
                break;

            case "Rice":
                foodDescriptionText.text += @"






Weight: 150g, 
174 kCAL.
";
                foodDescriptionText.text += @"



Protein: 3.9g,
Fat: 0.45g,
Carbenhydrate: 38.85g.
";
                foodDescriptionText.text += @"


Recommanded.";

                break;

            case "Braised Pork":
                foodDescriptionText.text += @"






Weight: 180g, 
846 kCAL.
";
                foodDescriptionText.text += @"



Protein: 13.77g,
Fat: 77.45g,
Carbenhydrate: 9.09g.
";
                foodDescriptionText.text += @"


Not Recommanded.";


                break;

            case "Coke0cal":
                foodDescriptionText.text += @"






Volumn: 330ml,
0 kCAL.
";
                foodDescriptionText.text += @"



Protein: 0g,
Fat: 0g,
Carbenhydrate: 0g.
";
                foodDescriptionText.text += @"


Recommanded.";


                break;

        }

        Destroy(foodDetailsPan, 3);


    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
