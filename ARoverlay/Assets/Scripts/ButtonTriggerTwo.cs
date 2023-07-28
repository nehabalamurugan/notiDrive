using Microsoft.MixedReality.Toolkit.UI;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonTriggerTwo : MonoBehaviour

{
    public Sprite[] sprites; // Array of sprites to display
    public SpriteRenderer spriteRenderer;
    public AudioSource notifSound; // Sound effect to play when displaying a new sprite
    //public AudioSource caseClip;
    private int currentSpriteIndex = 0;
    private float displayInterval = 30f; // Interval between sprite changes
    private float displayDuration = 10f; // Duration to display each sprite
    private float timer = 0f;
    private bool spriteVisible = false;
    private bool firstSpriteVisible = false;
    private static System.Random random = new System.Random();

    //button has been selected
    private bool buttonSelected;

    // Start is called before the first frame update
    void Start()
    {

        //notifSound = GetComponent<AudioSource>();

        // Get the Interactable component of the button
        Interactable interactable = GetComponent<Interactable>();

        // Add event handler for the OnClick event
        interactable.OnClick.AddListener(OnButtonClicked);
    }

    private void OnButtonClicked()
    {
        Debug.Log("buton click receieved");
        Invoke("DisplaySprites", 15f);
        buttonSelected = true;

        //caseClip.Play();
    }

    private void DisplaySprites()
    {

        Debug.Log("displaying first");
        spriteRenderer.sprite = sprites[currentSpriteIndex];
        firstSpriteVisible = true;
        notifSound.Play();
        
    }

    private void Update()
    {
        // Increment the timer
        if (buttonSelected)
        {
            timer += Time.deltaTime;
            //Debug.Log(timer);

            // Check if it's time to hide the first sprite (10sec )
            if (firstSpriteVisible && timer >= 25f)
            {
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
                    notifSound.Play();

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
                timer = 0f; //reset timer after the display of notification
            }
        }
    }

    public static float GenerateRandomFloat(float minValue, float maxValue)
    {
        float randomFloat = (float)(random.NextDouble() * (maxValue - minValue) + minValue);
        return randomFloat;
    }


}

    
