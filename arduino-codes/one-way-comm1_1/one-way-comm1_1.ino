#include <SoftwareSerial.h>

SoftwareSerial mySerial(7, 8);
//rx, tx

void setup() {

  mySerial.begin(9600);
}

void loop() {

  mySerial.println("Hello from UNO 1");

  delay(1000);
}