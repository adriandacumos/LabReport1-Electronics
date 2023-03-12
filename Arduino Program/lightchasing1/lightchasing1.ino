/* This is the light chaser program 1.
The goal of this program is blink multiple LEDs connected to
digital output pins in a sequential manner. In this case, the
assigned digital output pins are 12,10,8 and 6.*/

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
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(12, LOW); // turn off LED connected to pin 12
  digitalWrite(10, HIGH); // turn on LED connected to pin 10
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(10, LOW); // turn off LED connected to pin 10
  digitalWrite(8, HIGH); // turn on LED connected to pin 8
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(8, LOW); // turn off LED connected to pin 8
  digitalWrite(6, HIGH); // turn on LED connected to pin 6
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(6, LOW); // turn off LED connected to pin 6
}

