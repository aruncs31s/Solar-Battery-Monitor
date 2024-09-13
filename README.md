# Solar-Battery-Monitor

12 V Solar Battery Monitor using ESP32


### Readings

|Input|ESP32 ADC |ESP32 with error factor|ESP32With Offset|
|----|-----|-----|----|
|5.032|4.35|4.46|4.83|
|6.04|5.37|5.58|5.84|
|7.05|6.41|6.57|6.86|
|8.07|7.45|7.66|7.91|
|9|8.4|8.66|8.90|
|10.05|9.47|9.76|9.91|
|11.02|10.42|10.81|10.89|
|12|11.4|11.83|11.85|
|13.02|12.43|12.88|12.89|
|14.04|13.5|13.91|13.93|
|15.02|14.55|15.00|15.04|



#### Normal Reading

![Normal Reading](./images/simple_reading.png?raw=true)

- Without error correction or ADC Offset

#### With Error Correction and ADC_Offset

![with correction](./images/with%20correction.png?raw=true)
