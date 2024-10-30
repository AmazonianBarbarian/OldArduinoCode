
int led = 13;
int button = 7;
int putton = 4;
int val = 0;
int con = 0;


void setup() 
{                
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  pinMode(putton, INPUT);  
}

//*********************************************************************
void loop() 
{
  val = digitalRead(button);
  con = digitalRead(putton);
  if (val == HIGH)
  {
    digitalWrite(led, LOW);
    delay(120);
  }
  
  if (con == HIGH)
  {
    digitalWrite(led, LOW);
    delay(60);
    digitalWrite(led, HIGH);
    delay(60);
  }
  
  else
  {
    digitalWrite(led, HIGH);
  }
}
