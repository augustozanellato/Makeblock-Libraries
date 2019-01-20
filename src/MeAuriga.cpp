
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
#include "MeEncoderMotor.h"
#include "MeEncoderNew.h"
#include "MeBuzzer.h"
#include "MeLEDMatrix.h"
#include "MeHumitureSensor.h"
#include "MeFlameSensor.h"
#include "MeGasSensor.h"
#include "MeEncoderOnBoard.h"
#include "MeOnBoardTemp.h"
#include "MeSmartServo.h"
#include "MePS2.h"
#include "MePm25Sensor.h"
#include "MeColorSensor.h"
#include "MeSuperVariable.h"
/*********************  Auriga Board GPIO Map *********************************/
// struct defined in MeAuriga.h
 MePort_Sig mePort[17] =
 {
   { NC, NC }, {   5,   4 }, {   3,   2 }, {   7,   6 }, {   9,   8 }, 
   { 16, 17 }, { A10, A15 }, {  A9, A14 }, {  A8, A13 }, {  A7, A12 }, 
   //             LIGHT2        LIGHT1        TEMP          SOUND
   { A6,A11 }, {  NC,  A2 }, {  NC,  A3 }, {  NC,  A0 }, {  NC,  A1 },
   { NC, NC }, { NC, NC },
 };
 
Encoder_port_type encoder_Port[6] =
{
  { NC,     NC,     NC,     NC,     NC},
  //ENA A   ENA B   PWMA    DIR A2  DIR A1
  { 19,     42,     11,     49,     48},
  //ENB A   ENB B   PWMB    DIR B1  DIR B2
  { 18,     43,     10,     47,     46},
  { NC,     NC,     NC,     NC,     NC},
  { NC,     NC,     NC,     NC,     NC},
};