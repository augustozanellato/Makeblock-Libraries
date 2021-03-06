#include <Arduino.h>
#include "MeConfig.h"

/* Supported Modules drive needs to be added here */
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


/*********************  Shield Board GPIO Map *********************************/
MePort_Sig mePort[17] =
{
  { NC, NC }, { 11, 10 }, {  9, 12 }, { 13,  8 }, { NC,  3 },
  { NC, NC }, { NC,  2 }, { A2, A3 }, { A0, A1 }, {  5,  4 },
  {  6,  7 }, { NC, NC }, { NC, NC }, { NC, NC }, { NC, NC },
  { NC, NC }, { NC, NC },
};