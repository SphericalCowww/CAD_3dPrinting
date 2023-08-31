#include <Servo.h>
Servo servo;
int ServoPin = 9;

void setup() 
{
    servo.attach(ServoPin); 
    servo.write(20);
}
void loop() 
{
    delay(5000);
    for(int i = 1; i < 9; i++)
    {
        servo.write(20*i);
        delay(500);
    }
    for(int i = 2; i < 9; i++)
    {
        servo.write(180 - 20*i);
        delay(500);
    }
}
