# Read Voltage From Potentiometer

## Description
This Arduino project reads the analog voltage from a potentiometer using the analogRead() function.

The input voltage from the potentiometer is converted into a digital value and then calculated voltage is displayed on the Serial Monitor.

## Components Used
- Arduino Board
- Potentiometer
- Jumper Wires

## Working Principle
The potentiometer provides a variable voltage to the analog pin A5.

Arduino ADC reads this voltage as a value between 0 and 1023.

The ADC value is converted into voltage using:

Voltage = (5/1023) × ADC Value

The calculated voltage is printed on the Serial Monitor.

## Pin Connection
- Potentiometer Output → A5

## Output
The changing voltage value from the potentiometer is displayed in the Serial Monitor.