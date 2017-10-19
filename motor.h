#ifndef _H_MOTOR_
#define _H_MOTOR_

class Motor
{
  public:
    struct MotorPins {
      int EA, EB, I1, I2, I3, I4;
    };

    Motor(MotorPins pins) {
      _pins = pins;
    }

    void init() {
      pinMode(_pins.EA, OUTPUT);
      pinMode(_pins.EB, OUTPUT);
      pinMode(_pins.I1, OUTPUT);
      pinMode(_pins.I2, OUTPUT);
      pinMode(_pins.I3, OUTPUT);
      pinMode(_pins.I4, OUTPUT);
    }

    void setLeftSpeed(int speed) {
      analogWrite(_pins.EA, speed);
    }

    void setRightSpeed(int speed) {
      analogWrite(_pins.EB, speed);
    }

    void setSpeed(int speed) {
      setLeftSpeed(speed);
      setRightSpeed(speed);
    }

    void forward() {
      digitalWrite(_pins.I1, LOW);
      digitalWrite(_pins.I2, HIGH);
      digitalWrite(_pins.I3, LOW);
      digitalWrite(_pins.I4, HIGH);
    }

    void backward() {
      digitalWrite(_pins.I1, HIGH);
      digitalWrite(_pins.I2, LOW);
      digitalWrite(_pins.I3, HIGH);
      digitalWrite(_pins.I4, LOW);
    }
    
  private:
    MotorPins _pins;
};

#endif

