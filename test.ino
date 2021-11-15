#include <Servo.h>
#define Servo_PWM 6

Servo MG995_Servo;
//Servo servo
Servo servoindex;          // Define index servo
Servo servomajeure;
Servo servoringfinger;
Servo servopinky;
Servo servopouce;

void setup() {
  servopouce.attach(2);
  servoindex.attach(3);
  servomajeure.attach(4); 
  servoringfinger.attach(5);
  servopinky.attach(6);

} 

void loop() {            // Loop through motion tests
  jeu();            // Uncomment to use this
}

void jeu() {
  servopouce.write(0);
  servoindex.write(0);
  servomajeure.write(180);
  servoringfinger.write(0);
  servopinky.write(0);
  //delay(200);
  //servoringfinger.write(100);
  //delay(200);
  //servoringfinger.write(0);
 
}
