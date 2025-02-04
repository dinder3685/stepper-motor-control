# stepper-motor-control

# Stepper Motor Control

This Arduino project controls a stepper motor using serial input. The motor moves based on received angle values, with limits set between 0° and 180°.

## Features
- Reads angle input from Serial Monitor.
- Moves the stepper motor to the target angle.
- Prevents exceeding min/max positions.

## Hardware
- Stepper Motor (e.g., 28BYJ-48)
- Driver Module (e.g., ULN2003)
- Arduino Board

## Usage
1. Upload `stepper_control.ino` to your Arduino.
2. Open the Serial Monitor (9600 baud rate).
3. Send a number between `0-90` (automatically mapped to `0-180`).
4. The stepper motor moves accordingly.

## Wiring
| Stepper Driver | Arduino |
|---------------|---------|
| Step | D5 |
| Dir  | D2 |
| Enable | D8 |

## License
MIT License
