//Include arduino base library
#include "Arduino.h"

//Make sure nothing bad happens if inserted more than once
#ifndef MotorDriver_h
#define MotorDriver_h

//Define all motordriver and encoder pins
#define dir_RF A2
#define dir_LF A0
#define dir_RB A3
#define dir_LB A1
#define pwm_LF 4
#define pwm_RF 3
#define pwm_LB 6
#define pwm_RB 5
//#define encoder_LF A6
//#define encoder_RF A7
//#define encoder_LB A2
//#define encoder_RB A3

//WIP
class MotorDriver
{
  public: //All Functions in MotorDriver Class
    MotorDriver();//MotorDriver Constructor
    void initMotors();
    void SetDirection(int Dir, int DirPin);//set direction
    void SetPower(int Pwm,int PwmPin);//set power
    void SetR_MPower(int All_Pwm);
    void SetR_Direction(int Dir);
    void SetL_Direction(int Dir);
    void SetL_MPower(int L_Pwm);
    //increment speed
    //decrement speed
    //calculate speed to give motor
    //check speed is occuring
    //On-off switch control aka reset
  private:
    int Pwm_Chkd;
};

#endif


//MotorDriver Constructor

//set power

//set direction

//increment speed

//decrement speed

//calculate speed to give motor

//check speed is occuring

//On-off switch control aka reset
