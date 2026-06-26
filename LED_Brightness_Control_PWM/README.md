# LED Brightness Control using PWM

## Description
This project demonstrates controlling LED brightness using PWM (Pulse Width Modulation) with Arduino.

The LED brightness is increased gradually by changing the PWM value using analogWrite().  
Different brightness levels are applied with a delay between each step.

## Components Used
- Arduino Board
- LED
- 100Ω Resistor
- Jumper Wires

## Pin Connection
- LED positive pin → Arduino Pin 9 (PWM)
- LED negative pin → GND through 100Ω resistor

## Working Principle
PWM controls the average voltage supplied to the LED. 
Higher PWM value produces higher brightness and lower PWM value produces dimmer light.

## PWM Values Used
- 0   → OFF
- 20  → Low brightness
- 100 → Medium brightness
- 190 → High brightness
- 255 → Maximum brightness