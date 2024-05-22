#ifndef _LIBULTRA_TEMP_H_
#define _LIBULTRA_TEMP_H_

#include "types.h"

typedef s32	OSPri;
typedef s32	OSId;
typedef union	{ struct { f32 f_odd; f32 f_even; } f; f64 d; }	__OSfp;

typedef struct {
	u64	at, v0, v1, a0, a1, a2, a3;
	u64	t0, t1, t2, t3, t4, t5, t6, t7;
	u64	s0, s1, s2, s3, s4, s5, s6, s7;
	u64	t8, t9,         gp, sp, s8, ra;
	u64	lo, hi;
	u32	sr, pc, cause, badvaddr, rcp;
	u32	fpcsr;
	__OSfp	 fp0,  fp2,  fp4,  fp6,  fp8, fp10, fp12, fp14;
	__OSfp	fp16, fp18, fp20, fp22, fp24, fp26, fp28, fp30;
} __OSThreadContext;

typedef struct OSThread_s {
	struct OSThread_s	*next;		
	OSPri			priority;	
	struct OSThread_s	**queue;	
	struct OSThread_s	*tlnext;
	u16			state;		
	u16			flags;		
	OSId			id;		
	int			fp;		
	__OSThreadContext	context;	
} OSThread;

typedef void *	OSMesg;

typedef struct OSMesgQueue_s {
	OSThread	*mtqueue;
	OSThread	*fullqueue;
	s32		validCount;
	s32		first;		
	s32		msgCount;	
	OSMesg		*msg;		
} OSMesgQueue;

extern s32 osEepromWrite(OSMesgQueue *, u8, u8 *);

#endif
