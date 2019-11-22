
/*Programmer: Willliam Lin
 * Date: 11.6.19
 * Program: Blink
 * 
 * This program will turn on an LED for specified amounts of time, turn it off, and back on in a While Loop
 * 
 * Update: 11.22.19
 * Prgram: Update Blink to allow my LED to fade
 */

// itialize our led to Pin 13
int led = 9;        //the pin that the LED is attached to on the Arduino board
int brightness = 0; //how bright the LED is
int fadeAmount = 5;

void setup() {
  // Using the Function pinMode to call the vairable led and provide OUTPUT
  pinMode(led, OUTPUT);
}

void loop() {
  //set the brightness of pin9 (LED)
  analogWrite(led, brightness);

  //change the brightness for the next time through the loop
  brightness = brightness + fadeAmount;

  //reverses the direction of the fading at the end of the fade
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount;
  }
  delay(30);
  }
  
