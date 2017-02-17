using UnityEngine;
using System.Collections;
using System;

public class AssetLoader : MonoBehaviour {

    public string BundelURL;
    public string AssetName;
    public int version = 1;
   // public Material icon_mat;
    AssetBundle bundle;


    void Start()
    {
        
        StartCoroutine(DownloadAndCache());
    }

    IEnumerator DownloadAndCache()
    {
        yield return StartCoroutine(AssetBundleManager.downloadAssetBundle(BundelURL, version));

        bundle = AssetBundleManager.getAssetBundle(BundelURL, version);

        GameObject cleaner = Instantiate(bundle.LoadAsset("bathroomcleaner") as GameObject);
        cleaner.transform.parent = GameObject.Find("ImageTarget").transform;
        //GameObject mat = cat.transform.GetChild(0).gameObject;
        cleaner.transform.localScale = new Vector3(4f, 4f, 4f);
        cleaner.transform.rotation = Quaternion.Euler(0.0f, 0.0f, 0.0f);
        cleaner.transform.position = new Vector3(0.0f, 0.0f, 0.0f);

        


      //  mat.GetComponent<Renderer>().material = icon_mat;

        bundle.Unload(false);
    }
}
