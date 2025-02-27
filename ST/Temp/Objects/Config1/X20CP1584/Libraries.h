/* Automation Studio generated header file */
/* Do not edit ! */

#ifndef _LIBRARIES_20240518105822_
#define _LIBRARIES_20240518105822_

__asm__(".section \".plc\"");

/* Used IEC files */
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/operator/operator.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/runtime/runtime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/astime/astime.var\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.fun\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.typ\\\" scope \\\"global\\\"\\n\"");
__asm__(".ascii \"iecfile \\\"Logical/Libraries/AsIecCon/AsIecCon.var\\\" scope \\\"global\\\"\\n\"");

/* Exported library functions and function blocks */
#ifdef _OPERATOR_EXPORT
	__asm__(".ascii \"plcexport \\\"SIZEOF\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ADR\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ADRINST\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SHR\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ROR\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ROL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SHL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"AND\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"XOR\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"OR\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"NOT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ADD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"MUL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SUB\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DIV\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"MOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"MOVE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"MAX\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"MIN\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LIMIT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SEL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"MUX\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"GE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"EQ\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"GT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"NE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ABS\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SQRT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LN\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LOG\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"EXP\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SIN\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"COS\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TAN\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ASIN\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ACOS\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ATAN\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"EXPT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TRUNC\\\" FUN\\n\"");
#endif
#ifdef _RUNTIME_EXPORT
	__asm__(".ascii \"plcexport \\\"r_trig\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"f_trig\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"rf_trig\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"GetTime\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SFCActionControl\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"SFCAC2\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"RealTan\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"RealAtan\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"RealAsin\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"RealAcos\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"RealExp\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"RealLn\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"RealLog\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"RealExpt\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"RealAbs\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"RealSin\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"RealCos\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"RealSqrt\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SFCAC3\\\" FUB\\n\"");
#endif
#ifdef _ASTIME_EXPORT
	__asm__(".ascii \"plcexport \\\"DTExSetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DTSetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DTGetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"clock_ms\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UtcDTGetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"UtcDTSetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"UtcDTExSetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DTStructureGetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DTStructureSetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DTStructureExSetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"UtcDTStructureGetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"UtcDTStructureSetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"UtcDTStructureExSetTime\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"UtcDT_TO_LocalDTStructure\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"LocalDT_TO_UtcDTStructure\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"UtcDTStructure_TO_LocalDT\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"LocalDTStructure_TO_UtcDT\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"ascTIMEStructure\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ascDTStructure\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ascTIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"ascDT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIMEStructure_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_TIMEStructure\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DTStructure_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_DTStructure\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DiffT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DiffDT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TimeDeviceGetInfo\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DstGetInfo\\\" FUB\\n\"");
	__asm__(".ascii \"plcexport \\\"DstGetInfoDT\\\" FUB\\n\"");
#endif
#ifdef _ASIECCON_EXPORT
	__asm__(".ascii \"plcexport \\\"swapDT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapTIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapDATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapTOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapLREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapUDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapUINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"swapDWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HDT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HTIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HDATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HTOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HLREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HUDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HUINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"N_TO_HINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NDT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NTIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NDATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NTOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NLREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NUDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NUINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"H_TO_NINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BOOL_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"BYTE_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WORD_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DWORD_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"SINT_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"INT_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DINT_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"USINT_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UINT_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"UDINT_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TIME_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DT_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"DATE_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"TOD_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"REAL_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_STRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"LREAL_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"STRING_TO_WSTRING\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_BOOL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_BYTE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_WORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_DWORD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_SINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_INT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_DINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_USINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_UINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_UDINT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_TIME\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_DT\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_DATE\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_TOD\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_REAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_LREAL\\\" FUN\\n\"");
	__asm__(".ascii \"plcexport \\\"WSTRING_TO_STRING\\\" FUN\\n\"");
#endif

__asm__(".previous");


#endif /* _LIBRARIES_20240518105822_ */

