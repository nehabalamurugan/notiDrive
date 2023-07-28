using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine;
#if UNITY_EDITOR
    using UnityEditor;
#endif

public class spriteDisplay : MonoBehaviour
{
    public Sprite[] sprites; // Array of sprites to display
    private SpriteRenderer spriteRenderer;
    public AudioClip displaySound; // Sound effect to play when displaying a new sprite
    private AudioSource audioSource;
    private int currentSpriteIndex = 0;
    private float displayInterval = 30f; // Interval between sprite changes
    private float displayDuration = 10f; // Duration to display each sprite
    private float timer = 0f;
    private bool spriteVisible = false;
    private bool firstSpriteVisible = false;
    private static System.Random random = new System.Random();
    //private int numOfNotifications = 4;


    private void Start()
    {
        spriteRenderer = GetComponent<SpriteRenderer>();
        audioSource = GetComponent<AudioSource>();
        Debug.Log("Start waiting...");
        Invoke("firstNotificaitonManager", 10f);
    }

    private void Update()
    {
        // Increment the timer

        timer += Time.deltaTime;
        //Debug.Log(timer);

        // Check if it's time to hide the first sprite (10sec )
        if (firstSpriteVisible && timer >= 20f)
        {
            Debug.Log("got in here");
            firstSpriteVisible = false;
            spriteRenderer.sprite = null; // Hide the sprite
        }

        displayInterval += GenerateRandomFloat(0f, 10f); //randomizing the time of appearance of the next notification
        //Debug.Log(displayInterval);

        // Check if it's time to display a new sprite
        if (timer >= displayInterval)
        {
            timer = 0f; // Reset the timer
            spriteVisible = true;


            // Move to the next sprite
            currentSpriteIndex++;


            // Set the new sprite
            if (currentSpriteIndex < sprites.Length)
            {
                spriteRenderer.sprite = sprites[currentSpriteIndex];
                audioSource.Play();

            }

        }
        else
        {
            displayInterval = 30f;
        }

        // Check if it's time to hide the sprite
        if (spriteVisible && timer >= displayDuration)
        {
            spriteVisible = false;
            spriteRenderer.sprite = null; // Hide the sprite
        }
    }

    //display of the first notificaiton after the 10 second wait
    private void firstNotificaitonManager()
    {
        Debug.Log("Done waiting...");

        // Set the initial sprite
        spriteRenderer.sprite = sprites[currentSpriteIndex];
        firstSpriteVisible = true;

        // Play the display sound effect
        audioSource.Play();

    }

    public static float GenerateRandomFloat(float minValue, float maxValue)
    {
        float randomFloat = (float)(random.NextDouble() * (maxValue - minValue) + minValue);
        return randomFloat;
    }
}
