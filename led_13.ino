int led1=13;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led1, HIGH);   
  delay(1000);                       // wait for a second
  digitalWrite(led1, LOW); 
  delay(1000);                       // wait for a second
}
