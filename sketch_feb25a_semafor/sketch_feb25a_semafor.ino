byte led_verde_pin = 13;
byte led_galben_pin = 12;
byte led_rosu_pin = 11;
int pauza = 5000;
void setup() 
{
  pinMode(led_rosu_pin, OUTPUT);
  pinMode(led_galben_pin, OUTPUT);
  pinMode(led_verde_pin, OUTPUT);
}

void loop() 
{
  digitalWrite(led_verde_pin, HIGH);
  delay(pauza);
  digitalWrite(led_verde_pin, LOW);
  digitalWrite(led_galben_pin, HIGH);
  delay(1500);
  digitalWrite(led_galben_pin, LOW);
  digitalWrite(led_rosu_pin, HIGH);
  delay(pauza);
  digitalWrite(led_rosu_pin, LOW);
  delay(1000);
}
