void setup(){
  Serial.begin(9600);
}
void loop(){
  
}
#define ADC_OFFSET 163
const int adc_pin = 36;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
int adc_value = analogRead(adc_pin) + ADC_OFFSET;
Serial.println("Adc Value -= " + String(adc_value));
Serial.print("Voltage = ");
float adc_voltage = (3.3 *adc_value )/ 4095; 

Serial.println(adc_voltage);
float actual_voltage = adc_voltage / 0.1756141947;
Serial.println("Actual Voltage = "+ String(actual_voltage));
delay(2000);
}
