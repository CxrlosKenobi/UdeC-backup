// Script del semaforo solo con Arduino

int verde = 8;
int amarillo = 9;
int rojo = 10;

void setup(){
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
        led(verde, true);
        delay(7000);

        led(amarillo, true);
        for (int i = 0; i < 4; i++){    
            led(verde, false);
            delay(500);
            led(verde, true);
            delay(500);
        }

        led(verde, false);
        led(amarillo, false);       
        for (int i = 0; i < 7; i++){
            led(rojo, true);
            delay(1000);
        }
        led(rojo, false);
    }
}
//Solucion unica