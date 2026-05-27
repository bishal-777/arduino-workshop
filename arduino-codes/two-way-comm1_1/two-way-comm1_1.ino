#include <SoftwareSerial.h>

SoftwareSerial mySerial(7, 8);
//rx, tx

void setup() {

  Serial.begin(9600);
  mySerial.begin(9600);

  Serial.println("UNO 1 Ready");
}

void loop() {

  mySerial.println("Hello from UNO 1");

  if (mySerial.available()) {

    String msg = mySerial.readStringUntil('\n');

    Serial.print("Received: ");
    Serial.println(msg);
  }

  delay(1000);
}