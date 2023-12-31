#pragma once
#include "base.h"

#define GPIO_OFFSET 0x00200000
#define GPIO_START (PBASE+GPIO_OFFSET)
#define GPFSEL1 (GPIO_START+0x04)
