#include "Monitor.h"
// TODO: Need to find the correct offset
#define ADC_OFFSET 163
const int adc_pin = 36;

BatteryMonitor battery_meter;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
Serial.println("Voltage "+String(battery_meter.get_voltage(adc_pin)));
delay(2000);
}
