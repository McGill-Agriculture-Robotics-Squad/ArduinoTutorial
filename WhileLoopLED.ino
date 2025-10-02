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
  
  while (j < numLeds) {
    digitalWrite(ledPins[j], HIGH);  // turn on LED
    delay(500);
    digitalWrite(ledPins[j], LOW);   // turn off LED
    j++;
  }

  delay(1000); // pause before repeating everything again
}
