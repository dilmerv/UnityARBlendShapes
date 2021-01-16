using UnityEngine;
using UnityEngine.XR.ARFoundation;
using UnityEngine.XR.ARSubsystems;

[RequireComponent(typeof(ARFace))]
public class AREyeManager : MonoBehaviour
{
    [SerializeField]
    private GameObject leftEyePrefab;

    [SerializeField]
    private GameObject rightEyePrefab;

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
                leftEye.SetActive(true);
            }
            if(rightEye != null)
            {
                rightEye.SetActive(true);
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
