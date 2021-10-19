using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Demo : MonoBehaviour
{
    public GameObject foodLabelPrefab;
    public GameObject foodDetailsPrefab;

    public void OnPressButton()
    {
        Vector3 camPos = Camera.main.transform.position;
        Quaternion camRot = Camera.main.transform.rotation;

        Vector3 pos1 = new Vector3(camPos.x - 0.3f, camPos.y- 0.35f, camPos.z+ 1f);
        Vector3 pos2 = new Vector3(camPos.x, camPos.y - 0.35f, camPos.z + 1f);
        Vector3 pos3 = new Vector3(camPos.x + 0.3f, camPos.y - 0.35f, camPos.z+1f);

        CreateFoodLabel(foodLabelPrefab, Color.green, "Vegetable", pos1, camRot);
        CreateFoodLabel(foodLabelPrefab, Color.yellow, "Rice", pos2, camRot);
        CreateFoodLabel(foodLabelPrefab, Color.red, "Braised Pork", pos3, camRot);

    }

    private void CreateFoodLabel(GameObject label, Color txtcolor, string txt,Vector3 pos, Quaternion rotation)
    {

        Instantiate(label, pos, rotation);
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

        GameObject foodDetailsPan = Instantiate(foodDetailsPrefab, new Vector3(camPos.x, camPos.y-0.15f, camPos.z+0.4f), camRot);
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
                foodDescriptionText.text+= @"






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

        }

        Destroy(foodDetailsPan, 3);


    }



}
