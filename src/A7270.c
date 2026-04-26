#include "common.h"

INCLUDE_ASM("asm/nonmatchings/A7270", __osTimerServicesInit);

INCLUDE_ASM("asm/nonmatchings/A7270", __osTimerInterrupt);

INCLUDE_ASM("asm/nonmatchings/A7270", __osSetTimerIntr);

INCLUDE_ASM("asm/nonmatchings/A7270", __osInsertTimer);
