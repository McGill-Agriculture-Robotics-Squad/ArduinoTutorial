// Pins for the LEDs
int ledPins[] = {2, 3, 4, 5};  // change these to your LED pin numbers
int numLeds = 4;

void setup() {
  // set all LED pins as outputs
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Using a for loop
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);  // turn on LED
    delay(500);
    digitalWrite(ledPins[i], LOW);   // turn off LED
  }

  delay(1000); // pause before while loop
}
