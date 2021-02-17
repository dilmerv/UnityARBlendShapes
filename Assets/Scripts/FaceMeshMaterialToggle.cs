using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class FaceMeshMaterialToggle : MonoBehaviour
{
    public enum SurfaceType
    {
        Opaque,
        Transparent
    }

    [SerializeField]
    private Material opaqueFaceMeshMaterial;

    [SerializeField]
    private Material transparentFaceMeshMaterial;

    [SerializeField]
    private Button toggleButton;

    private bool opaqueIsActive = true;

    public void Toggle()
    {
        opaqueIsActive = !opaqueIsActive;
        var buttonText = toggleButton.GetComponentInChildren<TextMeshProUGUI>();

        if(opaqueIsActive)
        {
            buttonText.text = "Opaque Off";
        }
        else
        {
            buttonText.text = "Opaque On";
        }

        var heads = GameObject.FindGameObjectsWithTag("Head");
        SwitchMaterial(heads, opaqueIsActive);
    }

    private void SwitchMaterial(GameObject[] heads, bool isOpaqueActive)
    {
        foreach(GameObject head in heads)
        {
            var meshRenderer = head.GetComponent<SkinnedMeshRenderer>();
            meshRenderer.material = isOpaqueActive ? transparentFaceMeshMaterial : opaqueFaceMeshMaterial;
        }
    }
}
