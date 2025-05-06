Stepper Motor Control
This project controls a stepper motor via serial input, supporting both Arduino and STM32 microcontrollers. The motor rotates to a target angle based on the received input, limited between 0° and 180°.

Features
Serial input controls motor angle.

Stepper motor rotates between 0° and 180°.

Supports both Arduino and STM32 (HAL library).

Uses Step/Dir/Enable interface for driver modules.

Hardware Requirements
Stepper Motor (e.g., NEMA17 or 28BYJ-48)

Stepper Motor Driver (e.g., A4988, ULN2003)

Microcontroller:

Arduino Uno/Nano

STM32F4 / STM32F3 / STM32L4 (e.g., Blue Pill)



## Wiring
| Stepper Driver | Arduino |
|---------------|---------|
| Step | D5 |
| Dir  | D2 |
| Enable | D8 |



## Wiring
| Stepper Driver | Arduino | STM32   |
|---------------|---------|-------|
| Step | A0 |  PA9 |
| Dir  | D1 |  PA8  |
| Enable | D8 |OPITIONAL |





## License
MIT License
