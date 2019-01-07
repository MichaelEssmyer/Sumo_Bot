// LIBRARIES
#include "MotorDriver.h"
// ENCODER PINS

// MOTOR PINS

// DISTANCE PINS

// LINE SENSOR PINS

// SWITCH PINS



// ENCODERS

// MOTORS

// MOTOR CONTROL
MotorDriver MD;

void setup() {
	
}

void loop() {
	runMotors(1, 255, 20, 1000);
  stopMotors(1000);
}

void runMotors(int Dir, int R_Pwm, int L_Pwm, int time){
    MD.SetR_MPower(R_Pwm);
    MD.SetR_Direction(Dir);
    MD.SetL_MPower(L_Pwm);
    MD.SetL_Direction(-Dir);
    delay(time);
  }
void stopMotors(int time){
  MD.SetR_MPower(0);
  MD.SetL_MPower(0);
  delay(time);
  }
