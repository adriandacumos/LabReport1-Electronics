/* This is the PB Not Pressed RG On PB Pressed RB On Program.
To display a RG on the LED, red and green should be high or on.
To display a RB on the LED, red and blue should be high or on. */

int redPin = 9;   // red pin of the RGB LED connected to pin 9
int greenPin = 10; // green pin of the RGB LED connected to pin 10
int bluePin = 11;  // blue pin of the RGB LED connected to pin 11
int buttonPin = 8; // push button connected to pin 8
int buttonState;   // variable for storing the button state

void setup() {
  pinMode(redPin, OUTPUT);   // set the red pin as an output
  pinMode(greenPin, OUTPUT); // set the green pin as an output
  pinMode(bluePin, OUTPUT);  // set the blue pin as an output
  pinMode(buttonPin, INPUT_PULLUP); // set the button pin as an input with pull-up resistor
}

void loop() {
  buttonState = digitalRead(buttonPin); // read the state of the button
  if (buttonState == LOW) { // if button is not pressed
    digitalWrite(redPin, HIGH);   // turn on the red LED
    digitalWrite(greenPin, HIGH); // turn on the green LED
    digitalWrite(bluePin, LOW);   // turn off the blue LED
  } else { // if button is pressed
    digitalWrite(redPin, HIGH);  // turn on the red LED
    digitalWrite(greenPin, LOW); // turn off the green LED
    digitalWrite(bluePin, HIGH); // turn on the blue LED
  }
}

