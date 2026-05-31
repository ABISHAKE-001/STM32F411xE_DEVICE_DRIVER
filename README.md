# STM32F411xE_DEVICE_DRIVER

This project contains bare-metal STM32 device drivers developed in Embedded C using register-level programming without using STM32 HAL libraries.

The purpose of this project is to understand low-level embedded systems development, ARM Cortex-M architecture, and peripheral interfacing by directly accessing hardware registers.

## Features

- GPIO Driver
- UART/USART Driver
- Timer Driver
- Clock Configuration
- Interrupt Configuration
- Modular Driver Architecture
- Register-Level Programming
- Bare-Metal Embedded Development

## Technologies Used

- Embedded C
- ARM Cortex-M4
- STM32CubeIDE

## Project Structure

```text
STM32F411xE_DEVICE_DRIVER/
│
├── Inc/          # Header files
├── Src/          # Driver source files
├── Startup/      # Startup files
├── CMSIS/        # CMSIS core files
├── Applications/ # Example applications
└── README.md
