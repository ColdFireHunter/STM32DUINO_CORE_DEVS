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

//                  | DIGITAL | ANALOG | USART      | TWI       | SPI        | SPECIAL   | 5V-TOLLERANT |
//                  |---------|--------|------------|-----------|------------|-----------|--------------|
#define PA0  A0  // | 0       | A0     |            |           |            |           | NO			|
#define PA1  A1  // | 1       | A1     |            |           |            |           | NO			|
#define PA2  A2  // | 2       | A2     | USART1_TX* |           |            |           | NO			|
#define PA3  A3  // | 2       | A2     | USART1_RX* |           |            |           | NO			|
#define PA4  A4  // | 4       | A4     |            |           | SPI1_SS    |           | NO			|
#define PA5  A5  // | 5       | A5     |            |           | SPI1_SCK   |           | NO			|
#define PA6  A6  // | 6       | A6     |            |           | SPI1_MISO  |           | NO			|
#define PA7  A7  // | 7       | A7     |            |           | SPI1_MOSI  |           | NO			|
#define PA9  8   // | 8       |        | USART1_TX  | TWI1_SCL  |            |           | YES			|
#define PA10 9   // | 9       |        | USART1_RX  | TWI1_SDA  |            |           | YES			|
#define PA13 10  // | 10      |        |            |           |            | SWD_SWDIO | YES			|
#define PA14 11  // | 11      |        |            |           |            | SWD_SWCLK | YES		    |
//                  |---------|--------|------------|-----------|------------|-----------|--------------|
#define PB1  12  // | 12      |        |            |           |            |           | NO			|
//				 // |---------|--------|------------|-----------|------------|-----------|--------------|
#define PF0  13  // | 13      |        |            |           |            | OSC_IN    | YES		    |
#define PF1  14  // | 14      |        |            |           |            | OSC_OUT   | YES			|
//                  |---------|--------|------------|-----------|------------|-----------|--------------|
// USED FOR STANDARD USART1 PA2/PA3 do to TWI1 ON PA9/PA10 


#define NUM_DIGITAL_PINS        15
#define NUM_ANALOG_INPUTS       8



#define LED_BUILTIN             PB1
#define LED_GREEN               LED_BUILTIN


// SPI Definitions
#define PIN_SPI_SS              PA4
#define PIN_SPI_MOSI            PA7
#define PIN_SPI_MISO            PA6 
#define PIN_SPI_SCK             PA5 

// I2C Definitions
#define PIN_WIRE_SDA            PA10
#define PIN_WIRE_SCL            PA9


// Timer Definitions (optional)
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
//#define TIMER_TONE              TIM2
//#define TIMER_SERVO             TIM3

#define SERIAL_UART_INSTANCE    1 

// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata
#define PIN_SERIAL_RX           PA3
#define PIN_SERIAL_TX           PA2


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
