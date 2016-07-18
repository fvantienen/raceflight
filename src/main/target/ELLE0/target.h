/*
 * This file is part of Cleanflight.
 *
 * Cleanflight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Cleanflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with Cleanflight.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once
#define TARGET_BOARD_IDENTIFIER "ELL0"

#define CONFIG_START_FLASH_ADDRESS 0x08080000 //0x08080000 to 0x080A0000 (FLASH_Sector_8)
#define CONFIG_FEATURE_RX_SERIAL
#define CONFIG_FEATURE_ONESHOT125
#define CONFIG_MSP_PORT 1
//#define CONFIG_RX_SERIAL_PORT 4

#define USBD_PRODUCT_STRING "Elle0"

#define LED0 PA8
//#define LED1 PB4
#define LED1 PC2

#define MPU9250_CS_PIN        PB12
#define MPU9250_SPI_INSTANCE  SPI2

#define ACC
#define USE_ACC_MPU9250
#define USE_ACC_SPI_MPU9250
#define ACC_MPU9250_ALIGN CW270_DEG

#define GYRO
#define USE_GYRO_MPU9250
#define USE_GYRO_SPI_MPU9250
#define GYRO_MPU9250_ALIGN CW270_DEG

//#define MAG
//#define USE_MAG_HMC5883

/*#define BARO
#define USE_BARO_MS5611
// CS:  PA4
// SPI: SPI1
*/

#define USABLE_TIMER_CHANNEL_COUNT 9

/*#define USE_SERIAL_1WIRE
#define S1W_TX_GPIO         GPIOB
#define S1W_TX_PIN          GPIO_Pin_10
#define S1W_RX_GPIO         GPIOB
#define S1W_RX_PIN          GPIO_Pin_11*/

// MPU9250 interrupt
#define USE_MPU_DATA_READY_SIGNAL
#define ENSURE_MPU_DATA_READY_IS_LOW
#define EXTI_CALLBACK_HANDLER_COUNT 1 // MPU data ready
#define MPU_INT_EXTI PB5
#define USE_EXTI

#define USE_VCP

/* Telemetry */
#define USE_USART1
#define USART1_RX_PIN PA10
#define USART1_TX_PIN PA9
#define USART1_AHB1_PERIPHERALS RCC_AHB1Periph_DMA2

/* RX1 */
#define USE_USART2
#define USART2_RX_PIN PA3
#define USART2_TX_PIN PA2

/* I2C */
#define USE_USART3
#define USART3_RX_PIN PC11
#define USART3_TX_PIN PC10

#define SERIAL_PORT_COUNT 4

#define USE_SPI

/*#define USE_SPI_DEVICE_1 //MS5611
#define SPI1_NSS_PIN            PC4
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7*/

#define USE_SPI_DEVICE_2 //MPU9250
#define SPI2_NSS_PIN            PB12
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

#define USE_FLASH_TOOLS

#define USE_ADC

#define VBAT_ADC_PIN                PC4
#define VBAT_ADC_CHANNEL            ADC_Channel_14

#define CURRENT_METER_ADC_PIN       PC5
#define CURRENT_METER_ADC_CHANNEL   ADC_Channel_15

#define GPS
#define BLACKBOX
#define TELEMETRY
#define SERIAL_RX
#define GTUNE
#define USE_SERVOS
#define USE_CLI

#define HARDWARE_BIND_PLUG
#define BINDPLUG_PORT  GPIOB
#define BINDPLUG_PIN   Pin_0

// USART2, PA3
#define SPEKTRUM_BIND
#define BIND_PORT  GPIOA
#define BIND_PIN   Pin_3

#define USE_QUATERNION

#define TARGET_IO_PORTA 0xffff
#define TARGET_IO_PORTB 0xffff
#define TARGET_IO_PORTC 0xffff
