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
  if(!rfid.PICC_IsNewCardPresent())
    return;
  if(!rfid.PICC_ReadCardSerial())
    return;
  

  Serial.println("Lendo Cartao");

  String ID = "";

  for(byte i = 0; i < rfid.uid.size; i++){
    ID.concat(String(rfid.uid.uidByte[i] < 0x10 ? " 0" : " "));
    ID.concat(String(rfid.uid.uidByte[i], HEX));
    delay(300);
  }
  ID.toUpperCase();
  lcd.print(ID);

  if(ID.substring(1) == UID && lock == 0 ){
    Serial.println("Porta Aberta");
    lcd.clear();
    lcd.print("Porta Aberta");
    //digitalWrite(pinoRele, HIGH);
    servo.slowmove(80,50);
    //servo.write(80);
    lock = 1;

  }else if(ID.substring(1) == UID && lock ==1){
    Serial.print("Porta fechada");
    lcd.clear();
    lcd.print("Porta fechada");
    //digitalWrite(pinoRele, LOW);
    servo.slowmove(10,50);
    //servo.write(10);
    delay(3000);

    lock =0;
  }else{
    delay(2000);
  }


}
