/* This is the RGB Light Chaser. RGB stands for red, green and blue.
The program creates a "chasing" effect on the LEDs where a single LED
glows 3 different colors one by one. In each step in the loop, the program
sets the voltage of one of the LED pins to a high value, turning on the LED
and creating the appearance of a single-color light. After half a second,
the program turns off the LED by setting the voltage to a low value.
With mixture of colors from RGB, it can create different colors such as
yellow, purple and white. White appears when all colors are high or on.
Yellow appears when red and green are hign or on. Purple appears when
red and blue are hign or on. */

int redPin = 12;   // red LED connected to pin 12
int greenPin = 10; // green LED connected to pin 10
int bluePin = 8;  // blue LED connected to pin 8

void setup() 
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() 
{
  // RED LED
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
  delay(500); 
  
  // GREEN LED
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  delay(500); 
  
  // BLUE LED
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  delay(500);  
  
  // WHITE LED
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, HIGH);
  delay(500);
  
  // YELLOW LED
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, LOW);
  delay(500);  
  
  // PURPLE LED
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, HIGH);
  delay(500);  
}

