#ifndef __MONITOR_H_
#define __MONITOR_H_

// Error Correction offset for ADC
#define ERROR_FACTOR 1.032302405

#define ADC_OFFSET 102.4479995
// Rb over Ra+Rb ratio for Voltage Devider
#define RESISTOR_RATIO 0.1756141947

// Remove following if no need
// 100% voltage of the battery
#define VMAX 14.4
// 0% of the battery
#define VMIN 10.8
// Maximum value of 12 bit ADC in ESP32
#define ADC_MAX_12 4095
// Reference Voltage of ESP32 for ADC
#define VREF 3.3

class BatteryMonitor {

public:
  int get_adc_value();
  int get_adc_voltage();
  float get_voltage(int adc_pin);
  float get_devider_current();

private:
  int adc_value;
  float adc_voltage;
  float actual_voltage;
};
#endif // !__MONITOR_H_
