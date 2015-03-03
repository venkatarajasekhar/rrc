/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_HS_SICH_Configuration_TDD128_H_
#define	_HS_SICH_Configuration_TDD128_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TimeslotNumber-LCR-r4.h"
#include "HS-ChannelisationCode-LCR.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <NULL.h>
#include "MidambleShiftLong.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum midambleAllocationMode_PR {
	midambleAllocationMode_PR_NOTHING,	/* No components present */
	midambleAllocationMode_PR_defaultMidamble,
	midambleAllocationMode_PR_ueSpecificMidamble
} midambleAllocationMode_PR;
typedef enum tpc_step_size {
	tpc_step_size_s1	= 0,
	tpc_step_size_s2	= 1,
	tpc_step_size_s3	= 2,
	tpc_step_size_spare1	= 3
} e_tpc_step_size;

/* HS-SICH-Configuration-TDD128 */
typedef struct HS_SICH_Configuration_TDD128 {
	TimeslotNumber_LCR_r4_t	 timeslotNumber;
	HS_ChannelisationCode_LCR_t	 channelisationCode;
	struct midambleAllocationMode {
		midambleAllocationMode_PR present;
		union HS_SICH_Configuration_TDD128__midambleAllocationMode_u {
			NULL_t	 defaultMidamble;
			struct ueSpecificMidamble {
				MidambleShiftLong_t	 midambleShift;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} ueSpecificMidamble;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} midambleAllocationMode;
	long	 midambleConfiguration;
	long	 nack_ack_power_offset;
	long	 power_level_HSSICH;
	long	 tpc_step_size;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} HS_SICH_Configuration_TDD128_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_tpc_step_size_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_HS_SICH_Configuration_TDD128;

#ifdef __cplusplus
}
#endif

#endif	/* _HS_SICH_Configuration_TDD128_H_ */
#include <asn_internal.h>