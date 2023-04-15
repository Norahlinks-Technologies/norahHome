#include <Arduino.h>
#include "home.h"
#include <LiquidCrystal_I2C.h>
#include <Servo.h>

DCMotor gate (PB1, PB2);
LiquidCrystal_I2C lcd(0x27, 16, 2);
norahHome home (&gate, &lcd);
void setup()
{
    gate.begin();
    lcd.init();
    home.begin();
}
 

void loop()
{
    home.openGate();
    delay(1000);
    home.closeGate();

}