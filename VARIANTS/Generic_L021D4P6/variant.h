/*
 *******************************************************************************
 * Copyright (c) 2021, STMicroelectronics
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
 *        STM32 pins number
 *----------------------------------------------------------------------------*/
#define PA0                     A0
#define PA1                     A1
#define PA4                     A2
#define PA7                     A3
#define PA9                     4
#define PA10                    5
#define PA13                    6
#define PA14                    7
#define PB9                     8
#define PC14                    9
#define PC15                    10


#define NUM_DIGITAL_PINS        11
#define NUM_ANALOG_INPUTS       4

// On-board LED pin number
#ifndef LED_BUILTIN
#define LED_BUILTIN             PA0
#endif

// On-board user button
#ifndef USER_BTN
#define USER_BTN                PA0
#endif

// SPI definitions
#ifndef PIN_SPI_SS
#define PIN_SPI_SS              PA4
#endif
#ifndef PIN_SPI_MOSI
#define PIN_SPI_MOSI            PA7
#endif
#ifndef PIN_SPI_MISO
#define PIN_SPI_MISO            PA14
#endif
#ifndef PIN_SPI_SCK
#define PIN_SPI_SCK             PA13
#endif

// I2C definitions
#ifndef PIN_WIRE_SDA
#define PIN_WIRE_SDA            PA10
#endif
#ifndef PIN_WIRE_SCL
#define PIN_WIRE_SCL            PA4
#endif

// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#ifndef TIMER_TONE
#define TIMER_TONE              TIM21
#endif
#ifndef TIMER_SERVO
#define TIMER_SERVO             TIM21
#endif

// UART Definitions
#ifndef SERIAL_UART_INSTANCE
#define SERIAL_UART_INSTANCE    1
#endif

// Default pin used for generic 'Serial' instance
// Mandatory for Firmata
#ifndef PIN_SERIAL_RX
#define PIN_SERIAL_RX           PA0
#endif
#ifndef PIN_SERIAL_TX
#define PIN_SERIAL_TX           PA1
#endif

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
  #define SERIAL_PORT_MONITOR   Serial
  #define SERIAL_PORT_HARDWARE  Serial
#endif

#endif /* _VARIANT_ARDUINO_STM32_ */