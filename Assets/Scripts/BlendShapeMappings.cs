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
    public const string BLENDSHAPE_EXPRESSION = "blendShape2.";

    public float CoefficientScale = 100.0f;

    [SerializeField]
    public List<Mapping> Mappings = new List<Mapping>
    {

        new Mapping { location = ARKitBlendShapeLocation.BrowDownLeft, name = $"{BLENDSHAPE_EXPRESSION}browsD_L" },
        new Mapping { location = ARKitBlendShapeLocation.BrowDownRight , name = $"{BLENDSHAPE_EXPRESSION}browsD_R" },
        new Mapping { location = ARKitBlendShapeLocation.BrowInnerUp , name = $"{BLENDSHAPE_EXPRESSION}browsU_C" },
        new Mapping { location = ARKitBlendShapeLocation.BrowOuterUpLeft , name = $"{BLENDSHAPE_EXPRESSION}browsU_L" },
        new Mapping { location = ARKitBlendShapeLocation.BrowOuterUpRight , name = $"{BLENDSHAPE_EXPRESSION}browsU_R" },
        new Mapping { location = ARKitBlendShapeLocation.CheekPuff , name = $"{BLENDSHAPE_EXPRESSION}cheekPuff" },
        new Mapping { location = ARKitBlendShapeLocation.CheekSquintLeft , name = $"{BLENDSHAPE_EXPRESSION}cheekSquint_L" },
        new Mapping { location = ARKitBlendShapeLocation.CheekSquintRight , name = $"{BLENDSHAPE_EXPRESSION}cheekSquint_R" },
        new Mapping { location = ARKitBlendShapeLocation.EyeBlinkLeft , name = $"{BLENDSHAPE_EXPRESSION}eyeBlink_L" },
        new Mapping { location = ARKitBlendShapeLocation.EyeBlinkRight , name = $"{BLENDSHAPE_EXPRESSION}eyeBlink_R" },
        new Mapping { location = ARKitBlendShapeLocation.EyeLookDownLeft , name = $"{BLENDSHAPE_EXPRESSION}eyeDown_L" },
        new Mapping { location = ARKitBlendShapeLocation.EyeLookDownRight , name = $"{BLENDSHAPE_EXPRESSION}eyeDown_R" },
        new Mapping { location = ARKitBlendShapeLocation.EyeLookInLeft , name = $"{BLENDSHAPE_EXPRESSION}eyeIn_L" },
        new Mapping { location = ARKitBlendShapeLocation.EyeLookInRight , name = $"{BLENDSHAPE_EXPRESSION}eyeIn_R" },
        new Mapping { location = ARKitBlendShapeLocation.EyeLookOutLeft , name = $"{BLENDSHAPE_EXPRESSION}eyeOut_L" },
        new Mapping { location = ARKitBlendShapeLocation.EyeLookOutRight , name = $"{BLENDSHAPE_EXPRESSION}eyeOut_R" },
        new Mapping { location = ARKitBlendShapeLocation.EyeLookUpLeft , name = $"{BLENDSHAPE_EXPRESSION}eyeUp_L" },
        new Mapping { location = ARKitBlendShapeLocation.EyeLookUpRight , name = $"{BLENDSHAPE_EXPRESSION}eyeUp_R" },
        new Mapping { location = ARKitBlendShapeLocation.EyeSquintLeft , name = $"{BLENDSHAPE_EXPRESSION}eyeSquint_L" },
        new Mapping { location = ARKitBlendShapeLocation.EyeSquintRight , name = $"{BLENDSHAPE_EXPRESSION}eyeSquint_R" },
        new Mapping { location = ARKitBlendShapeLocation.EyeWideLeft , name = $"{BLENDSHAPE_EXPRESSION}eyeOpen_L" },
        new Mapping { location = ARKitBlendShapeLocation.EyeWideRight , name = $"{BLENDSHAPE_EXPRESSION}eyeOpen_R" },
        new Mapping { location = ARKitBlendShapeLocation.JawForward , name = $"{BLENDSHAPE_EXPRESSION}jawFwd" },
        new Mapping { location = ARKitBlendShapeLocation.JawLeft , name = $"{BLENDSHAPE_EXPRESSION}jawLeft" },
        new Mapping { location = ARKitBlendShapeLocation.JawOpen , name = $"{BLENDSHAPE_EXPRESSION}jawOpen" },
        new Mapping { location = ARKitBlendShapeLocation.JawRight , name = $"{BLENDSHAPE_EXPRESSION}jawRight" },
        new Mapping { location = ARKitBlendShapeLocation.MouthClose , name = $"{BLENDSHAPE_EXPRESSION}mouthClose" },
        new Mapping { location = ARKitBlendShapeLocation.MouthDimpleLeft , name = $"{BLENDSHAPE_EXPRESSION}mouthDimple_L" },
        new Mapping { location = ARKitBlendShapeLocation.MouthDimpleRight , name = $"{BLENDSHAPE_EXPRESSION}mouthDimple_R" },
        new Mapping { location = ARKitBlendShapeLocation.MouthFrownLeft , name = $"{BLENDSHAPE_EXPRESSION}mouthFrown_L" },
        new Mapping { location = ARKitBlendShapeLocation.MouthFrownRight , name = $"{BLENDSHAPE_EXPRESSION}mouthFrown_R" },
        new Mapping { location = ARKitBlendShapeLocation.MouthFunnel , name = $"{BLENDSHAPE_EXPRESSION}mouthFunnel" },
        new Mapping { location = ARKitBlendShapeLocation.MouthLeft , name = $"{BLENDSHAPE_EXPRESSION}mouthLeft" },
        new Mapping { location = ARKitBlendShapeLocation.MouthLowerDownLeft , name = $"{BLENDSHAPE_EXPRESSION}mouthLowerDown_L" },
        new Mapping { location = ARKitBlendShapeLocation.MouthLowerDownRight , name = $"{BLENDSHAPE_EXPRESSION}mouthLowerDown_R" },
        new Mapping { location = ARKitBlendShapeLocation.MouthPressLeft , name = $"{BLENDSHAPE_EXPRESSION}mouthPress_L" },
        new Mapping { location = ARKitBlendShapeLocation.MouthPressRight , name = $"{BLENDSHAPE_EXPRESSION}mouthPress_R" },
        new Mapping { location = ARKitBlendShapeLocation.MouthPucker , name = $"{BLENDSHAPE_EXPRESSION}mouthPucker" },
        new Mapping { location = ARKitBlendShapeLocation.MouthRight , name = $"{BLENDSHAPE_EXPRESSION}mouthRight" },
        new Mapping { location = ARKitBlendShapeLocation.MouthRollLower , name = $"{BLENDSHAPE_EXPRESSION}mouthRollLower" },
        new Mapping { location = ARKitBlendShapeLocation.MouthRollUpper , name = $"{BLENDSHAPE_EXPRESSION}mouthRollUpper" },
        new Mapping { location = ARKitBlendShapeLocation.MouthShrugLower , name = $"{BLENDSHAPE_EXPRESSION}mouthShrugLower" },
        new Mapping { location = ARKitBlendShapeLocation.MouthShrugUpper , name = $"{BLENDSHAPE_EXPRESSION}mouthShrugUpper" },
        new Mapping { location = ARKitBlendShapeLocation.MouthSmileLeft , name = $"{BLENDSHAPE_EXPRESSION}mouthSmile_L" },
        new Mapping { location = ARKitBlendShapeLocation.MouthSmileRight , name = $"{BLENDSHAPE_EXPRESSION}mouthSmile_R" },
        new Mapping { location = ARKitBlendShapeLocation.MouthStretchLeft , name = $"{BLENDSHAPE_EXPRESSION}mouthStretch_L" },
        new Mapping { location = ARKitBlendShapeLocation.MouthStretchRight , name = $"{BLENDSHAPE_EXPRESSION}mouthStretch_R" },
        new Mapping { location = ARKitBlendShapeLocation.MouthUpperUpLeft , name = $"{BLENDSHAPE_EXPRESSION}mouthUpperUp_L" },
        new Mapping { location = ARKitBlendShapeLocation.MouthUpperUpRight , name = $"{BLENDSHAPE_EXPRESSION}mouthUpperUp_R" },
        new Mapping { location = ARKitBlendShapeLocation.NoseSneerLeft , name = $"{BLENDSHAPE_EXPRESSION}noseSneer_L" },
        new Mapping { location = ARKitBlendShapeLocation.NoseSneerRight , name = $"{BLENDSHAPE_EXPRESSION}noseSneer_R" },
        new Mapping { location = ARKitBlendShapeLocation.TongueOut , name = $"{BLENDSHAPE_EXPRESSION}tongueOut" }
    };
}