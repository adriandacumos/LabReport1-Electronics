/* This is the Arduino PB Pullup Program. 
The PB Pullup Program sets pin 8 as an input and activates the pull-up
resistor on that pin. It then reads the state of the input and sends the
result to the serial monitor. This allows the user to see the effect of 
the pull-up resistor on the input signal and verify that it is functioning
correctly.

In the serial monitor, when PB is not pressed, it should give a value of 1.
If PB is pressed, the value should change to 0. */

int buttonPin = 8; // set the pin number for the pushbutton
int buttonState = 0; // variable for storing the button state

void setup() {
  pinMode(buttonPin,INPUT); // set the button pin as input with pullup resistor
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

