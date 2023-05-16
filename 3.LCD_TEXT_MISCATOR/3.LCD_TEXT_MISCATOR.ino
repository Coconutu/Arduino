
#include <LiquidCrystal.h>

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  // set up the LCD's number of columns and rows: 
  lcd.begin(16,2);
}

void loop() 
{
 
  lcd.setCursor(0, 0);
  lcd.print("Serafimut, un");
  lcd.setCursor(0, 1);
  lcd.print("baiat dragut!");
  delay(5000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Ce vrea baiatu");
  lcd.setCursor(0, 1);
  lcd.print("mama-i poate da!");
  delay(5000);
lcd.clear();  
}