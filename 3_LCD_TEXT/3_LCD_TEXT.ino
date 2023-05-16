
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
  delay(2500);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Ce vrea baiatu");
  lcd.setCursor(0, 1);
  lcd.print("doar mami-i");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("poate da!");
  delay(1500);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Duticu duticu,");
  lcd.setCursor(0, 1);
  lcd.print("nono duticu!");
  delay(2500);
  lcd.clear();

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Tiri, tiri");
  lcd.setCursor(0, 1);
  lcd.print("tiri ti!");
  delay(2500);
  lcd.clear();

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Bunutz, bunutz");
  lcd.setCursor(0, 1);
  lcd.print("al meu Serafimut!");
  delay(3000);
  lcd.clear();


}