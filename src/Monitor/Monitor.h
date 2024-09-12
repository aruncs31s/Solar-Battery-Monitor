#ifndef __MONITOR_H_
#define __MONITOR_H_

// Error Correction offset for ADC
#define ADC_OFFSET 163
// Rb over Ra+Rb ratio for Voltage Devider
#define RESISTOR_RATIO 0.1756141947

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
  int get_adc_value() {}
  float get_voltage(int adc_pin) {

  };

private:
  int adc_value;
  float adc_voltage;
  float actual_voltage;
};
#endif // !__MONITOR_H_
