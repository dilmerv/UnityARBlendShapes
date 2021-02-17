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

    [Header("Eye Reference Options")]
    [SerializeField]
    // when this is enabled we copy the rotation from the original eye transforms
    // and replace the rotation on the new still eye transforms
    private bool copyRotationFromEyes = false;
    
    [SerializeField]
    private GameObject leftEyeReplacement = null;

    [SerializeField]
    private GameObject rightEyeReplacement = null;

    [SerializeField]
    private float eyeUpdateFrequency = 0.05f; // every 5 milliseconds

    private float eyeUpdateTimer = 0; // to store elapsed time since last update

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

    void Update() => ApplyCopyEyeRotation();

    private void ApplyCopyEyeRotation()
    {
        eyeUpdateTimer += Time.deltaTime;

        if (eyeUpdateTimer < eyeUpdateFrequency) return; // check if frequency has not been reached

        eyeUpdateTimer = 0; // reset timer

        if (copyRotationFromEyes && leftEyeReplacement != null && rightEyeReplacement != null)
        {
            leftEyeReplacement.transform.rotation = arFace?.leftEye?.rotation ?? Quaternion.identity;
            rightEyeReplacement.transform.rotation = arFace?.rightEye?.rotation ?? Quaternion.identity;
        }
    }

    void OnFaceUpdated(ARFaceUpdatedEventArgs args)
    {
        if(arFace?.leftEye != null && leftEye == null) // only happens the first time to instantiate left eye 
        {
            leftEye = Instantiate(leftEyePrefab, arFace.leftEye);
            leftEye.name = "LeftEye";
            leftEye.SetActive(false);
        }

        if(arFace?.rightEye != null && rightEye == null) // only happens the first time to instantiate right eye 
        {
            rightEye = Instantiate(rightEyePrefab, arFace.rightEye);
            leftEye.name = "RightEye";
            rightEye.SetActive(false);
        }

        // check tracking && set visibility
        if(arFace?.trackingState == TrackingState.Tracking && ARSession.state > ARSessionState.Ready)
        {
            leftEye?.SetActive(true && !copyRotationFromEyes);
            rightEye?.SetActive(true && !copyRotationFromEyes);
        }
    }

    void OnDisable() 
    {
        arFace.updated -= OnFaceUpdated;
        leftEye.SetActive(false);
        rightEye.SetActive(false);
    }
}
