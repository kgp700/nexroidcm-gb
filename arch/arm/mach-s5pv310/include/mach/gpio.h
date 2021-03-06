/* linux/arch/arm/mach-s5pv310/include/mach/gpio.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * S5PV310 - GPIO lib support
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_GPIO_H
#define __ASM_ARCH_GPIO_H __FILE__

#define gpio_get_value	__gpio_get_value
#define gpio_set_value	__gpio_set_value
#define gpio_cansleep	__gpio_cansleep
#define gpio_to_irq	__gpio_to_irq

/* Practically, GPIO banks upto GPZ are the configurable gpio banks */

/* GPIO bank sizes */
#define S5PV310_GPIO_A0_NR	(8)
#define S5PV310_GPIO_A1_NR	(6)
#define S5PV310_GPIO_B_NR	(8)
#define S5PV310_GPIO_C0_NR	(5)
#define S5PV310_GPIO_C1_NR	(5)
#define S5PV310_GPIO_D0_NR	(4)
#define S5PV310_GPIO_D1_NR	(4)
#define S5PV310_GPIO_E0_NR	(5)
#define S5PV310_GPIO_E1_NR	(8)
#define S5PV310_GPIO_E2_NR	(6)
#define S5PV310_GPIO_E3_NR	(8)
#define S5PV310_GPIO_E4_NR	(8)
#define S5PV310_GPIO_F0_NR	(8)
#define S5PV310_GPIO_F1_NR	(8)
#define S5PV310_GPIO_F2_NR	(8)
#define S5PV310_GPIO_F3_NR	(6)
#define S5PV310_GPIO_J0_NR	(8)
#define S5PV310_GPIO_J1_NR	(5)
#define S5PV310_GPIO_K0_NR	(7)
#define S5PV310_GPIO_K1_NR	(7)
#define S5PV310_GPIO_K2_NR	(7)
#define S5PV310_GPIO_K3_NR	(7)
#define S5PV310_GPIO_L0_NR	(8)
#define S5PV310_GPIO_L1_NR	(3)
#define S5PV310_GPIO_L2_NR	(8)
#define S5PV310_GPIO_X0_NR	(8)
#define S5PV310_GPIO_X1_NR	(8)
#define S5PV310_GPIO_X2_NR	(8)
#define S5PV310_GPIO_X3_NR	(8)
#define S5PV310_GPIO_Z_NR	(7)

/* GPIO bank numbers */

#define S5PV310_GPIO_NEXT(__gpio) \
	((__gpio##_START) + (__gpio##_NR) + CONFIG_S3C_GPIO_SPACE + 1)

enum s5p_gpio_number {
	S5PV310_GPIO_A0_START	= 0,
	S5PV310_GPIO_A1_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_A0),
	S5PV310_GPIO_B_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_A1),
	S5PV310_GPIO_C0_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_B),
	S5PV310_GPIO_C1_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_C0),
	S5PV310_GPIO_D0_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_C1),
	S5PV310_GPIO_D1_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_D0),
	S5PV310_GPIO_E0_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_D1),
	S5PV310_GPIO_E1_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_E0),
	S5PV310_GPIO_E2_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_E1),
	S5PV310_GPIO_E3_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_E2),
	S5PV310_GPIO_E4_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_E3),
	S5PV310_GPIO_F0_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_E4),
	S5PV310_GPIO_F1_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_F0),
	S5PV310_GPIO_F2_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_F1),
	S5PV310_GPIO_F3_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_F2),
	S5PV310_GPIO_J0_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_F3),
	S5PV310_GPIO_J1_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_J0),
	S5PV310_GPIO_K0_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_J1),
	S5PV310_GPIO_K1_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_K0),
	S5PV310_GPIO_K2_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_K1),
	S5PV310_GPIO_K3_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_K2),
	S5PV310_GPIO_L0_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_K3),
	S5PV310_GPIO_L1_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_L0),
	S5PV310_GPIO_L2_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_L1),
	S5PV310_GPIO_X0_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_L2),
	S5PV310_GPIO_X1_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_X0),
	S5PV310_GPIO_X2_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_X1),
	S5PV310_GPIO_X3_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_X2),
	S5PV310_GPIO_Z_START	= S5PV310_GPIO_NEXT(S5PV310_GPIO_X3),
};

/* S5PV310 GPIO number definitions */
#define S5PV310_GPA0(_nr)	(S5PV310_GPIO_A0_START + (_nr))
#define S5PV310_GPA1(_nr)	(S5PV310_GPIO_A1_START + (_nr))
#define S5PV310_GPB(_nr)	(S5PV310_GPIO_B_START + (_nr))
#define S5PV310_GPC0(_nr)	(S5PV310_GPIO_C0_START + (_nr))
#define S5PV310_GPC1(_nr)	(S5PV310_GPIO_C1_START + (_nr))
#define S5PV310_GPD0(_nr)	(S5PV310_GPIO_D0_START + (_nr))
#define S5PV310_GPD1(_nr)	(S5PV310_GPIO_D1_START + (_nr))
#define S5PV310_GPE0(_nr)	(S5PV310_GPIO_E0_START + (_nr))
#define S5PV310_GPE1(_nr)	(S5PV310_GPIO_E1_START + (_nr))
#define S5PV310_GPE2(_nr)	(S5PV310_GPIO_E2_START + (_nr))
#define S5PV310_GPE3(_nr)	(S5PV310_GPIO_E3_START + (_nr))
#define S5PV310_GPE4(_nr)	(S5PV310_GPIO_E4_START + (_nr))
#define S5PV310_GPF0(_nr)	(S5PV310_GPIO_F0_START + (_nr))
#define S5PV310_GPF1(_nr)	(S5PV310_GPIO_F1_START + (_nr))
#define S5PV310_GPF2(_nr)	(S5PV310_GPIO_F2_START + (_nr))
#define S5PV310_GPF3(_nr)	(S5PV310_GPIO_F3_START + (_nr))
#define S5PV310_GPJ0(_nr)	(S5PV310_GPIO_J0_START + (_nr))
#define S5PV310_GPJ1(_nr)	(S5PV310_GPIO_J1_START + (_nr))
#define S5PV310_GPK0(_nr)	(S5PV310_GPIO_K0_START + (_nr))
#define S5PV310_GPK1(_nr)	(S5PV310_GPIO_K1_START + (_nr))
#define S5PV310_GPK2(_nr)	(S5PV310_GPIO_K2_START + (_nr))
#define S5PV310_GPK3(_nr)	(S5PV310_GPIO_K3_START + (_nr))
#define S5PV310_GPL0(_nr)	(S5PV310_GPIO_L0_START + (_nr))
#define S5PV310_GPL1(_nr)	(S5PV310_GPIO_L1_START + (_nr))
#define S5PV310_GPL2(_nr)	(S5PV310_GPIO_L2_START + (_nr))
#define S5PV310_GPX0(_nr)	(S5PV310_GPIO_X0_START + (_nr))
#define S5PV310_GPX1(_nr)	(S5PV310_GPIO_X1_START + (_nr))
#define S5PV310_GPX2(_nr)	(S5PV310_GPIO_X2_START + (_nr))
#define S5PV310_GPX3(_nr)	(S5PV310_GPIO_X3_START + (_nr))
#define S5PV310_GPZ(_nr)	(S5PV310_GPIO_Z_START + (_nr))

/* the end of the S5PV310 specific gpios */
#define S5PV310_GPIO_END	(S5PV310_GPZ(S5PV310_GPIO_Z_NR) + 1)
#define S3C_GPIO_END		S5PV310_GPIO_END

/* define the number of gpios we need to the one after the GPZ() range */
#define ARCH_NR_GPIOS		(S5PV310_GPZ(S5PV310_GPIO_Z_NR) +	\
				 CONFIG_SAMSUNG_GPIO_EXTRA + 1)

#include <asm-generic/gpio.h>

#endif /* __ASM_ARCH_GPIO_H */
