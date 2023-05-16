void setup() 
{
  // put your setup code here, to run once:
  pinMode(11,INPUT);
  Serial.begin(9600);
}

void loop() 
{
  int starebuton=digitalRead(11);
  Serial.println(starebuton);
  delay(10);
  // put your main code here, to run repeatedly:

}
