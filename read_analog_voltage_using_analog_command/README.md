# Read Analog Voltage Using Analog Command

## Description
This project demonstrates how to read analog voltage using Arduino's analogRead() command.

The analog signal is received through Arduino analog pin A5. The ADC converts the input voltage into a digital value (0-1023), and then it is converted into voltage and displayed on the Serial Monitor.

## Components Used
- Arduino Board
- 100Ω Resistor
- 1kΩ Resistor
- Jumper Wires

## Pin Configuration
- Analog Input Pin: A5

## Working Principle
A voltage divider circuit is created using 100Ω and 1kΩ resistors. The output voltage is connected to Arduino pin A5. The analogRead() function reads the voltage level and shows the calculated voltage in the Serial Monitor.

## Serial Monitor
Baud Rate: 9600 bps