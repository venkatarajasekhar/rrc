/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DL_FDPCH_InfoCommon_r6_H_
#define	_DL_FDPCH_InfoCommon_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NULL.h>
#include "TimingMaintainedSynchInd.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum cfnHandling_PR {
	cfnHandling_PR_NOTHING,	/* No components present */
	cfnHandling_PR_maintain,
	cfnHandling_PR_initialise
} cfnHandling_PR;

/* Forward declarations */
struct DL_DPCH_PowerControlInfo;

/* DL-FDPCH-InfoCommon-r6 */
typedef struct DL_FDPCH_InfoCommon_r6 {
	struct cfnHandling {
		cfnHandling_PR present;
		union DL_FDPCH_InfoCommon_r6__cfnHandling_u {
			struct maintain {
				TimingMaintainedSynchInd_t	*timingmaintainedsynchind	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} maintain;
			NULL_t	 initialise;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cfnHandling;
	struct DL_DPCH_PowerControlInfo	*dl_FDPCH_PowerControlInfo	/* OPTIONAL */;
	long	*dl_FDPCH_TPCcommandErrorRate	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_FDPCH_InfoCommon_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_FDPCH_InfoCommon_r6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DL-DPCH-PowerControlInfo.h"

#endif	/* _DL_FDPCH_InfoCommon_r6_H_ */
#include <asn_internal.h>
