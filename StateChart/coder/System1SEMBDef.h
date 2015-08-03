#ifndef _visualSTATE_SYSTEM1SEMBDEF_H
#define _visualSTATE_SYSTEM1SEMBDEF_H

/*
 * Id:        System1SEMBDef.h
 *
 * Function:  SEM Defines Header File.
 *
 * This is an automatically generated file. It will be overwritten by the Coder.
 * 
 * DO NOT EDIT THE FILE!
 */


#include "System1SEMTypes.h"


#if (VS_CODER_GUID != 0X001b51368L)
#error The generated file does not match the SEMTypes.h header file.
#endif


/*
 * Number of Identifiers.
 */
#define VS_NOF_ACTION_EXPRESSIONS        0X00eu  /*  14 */
#define VS_NOF_ACTION_FUNCTIONS          0X00eu  /*  14 */
#define VS_NOF_EVENT_GROUPS              0X001u  /*   1 */
#define VS_NOF_EVENTS                    0X004u  /*   4 */
#define VS_NOF_EXTERNAL_VARIABLES        0X000u  /*   0 */
#define VS_NOF_GUARD_EXPRESSIONS         0X000u  /*   0 */
#define VS_NOF_INSTANCES                 0X001u  /*   1 */
#define VS_NOF_INTERNAL_VARIABLES        0X000u  /*   0 */
#define VS_NOF_SIGNALS                   0X000u  /*   0 */
#define VS_NOF_STATE_MACHINES            0X002u  /*   2 */
#define VS_NOF_STATES                    0X004u  /*   4 */


/*
 * Undefined State.
 */
#define STATE_UNDEFINED                  0X0FFu  /* 255 */


/*
 * Undefined Event.
 */
#define EVENT_UNDEFINED                  0X0FFu  /* 255 */


/*
 * Undefined Event Group.
 */
#define EVENT_GROUP_UNDEFINED            0X0FFu  /* 255 */


/*
 * Event Termination ID.
 */
#define EVENT_TERMINATION_ID             0X0FFu  /* 255 */
#define ACTION_FPT_NAME System1VSAction


/*
 * Functional expression type definitions
 */
typedef _Bool (* VS_GUARDEXPR_TYPE) (void);
typedef void (* VS_ACTIONEXPR_TYPE) (void);


/*
 * SEM Library Datatype Definition.
 */
typedef struct SEMDATASystem1
{
  uint8_t                                       Status;
  uint8_t                                       State;
  uint8_t                                       DIt;
  uint8_t                                       nAction;
  SEM_EVENT_TYPE                                EventNo;
  SEM_EVENT_TYPE                                OriginalEventNo;
  SEM_RULE_INDEX_TYPE                           _iRI;
  SEM_RULE_TABLE_INDEX_TYPE                     iFirstR;
  SEM_RULE_TABLE_INDEX_TYPE                     iLastR;
  SEM_STATE_TYPE                                CSV[VS_NOF_STATE_MACHINES];
  SEM_STATE_TYPE                                WSV[VS_NOF_STATE_MACHINES];
} SEMDATASystem1;


/*
 * VS System Datatype Definition.
 */
typedef struct
{
  uint8_t        StateMachineIndex[0X004];
  uint8_t        EventGroupIndex[0X004];
  uint8_t        RuleData[0X01b];
  uint8_t        RuleIndex[0X005];
  uint8_t        RuleTableIndex[0X006];
} VSDATASystem1;


/*
 * Data External Declaration.
 */
extern VSDATASystem1 const System1;

extern SEMDATASystem1 SEMSystem1;


/*
 * Action Expression Collection Macro.
 */
#define VSAction                       System1VSAction


#endif /* ifndef _visualSTATE_SYSTEM1SEMBDEF_H */
