/* This is the Arduino Blink program.
The blink program uses a single LED connected to digital pin 13.
The program turns the LED on for half a second,
then turns it off for the same period of time, and repeats this cycle indefinitely.
This creates the blinking effect. */

void setup() 
{
  pinMode(13, OUTPUT);  // initialize digital pin 13 as an output.
}

// the loop function runs over and over again
void loop() 
{
  digitalWrite(13, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for half a second
  digitalWrite(13, LOW);   // turn the LED off by making the voltage LOW
  delay(500);              // wait for half a second
}

