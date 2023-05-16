int diode_pin=8;



void setup() 

{
  pinMode(diode_pin,OUTPUT);
  // put your setup code here, to run once:

}

void loop() 
{
digitalWrite(diode_pin,HIGH);
delay(10000);
digitalWrite(diode_pin,LOW);
delay(1000);
  // put your main code here, to run repeatedly:

}
