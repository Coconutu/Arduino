int lumina;
void setup() 
{
  // put your setup code here, to run once:
  pinMode(11,OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  for(int i=0;i<255;i++)
    {
      analogWrite(11,i);
      lumina=analogRead(11);
      Serial.println(lumina);
      delay(50);
    }
  for(int i=255;i>0;i--)
    {
      analogWrite(11,i);
      lumina=analogRead(11);
      Serial.println(lumina);
      delay(50);
    }
  // put your main code here, to run repeatedly:

}
