using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARKit;

[Serializable]
public class Mapping
{
    public ARKitBlendShapeLocation location;
    public string name;
}

[CreateAssetMenu(fileName = "BlendShapeMapping", menuName = "BlendShapeMappings/Mappings", order = 1)]
public class BlendShapeMappings : ScriptableObject
{
    public const string BLENDSHAPE_EXPRESSION = "ExpressionBlendshape.";

    public float CoefficientScale = 100.0f;

    [SerializeField]
    public List<Mapping> Mappings = new List<Mapping>
    {

        new Mapping { location = ARKitBlendShapeLocation.BrowDownLeft, name = $"{BLENDSHAPE_EXPRESSION}BrowsD_L" },
        new Mapping { location = ARKitBlendShapeLocation.BrowDownRight , name = $"{BLENDSHAPE_EXPRESSION}BrowsD_R" },
        new Mapping { location = ARKitBlendShapeLocation.BrowInnerUp , name = $"{BLENDSHAPE_EXPRESSION}BrowsU_C" },
        new Mapping { location = ARKitBlendShapeLocation.BrowOuterUpLeft , name = $"{BLENDSHAPE_EXPRESSION}BrowsU_L" },
        new Mapping { location = ARKitBlendShapeLocation.BrowOuterUpRight , name = $"{BLENDSHAPE_EXPRESSION}BrowsU_R" },
        new Mapping { location = ARKitBlendShapeLocation.CheekPuff , name = $"{BLENDSHAPE_EXPRESSION}CheekPuff" },
        new Mapping { location = ARKitBlendShapeLocation.CheekSquintLeft , name = $"{BLENDSHAPE_EXPRESSION}CheekSquint_L" },
        new Mapping { location = ARKitBlendShapeLocation.CheekSquintRight , name = $"{BLENDSHAPE_EXPRESSION}CheekSquint_R" },
        new Mapping { location = ARKitBlendShapeLocation.EyeBlinkLeft , name = $"{BLENDSHAPE_EXPRESSION}EyeBlink_L" },
        new Mapping { location = ARKitBlendShapeLocation.EyeBlinkRight , name = $"{BLENDSHAPE_EXPRESSION}EyeBlink_R" },
        new Mapping { location = ARKitBlendShapeLocation.EyeLookDownLeft , name = $"{BLENDSHAPE_EXPRESSION}EyeDown_L" },
        new Mapping { location = ARKitBlendShapeLocation.EyeLookDownRight , name = $"{BLENDSHAPE_EXPRESSION}EyeDown_R" },
        new Mapping { location = ARKitBlendShapeLocation.EyeLookInLeft , name = $"{BLENDSHAPE_EXPRESSION}EyeIn_L" },
        new Mapping { location = ARKitBlendShapeLocation.EyeLookInRight , name = $"{BLENDSHAPE_EXPRESSION}EyeIn_R" },
        new Mapping { location = ARKitBlendShapeLocation.EyeLookOutLeft , name = $"{BLENDSHAPE_EXPRESSION}EyeOut_L" },
        new Mapping { location = ARKitBlendShapeLocation.EyeLookOutRight , name = $"{BLENDSHAPE_EXPRESSION}EyeOut_R" },
        new Mapping { location = ARKitBlendShapeLocation.EyeLookUpLeft , name = $"{BLENDSHAPE_EXPRESSION}EyeUp_L" },
        new Mapping { location = ARKitBlendShapeLocation.EyeLookUpRight , name = $"{BLENDSHAPE_EXPRESSION}EyeUp_R" },
        new Mapping { location = ARKitBlendShapeLocation.EyeSquintLeft , name = $"{BLENDSHAPE_EXPRESSION}EyeSquint_L" },
        new Mapping { location = ARKitBlendShapeLocation.EyeSquintRight , name = $"{BLENDSHAPE_EXPRESSION}EyeSquint_R" },
        new Mapping { location = ARKitBlendShapeLocation.EyeWideLeft , name = $"{BLENDSHAPE_EXPRESSION}EyeOpen_L" },
        new Mapping { location = ARKitBlendShapeLocation.EyeWideRight , name = $"{BLENDSHAPE_EXPRESSION}EyeOpen_R" },
        new Mapping { location = ARKitBlendShapeLocation.JawForward , name = $"{BLENDSHAPE_EXPRESSION}JawFwd" },
        new Mapping { location = ARKitBlendShapeLocation.JawLeft , name = $"{BLENDSHAPE_EXPRESSION}JawLeft" },
        new Mapping { location = ARKitBlendShapeLocation.JawOpen , name = $"{BLENDSHAPE_EXPRESSION}JawOpen" },
        new Mapping { location = ARKitBlendShapeLocation.JawRight , name = $"{BLENDSHAPE_EXPRESSION}JawRight" },
        new Mapping { location = ARKitBlendShapeLocation.MouthClose , name = $"{BLENDSHAPE_EXPRESSION}MouthClose" },
        new Mapping { location = ARKitBlendShapeLocation.MouthDimpleLeft , name = $"{BLENDSHAPE_EXPRESSION}MouthDimple_L" },
        new Mapping { location = ARKitBlendShapeLocation.MouthDimpleRight , name = $"{BLENDSHAPE_EXPRESSION}MouthDimple_R" },
        new Mapping { location = ARKitBlendShapeLocation.MouthFrownLeft , name = $"{BLENDSHAPE_EXPRESSION}MouthFrown_L" },
        new Mapping { location = ARKitBlendShapeLocation.MouthFrownRight , name = $"{BLENDSHAPE_EXPRESSION}MouthFrown_R" },
        new Mapping { location = ARKitBlendShapeLocation.MouthFunnel , name = $"{BLENDSHAPE_EXPRESSION}MouthFunnel" },
        new Mapping { location = ARKitBlendShapeLocation.MouthLeft , name = $"{BLENDSHAPE_EXPRESSION}MouthLeft" },
        new Mapping { location = ARKitBlendShapeLocation.MouthLowerDownLeft , name = $"{BLENDSHAPE_EXPRESSION}MouthLowerDown_L" },
        new Mapping { location = ARKitBlendShapeLocation.MouthLowerDownRight , name = $"{BLENDSHAPE_EXPRESSION}MouthLowerDown_R" },
        new Mapping { location = ARKitBlendShapeLocation.MouthPressLeft , name = $"{BLENDSHAPE_EXPRESSION}MouthPress_L" },
        new Mapping { location = ARKitBlendShapeLocation.MouthPressRight , name = $"{BLENDSHAPE_EXPRESSION}MouthPress_R" },
        new Mapping { location = ARKitBlendShapeLocation.MouthPucker , name = $"{BLENDSHAPE_EXPRESSION}MouthPucker" },
        new Mapping { location = ARKitBlendShapeLocation.MouthRight , name = $"{BLENDSHAPE_EXPRESSION}MouthRight" },
        new Mapping { location = ARKitBlendShapeLocation.MouthRollLower , name = $"{BLENDSHAPE_EXPRESSION}MouthRollLower" },
        new Mapping { location = ARKitBlendShapeLocation.MouthRollUpper , name = $"{BLENDSHAPE_EXPRESSION}MouthRollUpper" },
        new Mapping { location = ARKitBlendShapeLocation.MouthShrugLower , name = $"{BLENDSHAPE_EXPRESSION}MouthShrugLower" },
        new Mapping { location = ARKitBlendShapeLocation.MouthShrugUpper , name = $"{BLENDSHAPE_EXPRESSION}MouthShrugUpper" },
        new Mapping { location = ARKitBlendShapeLocation.MouthSmileLeft , name = $"{BLENDSHAPE_EXPRESSION}MouthSmile_L" },
        new Mapping { location = ARKitBlendShapeLocation.MouthSmileRight , name = $"{BLENDSHAPE_EXPRESSION}MouthSmile_R" },
        new Mapping { location = ARKitBlendShapeLocation.MouthStretchLeft , name = $"{BLENDSHAPE_EXPRESSION}MouthStretch_L" },
        new Mapping { location = ARKitBlendShapeLocation.MouthStretchRight , name = $"{BLENDSHAPE_EXPRESSION}MouthStretch_R" },
        new Mapping { location = ARKitBlendShapeLocation.MouthUpperUpLeft , name = $"{BLENDSHAPE_EXPRESSION}MouthUpperUp_L" },
        new Mapping { location = ARKitBlendShapeLocation.MouthUpperUpRight , name = $"{BLENDSHAPE_EXPRESSION}MouthUpperUp_R" },
        new Mapping { location = ARKitBlendShapeLocation.NoseSneerLeft , name = $"{BLENDSHAPE_EXPRESSION}NoseSneer_L" },
        new Mapping { location = ARKitBlendShapeLocation.NoseSneerRight , name = $"{BLENDSHAPE_EXPRESSION}NoseSneer_R" },
        new Mapping { location = ARKitBlendShapeLocation.TongueOut , name = $"{BLENDSHAPE_EXPRESSION}TongueOut" }
    };
}