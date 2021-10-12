using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Newtonsoft.Json;
using System;

namespace CustomVision
{

    public partial class CustomVisionResult
    {

        public string id { get; set; }
        public string project { get; set; }
        public string iteration { get; set; }
        public string created { get; set; }
        public List<Prediction> predictions { get; set; }
    }

    public partial class Prediction
    {

        public double probability { get; set; }

        public string tagId { get; set; }

        public string tagName { get; set; }

        public BoundingBox boundingbox { get; set; }
    }

    public partial class BoundingBox
    {

        public double left { get; set; }

        public double top { get; set; }

        public double width { get; set; }

        public double height { get; set; }
    }


}






