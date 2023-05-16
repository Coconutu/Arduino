const int trigPin =10;
const int echoPin =9;
long duration;
int distance;
int ledpinred=13;
int ledpinyellow=12;
int ledpingreen=11;

void setup() 
{
 
   pinMode(trigPin, OUTPUT); 
   pinMode(echoPin, INPUT); 
   Serial.begin(9600);
   pinMode(ledpinred,OUTPUT);
   pinMode(ledpinyellow,OUTPUT);
   pinMode(ledpingreen,OUTPUT);


}
void loop() 
{
   digitalWrite(trigPin, LOW);
   delayMicroseconds(2);
   digitalWrite(trigPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(trigPin, LOW);
   duration = pulseIn(echoPin, HIGH);
   distance = duration * 0.034 / 2;
   Serial.print("Distance: ");
   Serial.println(distance);
   
   if (distance<10 and distance>0)
    {
     digitalWrite(ledpinred,HIGH);
     digitalWrite(ledpinyellow,LOW);
     digitalWrite(ledpingreen,LOW);
     delay(100);
     
    }
   
   if (distance<50 and distance>10)
    {
     digitalWrite(ledpinred,LOW);
     digitalWrite(ledpinyellow,HIGH);
     digitalWrite(ledpingreen,LOW);
     delay(100);
     
    }
     
   if (distance<200 and distance>50)
    {
     digitalWrite(ledpinred,LOW);
     digitalWrite(ledpinyellow,LOW);
     digitalWrite(ledpingreen,HIGH);
     delay(100);
     }
    
    
    
}
