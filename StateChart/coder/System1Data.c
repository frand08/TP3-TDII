/*
 * Id:        System1Data.c
 *
 * Function:  VS System Data Source File.
 *
 * This is an automatically generated file. It will be overwritten by the Coder.
 * 
 * DO NOT EDIT THE FILE!
 */


#include "System1SEMLibB.h"


#if (VS_CODER_GUID != 0X001b51368L)
#error The generated file does not match the SEMTypes.h header file.
#endif


#include "System1Data.h"


#include "System1Action.h"


#include <stdarg.h>


/*
 * Action Expression Pointer Table.
 */
VS_ACTIONEXPR_TYPE const System1VSAction[14] = 
{
  (VS_ACTIONEXPR_TYPE) NULL /* declared action function is never used */,
  (VS_ACTIONEXPR_TYPE) NULL /* declared action function is never used */,
  aBoard_Init,
  (VS_ACTIONEXPR_TYPE) NULL /* declared action function is never used */,
  (VS_ACTIONEXPR_TYPE) NULL /* declared action function is never used */,
  aGPIO_Config,
  aLedOff,
  aLedOn,
  aRecargaDebounce,
  aSysTickInit,
  (VS_ACTIONEXPR_TYPE) NULL /* declared action function is never used */,
  aSystemCoreClockUpdate,
  (VS_ACTIONEXPR_TYPE) NULL /* declared action function is never used */,
  (VS_ACTIONEXPR_TYPE) NULL /* declared action function is never used */
};
