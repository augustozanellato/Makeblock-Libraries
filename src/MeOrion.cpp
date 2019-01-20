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
#include "MeColorSensor.h"

/*********************  Orion Board GPIO Map *********************************/
// struct defined in MePort.h
MePort_Sig mePort[17] =
{
  { NC, NC }, { 11, 10 }, {  3,  9 }, { 12, 13 }, {  8,  2 },
  { NC, NC }, { A2, A3 }, { A6, A1 }, { A7, A0 }, {  6,  7 },
  {  5,  4 }, { NC, NC }, { NC, NC }, { NC, NC }, { NC, NC },
  { NC, NC },{ NC, NC },
};