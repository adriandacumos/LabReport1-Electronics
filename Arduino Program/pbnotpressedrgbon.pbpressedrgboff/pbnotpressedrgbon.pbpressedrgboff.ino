/* This is PB Not Pressed RGB White PB Pressed RGB Off Program.
To display a RGB White in the 4 pin LED, all the connections of the pin
must be high or on. */

int redPin = 9; // red pin of the RGB LED connected to pin 9
int greenPin = 10; // green pin of the RGB LED connected to pin 10
int bluePin = 11; // blue pin of the RGB LED connected to pin 11
int buttonPin = 8; // pushbutton connected to pin 8
int buttonState = 0; // variable for storing the button state

void setup() {
  pinMode(redPin, OUTPUT); // set the red pin as output
  pinMode(greenPin, OUTPUT); // set the green pin as output
  pinMode(bluePin, OUTPUT); // set the blue pin as output
  pinMode(buttonPin, INPUT); // set the pushbutton pin as input with pullup resistor
}

void loop() {
  buttonState = digitalRead(buttonPin); // read the state of the pushbutton
  if (buttonState == HIGH) { // if pushbutton is pressed
    digitalWrite(redPin, LOW); // turn off the red LED
    digitalWrite(greenPin, LOW); // turn off the green LED
    digitalWrite(bluePin, LOW); // turn off the blue LED
  } else { // if pushbutton is not pressed
    digitalWrite(redPin, HIGH); // set the red LED to maximum brightness
    digitalWrite(greenPin, HIGH); // set the green LED to maximum brightness
    digitalWrite(bluePin, HIGH); // set the blue LED to maximum brightness
  }
}

