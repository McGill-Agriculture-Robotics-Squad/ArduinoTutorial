//Define variables for trig and echo as const int
const int trig_pin = 3;
const int echo_pin = 2;
const int thresh_dist =10;
void setup(){
pinMode(trig_pin, OUTPUT);
pinMode(echo_pin, INPUT);
pinMode(4, OUTPUT);
Serial.begin(9600); // starts the serial communication
}
void loop(){
  digitalWrite(trig_pin, LOW); // Clears the trigPin
  delayMicroseconds(2);  //wait 2 microseconds

   // This will send a pulse 10 microsecond
  digitalWrite(trig_pin, HIGH); // Sets the trigPin on HIGH state 
  delayMicroseconds(10); // wait for 10 microseconds
  digitalWrite(trig_pin, LOW); // sets the trigPin to LOW
  
  long duration = pulseIn(echo_pin, HIGH); // Reads the echoPin, returns the sound wave travel time in microseconds
  
  long distance = duration * 0.034 / 2; // Calculating the distance
  
  // Prints the distance on the Serial Monitor
  Serial.print("Distance: ");
  Serial.println(distance);

  if (distance <= thresh_dist ) {
     digitalWrite(4, HIGH);
  } else {
  digitalWrite(4, LOW);
 }

delay(100);

}
