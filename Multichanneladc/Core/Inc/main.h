/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Pulse_sensor_ADC_1_Pin GPIO_PIN_0
#define Pulse_sensor_ADC_1_GPIO_Port GPIOA
#define Pulse_sensor_ADC_2_Pin GPIO_PIN_1
#define Pulse_sensor_ADC_2_GPIO_Port GPIOA
#define Pulse_LED_Pin GPIO_PIN_5
#define Pulse_LED_GPIO_Port GPIOA
#define LCD_output_Pin GPIO_PIN_6
#define LCD_output_GPIO_Port GPIOA
#define LCD_outputB2_Pin GPIO_PIN_2
#define LCD_outputB2_GPIO_Port GPIOB
#define ITM_Data_Console_connect_Pin GPIO_PIN_3
#define ITM_Data_Console_connect_GPIO_Port GPIOB
#define LCD_outputB4_Pin GPIO_PIN_4
#define LCD_outputB4_GPIO_Port GPIOB
#define LCD_outputB5_Pin GPIO_PIN_5
#define LCD_outputB5_GPIO_Port GPIOB
#define LCD_outputB6_Pin GPIO_PIN_6
#define LCD_outputB6_GPIO_Port GPIOB
#define LCD_outputB7_Pin GPIO_PIN_7
#define LCD_outputB7_GPIO_Port GPIOB
#define LCD_outputB8_Pin GPIO_PIN_8
#define LCD_outputB8_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
