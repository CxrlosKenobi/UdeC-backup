// Script del semaforo + LCD + Referencias a Star Wars con Arduino

#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int verde = 8;
int amarillo = 9;
int rojo = 10;

void setup(){
    lcd.begin(16, 2);

    pinMode(rojo, OUTPUT);
    pinMode(amarillo, OUTPUT);
    pinMode(verde, OUTPUT);
}

void led(int color, bool status){
    if (status == true){
        digitalWrite(color, HIGH);
    }
    else{
        digitalWrite(color, LOW);
    }
}


void loop()
{   
    while(true){
        lcd.print("Hello there !");
        lcd.setCursor(0, 0);
        delay(500);
        lcd.clear();

        for (int i = 0; i < 7; i++){
            led(verde, true);
            lcd.print(i+1);
            lcd.setCursor(0, 0);
            delay(1000);
        }
        lcd.clear();

        lcd.print("General Kenobi ...");
        lcd.setCursor(0, 0);
        delay(500);
        lcd.clear();

        led(amarillo, true);
        for (int i = 0; i < 4; i++){    
            lcd.print(i+1);
            lcd.setCursor(0, 0);
            led(verde, false);
            delay(1000);
            led(verde, true);
            delay(1000);
        }
        lcd.clear();

        lcd.print("You're a gold one. ");
        lcd.setCursor(0, 0);
        delay(500);
        led(verde, false);
        led(amarillo, false);
        lcd.clear();
        
        for (int i = 0; i < 7; i++){
            led(rojo, true);
            lcd.print(i+1);
            lcd.setCursor(0, 0);
            delay(1000);
        }
        led(rojo, false);
        lcd.clear();
    }
}
