#include "common.h"

INCLUDE_ASM(const s32, "lib/A7270", __osTimerServicesInit);

INCLUDE_ASM(const s32, "lib/A7270", __osTimerInterrupt);

INCLUDE_ASM(const s32, "lib/A7270", __osSetTimerIntr);

INCLUDE_ASM(const s32, "lib/A7270", __osInsertTimer);
