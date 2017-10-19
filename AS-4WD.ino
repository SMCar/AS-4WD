#include "motor.h"

Motor motor({5, 10, 7, 6, 8, 9});

int speed = 255;

void setup() {
  // put your setup code here, to run once:
  motor.init();
  motor.forward();
  motor.setSpeed(255);
  /*delay(1000);
  motor.setSpeed(128);
  delay(1000);
  motor.setSpeed(0);
  delay(1000);*/
}

void loop() {
  /*
  if (speed <= -255)
    speed = 255;

  if (speed < 0) {
    motor.backward();
  } else {
    motor.forward();
  }
  motor.setSpeed(abs(speed));
  speed -= 10;
  delay(100);
  */
}
