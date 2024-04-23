#include <AFMotor.h>

AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

void setup() {
  Serial.begin(9600); // set up Serial library at 9600 bps
  Serial.println("Arduino with L293D project");
}
void loop() {
  motor1.setSpeed( speed(100) ); //set speed for motor 1 at 50%
  motor1.run(FORWARD);//send motor 1 to Foarward rotation
  
  motor2.setSpeed( speed(100) );//set speed for motor 2 at 100%
  motor2.run(FORWARD);//send motor 2 to Foarward rotation

  motor3.setSpeed( speed(100) );
  motor3.run(BACKWARD);
  
  motor4.setSpeed( speed(100) );
  motor4.run(BACKWARD);

  
}

/*
 * speed percent to speed converter
 * receives value between 0 to 100 and converts it to value between
 * 0 to 255 which are 8 bits Arduino PWM value
 * www.Robojax.com
 Watch full video instruction:  https://youtu.be/0XihwdulmDQ
 */
int  speed(int percent)
{
  return map(percent, 0, 100, 0, 255);
}

