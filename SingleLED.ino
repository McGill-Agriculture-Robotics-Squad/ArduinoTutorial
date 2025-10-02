void setup(){
// This code will run once
pinMode(LED_BUILTIN, OUTPUT);
}
void loop(){
// This code will run over and over again
digitalWrite(LED_BUILTIN, HIGH) ;
delay(1000);
digitalWrite(LED_BUILTIN, LOW);
delay(1000);
}