/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PDSCH_PowerControlInfo_H_
#define	_PDSCH_PowerControlInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TPC-StepSizeTDD.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UL_CCTrChTPCList;

/* PDSCH-PowerControlInfo */
typedef struct PDSCH_PowerControlInfo {
	TPC_StepSizeTDD_t	*tpc_StepSizeTDD	/* OPTIONAL */;
	struct UL_CCTrChTPCList	*ul_CCTrChTPCList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PDSCH_PowerControlInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PDSCH_PowerControlInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UL-CCTrChTPCList.h"

#endif	/* _PDSCH_PowerControlInfo_H_ */
#include <asn_internal.h>