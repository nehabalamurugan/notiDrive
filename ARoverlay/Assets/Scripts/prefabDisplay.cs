using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class prefabDisplay : MonoBehaviour
{
    public List<GameObject> prefabs; // List of prefabs to be spawned
    public float spawnInterval = 30.0f; // Time interval between spawns
    public float displayTime = 10.0f; // Time to display each 
    public AudioClip displaySound; // Sound effect to play when displaying a new sprite

    private AudioSource audioSource;
    private int currentPrefabIndex = 0;
    private float nextSpawnTime = 0.0f;
    private float currentDisplayTime = 0.0f;
    private GameObject currentPrefabInstance;

    private void Start()
    {
        Debug.Log("started code");
        // Check if the prefabs list is empty
        if (prefabs.Count == 0)
        {
            Debug.LogError("No prefabs assigned to PrefabSpawner!");
            return;
        }
        audioSource = GetComponent<AudioSource>();


        // Initialize the spawn and display timings
        nextSpawnTime = Time.time + spawnInterval;
        currentDisplayTime = Time.time + displayTime;
        Debug.Log(nextSpawnTime);
        Debug.Log(currentDisplayTime);
    }

    private void Update()
    {
        // Check if it's time to spawn the next prefab
        if (Time.time >= nextSpawnTime)
        {
            Debug.Log("it is time for change");

            // Destroy the previous prefab instance, if any
            if (currentPrefabInstance != null)
            {
                Destroy(currentPrefabInstance);
                currentPrefabInstance = null;
            }

            // Spawn the next prefab
            currentPrefabInstance = Instantiate(prefabs[currentPrefabIndex], transform.position, Quaternion.identity);

            // Update the timings
            nextSpawnTime = Time.time + spawnInterval;
            currentDisplayTime = Time.time + displayTime;

            // Increment the prefab index
            currentPrefabIndex = (currentPrefabIndex + 1) % prefabs.Count;
        }

        // Check if the current prefab's display time has elapsed
        if (currentPrefabInstance != null && Time.time >= currentDisplayTime)
        {
            Debug.Log("must hide notif");
            // Destroy the current prefab instance
            Destroy(currentPrefabInstance);
            currentPrefabInstance = null;
        }
    }
}
