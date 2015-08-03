#ifndef _visualSTATE_SYSTEM1ACTION_H
#define _visualSTATE_SYSTEM1ACTION_H

/*
 * Id:        System1Action.h
 *
 * Function:  VS System Action Expression Pointer Table Header File.
 *
 * This is an automatically generated file. It will be overwritten by the Coder.
 * 
 * DO NOT EDIT THE FILE!
 */


#include "System1SEMBDef.h"


#if (VS_CODER_GUID != 0X001b51368L)
#error The generated file does not match the SEMTypes.h header file.
#endif


/*
 * Action Function Prototypes.
 */
extern void Action1 (void);
extern void ToggleLed (void);
extern void aBoard_Init (void);
extern void aDebounce (void);
extern void aDesactivarFlag (void);
extern void aGPIO_Config (void);
extern void aLedOff (void);
extern void aLedOn (void);
extern void aRecargaDebounce (void);
extern void aSysTickInit (void);
extern void aSysTickInit_stop (void);
extern void aSystemCoreClockUpdate (void);
extern void aTimerDebounce (void);
extern void aTriggerFlagToggle (void);


/*
 * Action Expression Pointer Table.
 */
extern VS_ACTIONEXPR_TYPE const System1VSAction[14];


#endif /* ifndef _visualSTATE_SYSTEM1ACTION_H */
