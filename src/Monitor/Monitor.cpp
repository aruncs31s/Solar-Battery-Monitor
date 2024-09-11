/*
 * Date : 2024-09-11
 * Time : 00:17
 */

#include <random>
#define VMAX 14.4
#define VMIN 10.8
#define ADC_MAX_12 4095

float get_voltage(int adc_value) {
  //@param -> adc_value is the current adc_value
  //@return -> the voltage connected to the GPIO
  //@logic -> 1. VMIN is the minimum voltage of the battery which is also
  // called zero percentage
  //          2. VMAX is the maximum voltage of the battery = 100%
  //          3. to calculate the voltage using VMIN + (adc_value / ADC_MAX_12)
  return VMIN + (adc_value / ADC_MAX_12);
}

void setup() {}
