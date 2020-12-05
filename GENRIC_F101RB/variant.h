/*
 *******************************************************************************
 * Copyright (c) 2019, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */

#ifndef _VARIANT_ARDUINO_STM32_
#define _VARIANT_ARDUINO_STM32_

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/

//                  | DIGITAL | ANALOG | USART      | TWI       | SPI        | SPECIAL   |
//                  |---------|--------|------------|-----------|------------|-----------|
#define PA0  A0  // | 0       | A0     |            |           |            |           |
#define PA1  A1  // | 1       | A1     |            |           |            |           |
#define PA2  A2  // | 2       | A2     | USART2_TX  |           |            |           |
#define PA3  A3  // | 2       | A2     | USART2_RX  |           |            |           |
#define PA4  A4  // | 4       | A4     |            |           | SPI1_SS    |           |
#define PA5  A5  // | 5       | A5     |            |           | SPI1_SCK   |           |
#define PA6  A6  // | 6       | A6     |            |           | SPI1_MISO  |           |
#define PA7  A7  // | 7       | A7     |            |           | SPI1_MOSI  |           |
#define PA8  8   // | 8       |        |            |           |            |           |
#define PA9  9   // | 9       |        | USART1_TX  |           |            |           |
#define PA10 10  // | 10      |        | USART1_RX  |           |            |           |
#define PA11 11  // | 11      |        |            |           |            |           |
#define PA12 12  // | 12      |        |            |           |            |           |
#define PA13 13  // | 13      |        |            |           |            | SWD_SWDIO |
#define PA14 14  // | 14      |        |            |           |            | SWD_SWCLK |
#define PA15 15  // | 15      |        |            |           | SPI1_SS    |           |
//                  |---------|--------|------------|-----------|------------|-----------|
#define PB0  A8  // | 16      | A8     |            |           |            |           |
#define PB1  A9  // | 17      | A9     |            |           |            |           |
#define PB2  18  // | 18      |        |            |           |            | BOOT1     |
#define PB3  19  // | 19      |        |            |           | SPI1_SCK   |           |
#define PB4  20  // | 20      |        |            |           | SPI1_MISO  |           |
#define PB5  21  // | 21      |        |            |           | SPI1_MOSI  |           |
#define PB6  22  // | 22      |        | USART1_TX  | TWI1_SCL  |            |           |
#define PB7  23  // | 23      |        | USART1_RX  | TWI1_SDA  |            |           |
#define PB8  24  // | 24      |        |            | TWI1_SCL  |            |           |
#define PB9  25  // | 25      |        |            | TWI1_SDA  |            |           |
#define PB10 26  // | 26      |        | USART3_TX  | TWI2_SCL  |            |           |
#define PB11 27  // | 27      |        | USART3_RX  | TWI2_SDA  |            |           |
#define PB12 28  // | 28      |        |            |           | SPI2_SS*   |           |
#define PB13 29  // | 29      |        |            |           | SPI2_SCK*  |           |
#define PB14 30  // | 30      |        |            |           | SPI2_MISO* |           |
#define PB15 31  // | 31      |        |            |           | SPI2_MOSI* |           |
//                  |---------|--------|------------|-----------|------------|-----------|
#define PC0  A10 // | 32      | A10    |            |           |            |           |
#define PC1  A11 // | 33      | A11    |            |           |            |           |
#define PC2  A12 // | 34      | A12    |            |           |            |           |
#define PC3  A13 // | 35      | A13    |            |           |            |           |
#define PC4  A14 // | 36      | A14    |            |           |            |           |
#define PC5  A15 // | 37      | A15    |            |           |            |           |
#define PC6  36  // | 38      |        |            |           |            |           |
#define PC7  37  // | 39      |        |            |           |            |           |
#define PC8  38  // | 40      |        |            |           |            |           |
#define PC9  39  // | 41      |        |            |           |            |           |
#define PC10 40  // | 42      |        | USART3_TX  |           |            |           |
#define PC11 41  // | 43      |        | USART3_RX  |           |            |           |
#define PC12 42  // | 44      |        |            |           |            |           |
#define PC13 43  // | 45      |        |            |           |            |           |
#define PC14 44  // | 46      |        |            |           |            | OSC32_IN  |
#define PC15 45  // | 47      |        |            |           |            | OSC32_OUT |
//                  |---------|--------|------------|-----------|------------|-----------|
#define PD0  46  // | 48      |        |            |           |            | OSC_IN    |
#define PD1  47  // | 49      |        |            |           |            | OSC_OUT   |
#define PD2  48  // | 50      |        |            |           |            |           |
//                  |---------|--------|------------|-----------|------------|-----------|


#define NUM_DIGITAL_PINS        51
#define NUM_ANALOG_INPUTS       16



#define LED_BUILTIN             PC13
#define LED_GREEN               LED_BUILTIN


// SPI Definitions
#define PIN_SPI_SS              PA4
#define PIN_SPI_MOSI            PA7
#define PIN_SPI_MISO            PA6 
#define PIN_SPI_SCK             PA5 

// I2C Definitions
#define PIN_WIRE_SDA            PB7
#define PIN_WIRE_SCL            PB6


// Timer Definitions (optional)
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#define TIMER_TONE              TIM6
#define TIMER_SERVO             TIM7

#define SERIAL_UART_INSTANCE    1 

// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata
#define PIN_SERIAL_RX           PA9
#define PIN_SERIAL_TX           PA10


#ifdef __cplusplus
} // extern "C"
#endif
/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
  // These serial port names are intended to allow libraries and architecture-neutral
  // sketches to automatically default to the correct port name for a particular type
  // of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
  // the first hardware serial port whose RX/TX pins are not dedicated to another use.
  //
  // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
  //
  // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
  //
  // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
  //
  // SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
  //
  // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
  //                            pins are NOT connected to anything by default.
  #define SERIAL_PORT_MONITOR     Serial
  #define SERIAL_PORT_HARDWARE    Serial1
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */
