void setup() 
{
  pinMode(11,OUTPUT);
}

void loop() 
{
  for (int i=1500;i<2000;i++)
    {
    tone(11,i);
    delay(2);
     }
for (int i=2000;i>1500;i--)
    {
    tone(11,i);
    delay(2);
     }  
}
