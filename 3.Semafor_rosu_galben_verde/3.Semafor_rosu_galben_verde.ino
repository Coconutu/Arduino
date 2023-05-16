int led_rosu=13;
int led_galben=12;
int led_verde=11;
int mult=3000;
int putin=1000;

void setup() 
{
  pinMode(led_rosu,OUTPUT);
  pinMode(led_galben,OUTPUT);
  pinMode(led_verde,OUTPUT);
}

void loop() 
{
  digitalWrite(led_rosu,HIGH);
  delay(mult);
  digitalWrite(led_galben,HIGH);
  delay(putin);
  digitalWrite(led_rosu,LOW);
  digitalWrite(led_galben,LOW);
  digitalWrite(led_verde,HIGH);
  delay(mult);
  digitalWrite(led_galben,HIGH);
  delay(putin);
  digitalWrite(led_verde,LOW);
  digitalWrite(led_galben,LOW);    
}
