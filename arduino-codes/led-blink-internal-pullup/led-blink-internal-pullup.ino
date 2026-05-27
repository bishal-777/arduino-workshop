void setup() {

  pinMode(8, OUTPUT);

  pinMode(2, INPUT_PULLUP);
}

void loop() {

  digitalWrite(8, HIGH);
  delay(1000);

  digitalWrite(8, LOW);
  delay(1000);
}