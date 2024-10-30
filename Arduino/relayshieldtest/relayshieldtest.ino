int MotorControl = 5;    // Digital Arduino Pin used to control the motor
int MotorControl2 = 4;
int MotorControl3 = 6;    // Digital Arduino Pin used to control the motor
int MotorControl4 = 7;

// the setup routine runs once when you press reset:
void setup()  {
  pinMode(MotorControl, OUTPUT); // declare pin 5 to be an output:
  pinMode(MotorControl2, OUTPUT);
  pinMode(MotorControl3, OUTPUT);
  pinMode(MotorControl4, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop()  {
  // NO3 and COM3 Connected (the motor is running)
  digitalWrite(MotorControl,HIGH); // wait 1000 milliseconds (1 second)
  digitalWrite(MotorControl2,LOW);
  delay(2700); // wait 1000 milliseconds (1 second)
  // NO3 and COM3 Disconnected (the motor is not running)
  digitalWrite(MotorControl,HIGH);
  digitalWrite(MotorControl2,HIGH);
  delay(1000); // wait 1000 milliseconds (1 second)
}
