/*
 * Copyright (c) 2022 Linaro Limited
 *
 * SPDX-License-Identifier: Apache-2.0
 */
#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_STM32H7_CLOCK_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_STM32H7_CLOCK_H_

/* clock bus references */
#define STM32_CLOCK_BUS_AHB3    0x134
#define STM32_CLOCK_BUS_AHB1    0x138
#define STM32_CLOCK_BUS_AHB2    0x13c
#define STM32_CLOCK_BUS_AHB4    0x140
#define STM32_CLOCK_BUS_APB3    0x144
#define STM32_CLOCK_BUS_APB1    0x148
#define STM32_CLOCK_BUS_APB1_2  0x14c
#define STM32_CLOCK_BUS_APB2    0x150
#define STM32_CLOCK_BUS_APB4    0x154

#define STM32_PERIPH_BUS_MIN	STM32_CLOCK_BUS_AHB3
#define STM32_PERIPH_BUS_MAX	STM32_CLOCK_BUS_APB4

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_CLOCK_STM32H7_CLOCK_H_ */