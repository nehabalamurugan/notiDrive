using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PrefabSpawner : MonoBehaviour
{
    public List<GameObject> prefabs; // List of prefabs to be spawned
    public float displayTime = 10.0f; // Time to display each prefab
    public float minInterval = 20.0f; // Minimum time interval between prefabs
    public float maxInterval = 30.0f; // Maximum time interval between prefabs
    public Vector3 spawnPosition = new Vector3(0f, 0f, 0.8f); // Position to spawn the prefabs
    public Vector3 spawnScale = new Vector3(0.05f, 0.05f, 0.05f); // Scale of the prefabs
    public AudioClip displaySound; // Sound effect to play when displaying a new sprite

    private int currentPrefabIndex = 0;
    private float nextSpawnTime = 0.0f;
    private float currentDisplayTime = 0.0f;
    private GameObject currentPrefabInstance;
    private AudioSource audioSource;


    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("starting sim"); 
        audioSource = GetComponent<AudioSource>();

        // Check if the prefabs list is empty
        if (prefabs.Count == 0)
        {
            Debug.LogError("No prefabs assigned to PrefabSpawner!");
            return;
        }

        // Initialize the spawn and display timings
        currentDisplayTime = Time.time + displayTime;
        SetNextSpawnTime();
    }

    // Update is called once per frame
    void Update()
    {
        // Check if it's time to spawn the next prefab
        if (Time.time >= nextSpawnTime)
        {
            Debug.Log("Displaying at" + currentDisplayTime);
            // Destroy the previous prefab instance, if any
            if (currentPrefabInstance != null)
            {
                Destroy(currentPrefabInstance);
                currentPrefabInstance = null;
            }

            // Spawn the next prefab
            currentPrefabInstance = Instantiate(prefabs[currentPrefabIndex], spawnPosition, Quaternion.identity);
            currentPrefabInstance.transform.localScale = spawnScale;
            audioSource.Play();


            // Update the timings
            currentDisplayTime = Time.time + displayTime;
            SetNextSpawnTime();

            // Increment the prefab index
            currentPrefabIndex = (currentPrefabIndex + 1) % prefabs.Count;
        }

        // Check if the current prefab's display time has elapsed
        if (currentPrefabInstance != null && Time.time >= currentDisplayTime)
        {
            // Destroy the current prefab instance
            Destroy(currentPrefabInstance);
            currentPrefabInstance = null;
        }
    }

    private void SetNextSpawnTime()
    {
        float interval = Random.Range(minInterval, maxInterval);
        nextSpawnTime = Time.time + interval;
    }
}
