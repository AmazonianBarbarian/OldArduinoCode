#include "MotorDriver.h"

MotorDriver motor;

void setup()
{
    // initialize
    motor.begin();
}

void loop()
{
    motor.speed(0, 100);            // set motor0 to speed 100
    delay(1000);
    motor.brake(0);                 // brake
    delay(100);
    motor.stop(0);                  // stop
    delay(100);
    motor.speed(1, 100);           // set motor0 to speed 100
    delay(1000);
    motor.brake(1);                 // brake
    delay(100);
    motor.stop(1);                  // stop
    delay(100);
    motor.speed(0, 100);
    motor.speed(1, -100);
    delay(2000);
    motor.brake(0);
    motor.brake(1);
    delay(100);
    motor.stop(0);
    motor.stop(1);
    delay(100);
}
