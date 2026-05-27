int ldrPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(ldrPin);

  Serial.print("LDR Value: ");
  Serial.println(value);

  delay(500);
}