/* This is Arduino PB Input Pullup Program.
It has the same results as the External Pullup Program. In the serial monitor,
when PB is not pressed, it must display a value of 1. When PB is pressed, the value 
will be 0. */

int buttonPin = 8; // set the pin number for the pushbutton
int buttonState = 0; // variable for storing the button state

void setup() {
  pinMode(buttonPin, INPUT_PULLUP); // set the button pin as input with pullup resistor
  Serial.begin(9600); // initialize serial communication at 9600 baud rate
  pinMode(13, OUTPUT); // set pin 13 as an output
}

void loop() {
  buttonState = digitalRead(buttonPin); // read the state of the button
  Serial.println(buttonState); // print the button state to the serial monitor
  if (buttonState) {
    digitalWrite(13, HIGH); // turn on LED connected to pin 13
  } else digitalWrite(13,LOW);
}

