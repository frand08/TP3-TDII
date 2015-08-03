#ifndef _visualSTATE_SYSTEM1SEMTYPES_H
#define _visualSTATE_SYSTEM1SEMTYPES_H

/*
 * Id:        System1SEMTypes.h
 *
 * Function:  SEM Types Header File.
 *
 * This is an automatically generated file. It will be overwritten by the Coder.
 * 
 * DO NOT EDIT THE FILE!
 */


#define VS_CODER_GUID 0X001b51368L


#include <limits.h>


#include <stdbool.h>


#include <stdint.h>


#define VS_UINT16_VAARG    int
#define VS_INT16_VAARG     int

#if ((INT_MAX == 32767) && (LONG_MAX == 2147483647L))
#define VS_UINT32_VAARG    int32_t
#define VS_INT32_VAARG     int32_t
#elif (INT_MAX == 2147483647L)
#define VS_UINT32_VAARG    int
#define VS_INT32_VAARG     int
#else
#define VS_UINT32_VAARG    (unsupported data type)
#define VS_INT32_VAARG     (unsupported data type)
#endif


/*
 * SEM Variable Types.
 */
#define SEM_EVENT_TYPE                   uint8_t
#define SEM_ACTION_EXPRESSION_TYPE       uint8_t
#define SEM_GUARD_EXPRESSION_TYPE        uint8_t
#define SEM_EXPLANATION_TYPE             uint8_t
#define SEM_STATE_TYPE                   uint8_t
#define SEM_STATE_MACHINE_TYPE           uint8_t
#define SEM_INSTANCE_TYPE                uint8_t
#define SEM_RULE_INDEX_TYPE              uint8_t
#define SEM_INTERNAL_TYPE                uint8_t
#define SEM_SIGNAL_QUEUE_TYPE            uint8_t
#define SEM_ACTION_FUNCTION_TYPE         uint8_t
#define SEM_EVENT_GROUP_TYPE             uint8_t
#define SEM_EGTI_TYPE                    uint8_t
#define SEM_RULE_TABLE_INDEX_TYPE        uint8_t


#endif /* ifndef _visualSTATE_SYSTEM1SEMTYPES_H */
