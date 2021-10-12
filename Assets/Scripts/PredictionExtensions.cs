using UnityEngine;

namespace CustomVision
{
    public static class PredictionExtensions
    {
        public static Vector2 GetCenter(this Prediction p)
        {
            return new Vector2((float)(p.boundingbox.left + (0.5 * p.boundingbox.width)),
                (float)(p.boundingbox.top + (0.5 * p.boundingbox.height)));
        }
    }
}