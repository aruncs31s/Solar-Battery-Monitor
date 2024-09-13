/*
 * Date : 2024-09-11
 * Time : 00:17
 */

#include "Monitor.h"
#include "Arduino.h"

float BatteryMonitor::get_voltage(int adc_pin) {
  //@param -> adc_pin is the pin where the solar battery input is connected
  //@return -> the actual value of input voltage
  //@logic -> 1. Using a voltage devider we split the voltage to below 3.3 so
  // the esp32 can measure
  //          2. I used 0.965:5.495 also 0.965k ohm as the Rb and 4.530 as Ra

  adc_value = analogRead(adc_pin)+ ADC_OFFSET;
  adc_voltage = (VREF * adc_value ) / 4095 ;

  actual_voltage = (adc_voltage / RESISTOR_RATIO) ;
  return actual_voltage;
}
int BatteryMonitor::get_adc_value() { return adc_value; }
int BatteryMonitor::get_adc_voltage() { return adc_voltage; }
float BatteryMonitor::get_devider_current() {}
