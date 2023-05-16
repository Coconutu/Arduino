int led1_pin=3;
int led2_pin=4;
int led3_pin=5;
int led4_pin=6;
int led5_pin=7;
int led6_pin=8;
int led7_pin=9;
int dif_pin=13;


void setup() 
  {
    pinMode(led1_pin,OUTPUT);
    pinMode(led2_pin,OUTPUT);
    pinMode(led3_pin,OUTPUT);
    pinMode(led4_pin,OUTPUT);
    pinMode(led5_pin,OUTPUT);
    pinMode(led6_pin,OUTPUT);
    pinMode(led7_pin,OUTPUT);
    pinMode(dif_pin,OUTPUT);
   
  }

void loop() 
{
  for (int nr=9;nr>-1;nr--)
    {
      afiseaza_nr(nr);
      delay(1000);
    }
 tone(dif_pin,1000,3000);
 delay(2000);

}

void afiseaza_nr(int numar)
{
switch (numar)
  {
    case 1:
    {
      digitalWrite(led1_pin,HIGH);
      digitalWrite(led2_pin,LOW);  
      digitalWrite(led3_pin,LOW);  
      digitalWrite(led4_pin,LOW);  
      digitalWrite(led5_pin,LOW);  
      digitalWrite(led6_pin,LOW);  
      digitalWrite(led7_pin,HIGH);  
     
          
    }
    break;
  case 2:
    {
      digitalWrite(led1_pin,HIGH);
      digitalWrite(led2_pin,HIGH);  
      digitalWrite(led3_pin,LOW);  
      digitalWrite(led4_pin,HIGH);  
      digitalWrite(led5_pin,HIGH);  
      digitalWrite(led6_pin,HIGH);  
      digitalWrite(led7_pin,LOW);  
     
          
    }
    break;
    case 3:
    {
      digitalWrite(led1_pin,HIGH);
      digitalWrite(led2_pin,HIGH);  
      digitalWrite(led3_pin,LOW);  
      digitalWrite(led4_pin,HIGH);  
      digitalWrite(led5_pin,LOW);  
      digitalWrite(led6_pin,HIGH);  
      digitalWrite(led7_pin,HIGH);  
     
          
    }
    break;
    case 4:
    {
      digitalWrite(led1_pin,HIGH);
      digitalWrite(led2_pin,LOW);  
      digitalWrite(led3_pin,HIGH);  
      digitalWrite(led4_pin,HIGH);  
      digitalWrite(led5_pin,LOW);  
      digitalWrite(led6_pin,LOW);  
      digitalWrite(led7_pin,HIGH);  
     
          
    }
    break;
    case 5:
    {
      digitalWrite(led1_pin,LOW);
      digitalWrite(led2_pin,HIGH);  
      digitalWrite(led3_pin,HIGH);  
      digitalWrite(led4_pin,HIGH);  
      digitalWrite(led5_pin,LOW);  
      digitalWrite(led6_pin,HIGH);  
      digitalWrite(led7_pin,HIGH);  
     
          
    }
    break;
    case 6:
    {
      digitalWrite(led1_pin,LOW);
      digitalWrite(led2_pin,HIGH);  
      digitalWrite(led3_pin,HIGH);  
      digitalWrite(led4_pin,HIGH);  
      digitalWrite(led5_pin,HIGH);  
      digitalWrite(led6_pin,HIGH);  
      digitalWrite(led7_pin,HIGH);  
     
          
    }
    break;
    case 7:
    {
      digitalWrite(led1_pin,HIGH);
      digitalWrite(led2_pin,HIGH);  
      digitalWrite(led3_pin,LOW);  
      digitalWrite(led4_pin,LOW);  
      digitalWrite(led5_pin,LOW);  
      digitalWrite(led6_pin,LOW);  
      digitalWrite(led7_pin,HIGH);  
     
          
    }
    break;
    case 8:
    {
      digitalWrite(led1_pin,HIGH);
      digitalWrite(led2_pin,HIGH);  
      digitalWrite(led3_pin,HIGH);  
      digitalWrite(led4_pin,HIGH);  
      digitalWrite(led5_pin,HIGH);  
      digitalWrite(led6_pin,HIGH);  
      digitalWrite(led7_pin,HIGH);  
     
          
    }
    break;
    case 9:
    {
      digitalWrite(led1_pin,HIGH);
      digitalWrite(led2_pin,HIGH);  
      digitalWrite(led3_pin,HIGH);  
      digitalWrite(led4_pin,HIGH);  
      digitalWrite(led5_pin,LOW);  
      digitalWrite(led6_pin,HIGH);  
      digitalWrite(led7_pin,HIGH);  
     
          
    }
    break;
    case 0:
    {
      digitalWrite(led1_pin,HIGH);
      digitalWrite(led2_pin,HIGH);  
      digitalWrite(led3_pin,HIGH);  
      digitalWrite(led4_pin,LOW);  
      digitalWrite(led5_pin,HIGH);  
      digitalWrite(led6_pin,HIGH);  
      digitalWrite(led7_pin,HIGH);  
     
          
    }
    break;

  }
}