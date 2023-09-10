#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,20,2);

int pinSensor = 8; // defino el pin con el que va a trabajar el sensor
int val; // defino un valor a la variable
int led = 13; // defino la led con la que se va a prender el codigo
int buzzer = 7; // defino el pin que va a utilizar le buzzer

void setup() {
    //inicializo el LCD
  lcd.init();
  //enciendo la luz de fondo
  lcd.backlight();

  // declaro que la led va a ser de salida
  pinMode(led,OUTPUT);
  // declaro que el sensor de inclinacion es de entrada
  pinMode(pinSensor,INPUT);
  // declaro q el buzzer va a ser de salida 
  pinMode(buzzer,OUTPUT);
}

void loop() {
  val = digitalRead(pinSensor);
  lcd.setCursor(0, 0);
  lcd.print(" Alarma  ");
  lcd.setCursor(0,1);
  lcd.print(" Desactivada ");
  if (val == HIGH){
    lcd.clear();
    lcd.print("Alarma Activada");
    digitalWrite(led,HIGH);
    analogWrite(buzzer,255);
    delay(300);
    lcd.clear();
  }
  else{
    digitalWrite(led,LOW);
    analogWrite(buzzer,0);
  }
}
