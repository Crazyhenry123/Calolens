using System;
using System.Net.Http;
using System.Net.Http.Headers;
using System.Threading.Tasks;
using Newtonsoft.Json;
using Newtonsoft.Json.Linq;
using UnityEngine;
using CustomVision;
using Assets.Utilities;
using System.Text;
using System.IO;

public class ObjectDetectionManager : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    [Header("Managers")]
    [SerializeField]
    private SceneController sceneController;

    [Header("Azure Settings")]
    [SerializeField]
    private string resourceBaseEndpoint = default;

    [Header("Project Settings")]
    [SerializeField]
    private string apiKey = default;
    [SerializeField]
    private string projectId = default;



    public async void StartComputerVisionDetection()
    {
        sceneController.StartCamera();

        /*
        if (string.IsNullOrEmpty(trackedObject.CustomVisionTagId)
            || string.IsNullOrEmpty(sceneController.CurrentProject.CustomVisionIterationId))
        {
            messageLabel.text = "There is no model trained set for this object.";
            return;
        }
        if (isSearchingWithComputerVision || objectDetectedWithComputerVision)
        {
            return;
        }
        */

      //  SetButtonsInteractiveState(false);
      //  isSearchingWithComputerVision = true;
      //  messageLabel.text = "Look around for object...";


        await SearchWithComputerVision();
        sceneController.StopCamera();
    }

    private async Task SearchWithComputerVision()
    {
    
            await Task.Delay(2000);
            var image = await sceneController.TakePhoto();
            
            string maxScoreTag = null;

 //       AppDispatcher.Instance().Enqueue(() => sceneController.SetLabel("photo taken, trying acv post..", new Vector3(0.03f, 0.03f, 0.03f)));

        try
        {
            var body = await sceneController.ObjectDetectionManager.DetectImage(image, "Iteration2");

       //     AppDispatcher.Instance().Enqueue(() => sceneController.SetLabel("acv response string is : " + body, new Vector3(0.03f, 0.03f, 0.03f)));

      //     var response  = JsonConvert.DeserializeObject<CustomVisionResult>(body);

            JObject jObject = JObject.Parse(body);
            var Predictions = jObject.SelectToken("predictions").ToString();

            JArray jArray = JArray.Parse(Predictions);


            var maxscore = 0.0;


            for (int i =0 ; i < jArray.Count; i++)
            {
                JObject jItem = JObject.Parse(jArray[i].ToString());

                var score = jItem.SelectToken("probability");

                if (Convert.ToDouble(score) > maxscore)
                {
                    maxscore = Convert.ToDouble(score);
                    maxScoreTag = jItem.SelectToken("tagName").ToString();

                }


            }


            // Prediction[] predictions = JsonConvert.DeserializeObject<Prediction[]>(Predictions.ToString());

            //   var response = body.Substring(0, 20);

            //   AppDispatcher.Instance().Enqueue(() => sceneController.SetLabel("Done DeserializeObject with Id" + response, new Vector3(0.03f, 0.03f, 0.03f)));


            //     var prediction = response.Predictions.SingleOrDefault(p => p.TagId == trackedObject.CustomVisionTagId);





            //        if (prediction != null && prediction.Probability > 0.75d)
            //       {

            //   }

            /*
                        var maxscore = 0.0;


                            var cameraTransform = CopyCameraTransForm();
                            var heightFactor = cameraResolution.height / cameraResolution.width;
                            var topCorner = cameraTransform.position + cameraTransform.forward -
                                            cameraTransform.right / 2f +
                                            cameraTransform.up * heightFactor / 2f;

                            var center = r.GetCenter();
                            var recognizedPos = topCorner + cameraTransform.right * center.x -
                                                cameraTransform.up * center.y * heightFactor;


                            for (var i = 0; i < predictions.Length; i++)
                            {
                                var score = predictions[i].probability;

                                if (score > maxscore)
                                {

                                    maxscore = score;
                                    maxScoreTag = predictions[i].tagName;

                                }

                            }
                            */
            AppDispatcher.Instance().Enqueue(() =>sceneController.SetLabel(maxScoreTag, new Vector3(0.03f, 0.03f, 0.03f)));


            
            }
            catch (Exception e)
            {
            AppDispatcher.Instance().Enqueue(() => sceneController.SetLabel("asv request failed with "+e.Message+"\n"+"\n", new Vector3(0.03f, 0.03f, 0.03f)));

        }

    }


    /// <summary>
    /// Get classification info for a provided image.
    /// </summary>
    /// <param name="image">Image data</param>
    /// <param name="publishedName">Published name of the trained model.</param>
    /// <returns>Classification information-</returns>
    public async Task<string> DetectImage(byte[] image, string publishedName)
    {
        // https://docs.microsoft.com/en-us/rest/api/cognitiveservices/customvisionprediction/classifyimage/classifyimage

        using (var client = new HttpClient())
        {
            client.DefaultRequestHeaders.Add("Prediction-Key", apiKey);
            var result = await client.PostAsync(
                $"{resourceBaseEndpoint}/customvision/v3.0/prediction/{projectId}/classify/iterations/{publishedName}/image",
                new ByteArrayContent(image));

            if (!result.IsSuccessStatusCode)
            {
                AppDispatcher.Instance().Enqueue(() => sceneController.SetLabel("result.ReasonPhrase, trying acv post..", new Vector3(0.03f, 0.03f, 0.03f)));
                throw new Exception(result.ReasonPhrase);
            }

           AppDispatcher.Instance().Enqueue(() => sceneController.SetLabel("Good result from asv service..", new Vector3(0.03f, 0.03f, 0.03f)));

          return  await result.Content.ReadAsStringAsync();

   //         AppDispatcher.Instance().Enqueue(() => sceneController.SetLabel("String result from asv service..", new Vector3(0.03f, 0.03f, 0.03f)));

   //         return await sceneController.ObjectDetectionManager.DetectImage(image, "Iteration1");

            //          return JsonConvert.DeserializeObject<CustomVisionResult>(body);
        }
    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
