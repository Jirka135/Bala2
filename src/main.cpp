#include <M5Stack.h>
#include <Wire.h>
#include "bala.h"

Bala bala;


//
void setup() {
    M5.begin();
    delay(500);
    Serial.begin(115200);
    // Init I2C
	Wire.begin();
	delay(500);

    // Display info
    M5.Lcd.setTextFont(1);
    M5.Lcd.setTextSize(3);
    M5.Lcd.setTextColor(WHITE);
    M5.Lcd.println("Jeduuu...");

    // Init M5Bala         
} 

void loop() {
    M5.update();
    // M5 Loop
    if(M5.BtnA.isPressed()){
        //m5bala.setMotor(100,100);
        bala.SetServoAngle(90,90);
        M5.Lcd.setCursor(10,0);
        M5.Lcd.println("Jede");
        delay(2000);
    }else{
        M5.Lcd.setCursor(10,0);
        M5.Lcd.println("Nejede");
        bala.SetSpeed(0,0);
    } 
    delay(1000);
    M5.Lcd.fillScreen(BLACK);
}
//