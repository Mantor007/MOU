// Library version:1.1.5
// Example of picking custom I2C pins on ESP32

#include <Arduino.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define I2C_SDA 21
#define I2C_SCL 22

int switchpin = 15;
int switchstate = 0;




#define led1 23
#define led2 19
#define led3 18
#define led4 5
#define led5 17
#define led6 16
#define led7 4
#define led8 0

LiquidCrystal_I2C lcd(0x27, 20, 4);
void setup(){
  lcd.init(I2C_SDA, I2C_SCL); // initialize the lcd to use user defined I2C pins
	lcd.backlight();
	lcd.setCursor(0,0);
	lcd.print("menu");
	
pinMode(15,INPUT_PULLUP);
pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(led7,OUTPUT);
  pinMode(led8,OUTPUT);
}


void loop(){
  static int menu = 0;
  int switchstate = digitalRead(switchpin);
  if (switchstate == HIGH){
    delay(500);
    menu = (menu % 6) + 1;
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("menu:");
    lcd.print(menu);
    delay(500);
  }
  if ( menu == 1){
    digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,HIGH);
  }
  else if (menu == 2)
  {
    digitalWrite(led2,HIGH);
    digitalWrite(led4,HIGH);
    digitalWrite(led6,HIGH);
    digitalWrite(led8,HIGH);
    digitalWrite(led1,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led7,LOW);
    delay(100);
    digitalWrite(led1,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led5,HIGH);
    digitalWrite(led7,HIGH);

    digitalWrite(led2,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led6,LOW);
    digitalWrite(led8,LOW);
delay(100);
  }
  else if (menu == 3){
    digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  delay(100);
digitalWrite(led1,HIGH);
delay(100);
  digitalWrite(led2,HIGH);
  delay(100);
  digitalWrite(led3,HIGH);
  delay(100);
  digitalWrite(led4,HIGH);
  delay(100);
  digitalWrite(led5,HIGH);
  delay(100);
  digitalWrite(led6,HIGH);
  delay(100);
  digitalWrite(led7,HIGH);
  delay(100);
  digitalWrite(led8,HIGH);
  delay(100);
  }
  else if (menu == 4){
     digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  delay(100);
   digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  delay(100);
   digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  delay(100);
   digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,HIGH);
  delay(100);
  }
  else if(menu == 5){
    digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  delay(100);
   digitalWrite(led1,HIGH);
   delay(100);
  digitalWrite(led2,HIGH);
   delay(100);
  digitalWrite(led3,HIGH);
   delay(100);
  digitalWrite(led4,HIGH);
   delay(100);
  digitalWrite(led5,HIGH);
   delay(100);
  digitalWrite(led6,HIGH);
   delay(100);
  digitalWrite(led7,HIGH);
   delay(100);
  digitalWrite(led8,HIGH);
   delay(100);
   digitalWrite(led8,LOW);
   delay(100);
  digitalWrite(led7,LOW);
  delay(100);
  digitalWrite(led6,LOW);
  delay(100);
  digitalWrite(led5,LOW);
  delay(100);
  digitalWrite(led4,LOW);
  delay(100);
  digitalWrite(led3,LOW);
  delay(100);
  digitalWrite(led2,LOW);
  delay(100);
  digitalWrite(led1,LOW);
  delay(100);

  }
  else if(menu == 6){
   
    digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
  digitalWrite(led3,HIGH);
  digitalWrite(led4,HIGH);
  digitalWrite(led5,HIGH);
  digitalWrite(led6,HIGH);
  digitalWrite(led7,HIGH);
  digitalWrite(led8,HIGH);
  delay(100);
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  delay(100);
  }
}
