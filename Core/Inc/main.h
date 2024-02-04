/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define MODE_1_Pin GPIO_PIN_0
#define MODE_1_GPIO_Port GPIOA
#define INFO_COURANT_1_Pin GPIO_PIN_1
#define INFO_COURANT_1_GPIO_Port GPIOA
#define TX_Pin GPIO_PIN_2
#define TX_GPIO_Port GPIOA
#define RX_Pin GPIO_PIN_3
#define RX_GPIO_Port GPIOA
#define DIR_CON_1_Pin GPIO_PIN_4
#define DIR_CON_1_GPIO_Port GPIOA
#define INFO_SPEED_1_Pin GPIO_PIN_5
#define INFO_SPEED_1_GPIO_Port GPIOA
#define FREIN_1_Pin GPIO_PIN_6
#define FREIN_1_GPIO_Port GPIOA
#define INFO_ERR_21_Pin GPIO_PIN_7
#define INFO_ERR_21_GPIO_Port GPIOA
#define INFO_ERR_11_Pin GPIO_PIN_4
#define INFO_ERR_11_GPIO_Port GPIOC
#define RESET_1_Pin GPIO_PIN_5
#define RESET_1_GPIO_Port GPIOC
#define SPEED_CON_1_Pin GPIO_PIN_0
#define SPEED_CON_1_GPIO_Port GPIOB
#define DISABLE_2_Pin GPIO_PIN_1
#define DISABLE_2_GPIO_Port GPIOB
#define INFO_DIR_1_Pin GPIO_PIN_2
#define INFO_DIR_1_GPIO_Port GPIOB
#define ESF_1_Pin GPIO_PIN_10
#define ESF_1_GPIO_Port GPIOB
#define MODE_2_Pin GPIO_PIN_12
#define MODE_2_GPIO_Port GPIOB
#define SPEED_CON_2_Pin GPIO_PIN_13
#define SPEED_CON_2_GPIO_Port GPIOB
#define DIR_CON_2_Pin GPIO_PIN_14
#define DIR_CON_2_GPIO_Port GPIOB
#define FREIN_2_Pin GPIO_PIN_15
#define FREIN_2_GPIO_Port GPIOB
#define INFO_SPEED_2_Pin GPIO_PIN_6
#define INFO_SPEED_2_GPIO_Port GPIOC
#define INFO_ERR_22_Pin GPIO_PIN_7
#define INFO_ERR_22_GPIO_Port GPIOC
#define INFO_ERR_12_Pin GPIO_PIN_8
#define INFO_ERR_12_GPIO_Port GPIOC
#define RESET_2_Pin GPIO_PIN_9
#define RESET_2_GPIO_Port GPIOC
#define DISABLE_2A8_Pin GPIO_PIN_8
#define DISABLE_2A8_GPIO_Port GPIOA
#define INFO_DIR_2_Pin GPIO_PIN_9
#define INFO_DIR_2_GPIO_Port GPIOA
#define ESF_2_Pin GPIO_PIN_10
#define ESF_2_GPIO_Port GPIOA
#define INFO_COURANT_2_Pin GPIO_PIN_11
#define INFO_COURANT_2_GPIO_Port GPIOA
#define LED_1_Pin GPIO_PIN_12
#define LED_1_GPIO_Port GPIOA
#define LED_2_Pin GPIO_PIN_15
#define LED_2_GPIO_Port GPIOA
#define ODO_21_Pin GPIO_PIN_2
#define ODO_21_GPIO_Port GPIOD
#define ODO_21_EXTI_IRQn EXTI2_IRQn
#define ODO_22_Pin GPIO_PIN_3
#define ODO_22_GPIO_Port GPIOB
#define ODO_11_Pin GPIO_PIN_4
#define ODO_11_GPIO_Port GPIOB
#define ODO_11_EXTI_IRQn EXTI4_IRQn
#define ODO_12_Pin GPIO_PIN_5
#define ODO_12_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
