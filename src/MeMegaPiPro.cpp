#include <Arduino.h>
#include "MeConfig.h"

// Supported Modules drive needs to be added here
#include "Me7SegmentDisplay.h"
#include "MeUltrasonicSensor.h"
#include "MeDCMotor.h"
#include "MeRGBLed.h"
#include "Me4Button.h"
#include "MePotentiometer.h"
#include "MeJoystick.h"
#include "MePIRMotionSensor.h"
#include "MeShutter.h"
#include "MeLineFollower.h"
#include "MeSoundSensor.h"
#include "MeLimitSwitch.h"
#include "MeLightSensor.h"
#include "MeSerial.h"
#include "MeBluetooth.h"
#include "MeWifi.h"
#include "MeTemperature.h"
#include "MeGyro.h"
#include "MeInfraredReceiver.h"
#include "MeCompass.h"
#include "MeUSBHost.h"
#include "MeTouchSensor.h"
#include "MeStepper.h"
#include "MeStepperOnBoard.h"
#include "MeEncoderMotor.h"
#include "MeEncoderNew.h"
#include "MeBuzzer.h"
#include "MeLEDMatrix.h"
#include "MeHumitureSensor.h"
#include "MeFlameSensor.h"
#include "MeGasSensor.h"
#include "MeEncoderOnBoard.h"
#include "MeMegaPiDCMotor.h"
#include "MePressureSensor.h"
#include "MePS2.h"
#include "MeSmartServo.h"
#include "MeDCMotor.h"
#include "MeMegaPiProESCMotor.h"
#include "MeColorSensor.h"

 MePort_Sig mePort[17] =
 {
   { NC, NC },{ 46, 23 }, { 45,  22 }, { 44, 25 },  { 10, 24 },
   { 16, 17 },{ A9, A4 }, { A10, A11}, { A15, A14}, { A13, A12 }, 
   { A7, A8 },{ A6, A5 }, { A1,  A2 }, { NC, NC }, { NC, NC }, 
   { NC, NC }, { NC, NC },
 };//PORT 5~ PORT 12 is for the RJ25 Shield
  //PORT1~PORT4 is for the 4dcmotor shield

megapi_dc_type megapi_dc_Port[14] =
{
  { NC, NC }, {33,32,11}, {40,41, 7}, {47,48, 6}, {28,27, 4},
  { NC, NC }, { NC, NC }, { NC, NC }, { NC, NC }, {35,34,12},
  {36,37, 8}, {42,43, 9}, {39,29, 5},
};

Encoder_port_type encoder_Port[6] =
{
  { NC,     NC,     NC,     NC,     NC},
  //NET1    NET2    PWM     DIR1    DIR2
  { 18,     31,     12,     34,     35},
  //ENB A   ENB B   PWMB    DIR B1  DIR B2
  { 19,     38,     8,      37,     36},

  { 3,      49,     9,      43,     42},

  { 2,      26,     5,      29,     39},// for MegaPi Pro
  { NC,     NC,     NC,     NC,     NC},
};

megaPi_slot_type megaPi_slots[4] =
{
  {35,   34,   33,   32,   31,  18,  12,  11},
  {36,   37,   40,   41,   38,  19,   8,   7},
  {42,   43,   47,   48,   49,   3,   9,   6},
  /* {A5,   A4,   A3,   A2,   A1,   2,   5,   4}*/// for megapi
  {39,   29,   28,   27,   26,   2,   5,   4}// for megapipro
};

megapipro_esc_type megapi_esc_Port[5] =
{
  { NC}, {12}, {8}, {9}, {5},
};