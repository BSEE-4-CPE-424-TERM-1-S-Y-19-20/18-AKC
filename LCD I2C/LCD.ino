#include <Wire.h>  // Comes with Arduino IDE
#include <LiquidCrystal_I2C.h> // Para sa LCD nga 4 Wires Ra

LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);  // Set the LCD I2C address

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
      lcd.backlight();
}

void loop() {
  // put your main code here, to run repeatedly:
 lcd.clear();
 lcd.setCursor(0,0);
 lcd.print("HELLO !!!");
 lcd.setCursor(0,1);
 lcd.print("WORLD !!!");
 delay(2000);
}
