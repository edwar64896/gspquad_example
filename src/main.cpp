#include <Arduino.h>
#include <gspquad.h>

void encUp(int dif) {
  Serial.println("Encoder going up");
}

void encDown(int dif) {
  Serial.println("Encoder going down");
}

gspQuad encoder1(9,10,encUp,encDown);

void setup() {
  // put your setup code here, to run once:

  Serial.begin(115200);

  gspGrouped::register_instance(& encoder1);

  gspQuad::startCheckAll();
}

void loop() {
  // put your main code here, to run repeatedly:
}