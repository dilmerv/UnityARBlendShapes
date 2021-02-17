using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARFace))]
public class AREyeManager : MonoBehaviour
{
    [SerializeField]
    private GameObject leftEyePrefab = null;

    [SerializeField]
    private GameObject rightEyePrefab = null;

    [SerializeField]
    // when this is enabled we copy the rotation from the original eye transforms
    // and replace the rotation on the new still eye transforms
    private bool copyRotationFromEyes = false;
    
    [SerializeField]
    private GameObject leftEyeReplacement = null;

    [SerializeField]
    private GameObject rightEyeReplacement = null;

    private ARFace arFace;

    private GameObject leftEye, rightEye;

    void Start()
    {
        arFace = GetComponent<ARFace>();
        ARFaceManager arFaceManager = FindObjectOfType<ARFaceManager>();

        if(arFaceManager != null && arFaceManager.subsystem.SubsystemDescriptor.supportsEyeTracking)
        {
            arFace.updated += OnFaceUpdated;
        }
    }

    void Update()
    {
        if(copyRotationFromEyes && leftEyeReplacement != null && rightEyeReplacement != null)
        {
            leftEyeReplacement.transform.rotation = arFace.leftEye.rotation;
            rightEyeReplacement.transform.rotation = arFace.rightEye.rotation;
        }
    }
    
    void OnFaceUpdated(ARFaceUpdatedEventArgs args)
    {
        if(arFace.leftEye != null && leftEye == null)
        {
            leftEye = Instantiate(leftEyePrefab, arFace.leftEye);
            leftEye.name = "LeftEye";
            leftEye.SetActive(false);
        }

        if(arFace.rightEye != null && rightEye == null)
        {
            rightEye = Instantiate(rightEyePrefab, arFace.rightEye);
            leftEye.name = "RightEye";
            rightEye.SetActive(false);
        }

        // check tracking && set visibility
        if(arFace.trackingState == TrackingState.Tracking && ARSession.state > ARSessionState.Ready)
        {
            if(leftEye != null)
            {
                leftEye.SetActive(true && !copyRotationFromEyes);
            }
            if(rightEye != null)
            {
                rightEye.SetActive(true && !copyRotationFromEyes);
            }
        }
    }

    void OnDisable() 
    {
        arFace.updated -= OnFaceUpdated;
        leftEye.SetActive(false);
        rightEye.SetActive(false);
    }
}
