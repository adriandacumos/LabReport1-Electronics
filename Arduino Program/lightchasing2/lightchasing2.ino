/* This the light chaser program 2.
It has the same goal as the light chaser program 1, but this program has
a different specific pattern for the LEDs. The LEDs glow back and forth. */

void setup()
{
  pinMode(12, OUTPUT); // set pin 12 as an output
  pinMode(10, OUTPUT); // set pin 10 as an output
  pinMode(8, OUTPUT); // set pin 8 as an output
  pinMode(6, OUTPUT); // set pin 6 as an output
}

void loop()
{
  digitalWrite(12, HIGH); // turn on LED connected to pin 12
  delay(500); // wait for 500 milliseconds
  digitalWrite(12, LOW); // turn off LED connected to pin 12
  digitalWrite(10, HIGH); // turn on LED connected to pin 10
  delay(500); // wait for 500 milliseconds
  digitalWrite(10, LOW); // turn off LED connected to pin 10
  digitalWrite(8, HIGH); // turn on LED connected to pin 8
  delay(500); // wait for 500 milliseconds
  digitalWrite(8, LOW); // turn off LED connected to pin 8
  digitalWrite(6, HIGH); // turn on LED connected to pin 6
  delay(500); // wait for 500 milliseconds
  digitalWrite(6, LOW); // turn off LED connected to pin 6
  digitalWrite(6, HIGH); // turn on LED connected to pin 6
  delay(500); // wait for 500 milliseconds
  digitalWrite(6, LOW); // turn off LED connected to pin 6
  digitalWrite(8, HIGH); // turn on LED connected to pin 8
  delay(500); // wait for 500 milliseconds
  digitalWrite(8, LOW); // turn off LED connected to pin 8
  digitalWrite(10, HIGH); // turn on LED connected to pin 10
  delay(500); // wait for 500 milliseconds
  digitalWrite(10, LOW); // turn off LED connected to pin 10
  digitalWrite(12, HIGH); // turn on LED connected to pin 12
  delay(500); // wait for 500 milliseconds
  digitalWrite(12, LOW); // turn off LED connected to pin 12
}

