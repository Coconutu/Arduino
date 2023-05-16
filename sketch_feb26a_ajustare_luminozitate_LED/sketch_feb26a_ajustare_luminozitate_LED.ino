int ledpin=13;
int inpin=7;
int val=0;

void setup() 
{
  pinMode(ledpin, OUTPUT);
  pinMode(inpin, INPUT);

}

void loop() 
{
val=digitalRead(inpin);
digitalWrite(ledpin,val);
}
