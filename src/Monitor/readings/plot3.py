import csv

import matplotlib.pyplot as plt

x = []
y = []
y1 = []
y2 = []

# Read the CSV file and convert data to float
with open("./readings.csv", "r") as csvfile:
    lines = csv.reader(csvfile, delimiter=",")
    for row in lines:
        try:
            x.append(float(row[0]))  # Convert to float
            y.append(float(row[1]))  # Convert to float
            y1.append(float(row[2]))  # Convert to float
            y2.append(float(row[3]))  # Convert to float
        except ValueError:
            print(f"Skipping row with invalid data: {row}")
print(x)
print(y)
plt.plot(x, y, color="g", label="Obtained")
plt.plot(x, x, color="r", label="Expected")
plt.plot(x, y1, color="b", label="With Error Factor")
plt.plot(x, y2, color="y", label="With ADC OFFSET")
plt.xlabel("Input Voltage")
plt.ylabel("Masured Voltage by DMM")
plt.legend()
plt.title("ESP32 ADC Reading")
plt.show()
