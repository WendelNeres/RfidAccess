#include <SPI.h>
#include <MFRC522.h>
//#include <Servo.h>
#include <VarSpeedServo.h> 

#include <LiquidCrystal.h>

#define SS_PIN 10
#define RST_PIN 9

String UID = "13 C3 73 95";
byte lock = 0;


LiquidCrystal lcd(2,3,4,5,6,7,14);
MFRC522 rfid(SS_PIN, RST_PIN);
//Servo servo;
VarSpeedServo servo;


void setup() {
  Serial.begin(9600);

  lcd.begin(16,2);

  servo.attach(6);
  servo.write(80);

  SPI.begin();
  rfid.PCD_Init();

}

void loop() {
  

}
