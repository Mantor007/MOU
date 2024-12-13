#include <Arduino.h>
#define Led_pin1 23
#define led2 19
#define led3 18
#define led4 5
#define potpin 36
#define led5 17
#define led6 16
#define led7 4
#define led8 0

void setup(){
  pinMode(Led_pin1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);

}
void loop(){
  int potValue = analogRead(potpin);
  int range = map(potValue, 0, 4095, 0, 4000);
  if (range >=0 && potValue <=500){
    digitalWrite(Led_pin1, HIGH);
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led5, LOW);
  }else if (range >= 500 && range <=1000 ){
    digitalWrite(led2, HIGH);
    digitalWrite(Led_pin1, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
    digitalWrite(led5, LOW);
  }else if (range >= 1000 && range <=2000){
    digitalWrite(led2, HIGH);
    digitalWrite(Led_pin1, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
  }else if (range >=2000 && range <= 4000){
    digitalWrite(led2, HIGH);
    digitalWrite(Led_pin1, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);
  }


}
