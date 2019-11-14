
/*Programmer: Willliam Lin
 * Date: 11.6.19
 * Program: digitalRead & the Serial Port
 * 
 *Reads a digital input on pin2, prints
 */

//digital pin2 has a push button attached to it
int pushButton = 2;

void setup() {
  //initializes serial communication at 9600 bits per second
  Serial.begin(9600);
  //make the pushButton pin an input
  pinMode(pushButton, INPUT);

}

void loop() {
  // read the input pin
  int buttonState = digitalRead(pushButton;
  //print out the state of the button
  Serial.println(buttonState);
  delay(250); // delay in between readings for stability

  }
  
