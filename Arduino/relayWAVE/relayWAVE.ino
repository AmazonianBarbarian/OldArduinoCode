#include <Servo.h> 

Servo myservo;
int MotorControl = 5;
int MotorControl2 = 4;
int MotorControl3 = 6;
int MotorControl4 = 7;
int pos = 0;

void setup()  {
  pinMode(MotorControl, OUTPUT);
  pinMode(MotorControl2, OUTPUT);
  pinMode(MotorControl3, OUTPUT);
  pinMode(MotorControl4, OUTPUT);
  myservo.attach(2);
}

void loop()  
{
  wave();
  run();
  wave();

  
}

 
int wave() 
{ 
  for(pos = 90; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
  {                                  // in steps of 1 degree 
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
  for(pos = 180; pos>=91; pos-=1)     // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);              // tell servo to go to position in variable 'pos' 
    delay(15);                       // waits 15ms for the servo to reach the position 
  } 
} 

int run()
{
  digitalWrite(MotorControl,HIGH);
  digitalWrite(MotorControl2,HIGH);
  delay(1200);
  digitalWrite(MotorControl,LOW);
  digitalWrite(MotorControl2,LOW);
  delay(1000);
}
