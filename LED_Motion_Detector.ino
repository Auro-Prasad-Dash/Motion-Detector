int led=2;
int motionsensor=3;

void setup()
{
  pinMode(motionsensor,INPUT);
  pinMode(led,OUTPUT);  
}

void loop()
{
  int buttonstate=digitalRead(motionsensor);
  if(buttonstate==HIGH)
  {
    digitalWrite(led,HIGH);
    delay(1000);
   }
   else
   {
    digitalWrite(led,LOW);
    delay(1000);
    }
}
