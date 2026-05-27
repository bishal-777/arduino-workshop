#include <SoftwareSerial.h>

SoftwareSerial mySerial(7, 8);

void setup() {

  Serial.begin(9600);

  mySerial.begin(9600);
}

void loop() {

  if (mySerial.available()) {

    String msg = mySerial.readStringUntil('\n');

    Serial.println(msg);
  }
}