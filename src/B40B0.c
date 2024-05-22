#include "common.h"

INCLUDE_ASM(const s32, "B40B0", func_800B34B0_B40B0);

#ifdef PERMUTER
f32 func_800B3500_B4100(Vec3f* arg0, Vec3f* arg1) {

    f32 x = (arg0->x * arg1->x);
    f32 y = (arg0->y * arg1->y);
    f32 z = (arg1->z * arg0->z);
    
    return x + y + z;
}
#else
INCLUDE_ASM(const s32, "B40B0", func_800B3500_B4100);
#endif

INCLUDE_ASM(const s32, "B40B0", func_800B3530_B4130);

INCLUDE_ASM(const s32, "B40B0", func_800B3580_B4180);
