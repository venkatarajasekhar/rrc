/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_IntraFreqReportingCriteria_r4_H_
#define	_IntraFreqReportingCriteria_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct IntraFreqEventCriteriaList_r4;

/* IntraFreqReportingCriteria-r4 */
typedef struct IntraFreqReportingCriteria_r4 {
	struct IntraFreqEventCriteriaList_r4	*eventCriteriaList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqReportingCriteria_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqReportingCriteria_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntraFreqEventCriteriaList-r4.h"

#endif	/* _IntraFreqReportingCriteria_r4_H_ */
#include <asn_internal.h>