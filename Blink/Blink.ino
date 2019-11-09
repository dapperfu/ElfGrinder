volatile uint8_t pin = 13;

void setup() {
  // initialize digital pin 13 as an output.
  pinMode(pin, OUTPUT);
  Serial.begin(15200);
}

// the loop function runs over and over again forever
void loop() {
  Serial.print("Pin: ");
  Serial.println(pin);
  digitalWrite(pin, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(1000);             // wait for a second
  digitalWrite(pin, LOW);  // turn the LED off by making the voltage LOW
  delay(1000);             // wait for a second
}
