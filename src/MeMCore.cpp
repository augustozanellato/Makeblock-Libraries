#include <Arduino.h>
#include "MeConfig.h"

/* Supported Modules drive needs to be added here */
#include "Me7SegmentDisplay.h"
#include "MeUltrasonicSensor.h"
#include "MeMbotDCMotor.h"
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
#include "MeIR.h"
#include "MeLEDMatrix.h"
#include "MeBuzzer.h"
#include "MeHumitureSensor.h"
#include "MeFlameSensor.h"
#include "MeGasSensor.h"
#include "MePS2.h"
#include "MeColorSensor.h"
#include "MeSuperVariable.h"
/*********************  Mbot Board GPIO Map *********************************/
MePort_Sig mePort[17] =
{
  { NC, NC }, { 11, 12 }, {  9, 10 }, { A2, A3 }, { A0, A1 },
  { NC, NC }, {  8, A6 }, { A7, 13 }, {  8, A6 }, {  6,  7 },
  {  5,  4 }, { NC, NC }, { NC, NC }, { NC, NC }, { NC, NC },
  { NC, NC },{ NC, NC },
};