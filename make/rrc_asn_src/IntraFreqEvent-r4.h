/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_IntraFreqEvent_r4_H_
#define	_IntraFreqEvent_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "Event1a-r4.h"
#include "Event1b-r4.h"
#include "Event1c.h"
#include <NULL.h>
#include "Event1e.h"
#include "Event1f.h"
#include "ThresholdUsedFrequency.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IntraFreqEvent_r4_PR {
	IntraFreqEvent_r4_PR_NOTHING,	/* No components present */
	IntraFreqEvent_r4_PR_e1a,
	IntraFreqEvent_r4_PR_e1b,
	IntraFreqEvent_r4_PR_e1c,
	IntraFreqEvent_r4_PR_e1d,
	IntraFreqEvent_r4_PR_e1e,
	IntraFreqEvent_r4_PR_e1f,
	IntraFreqEvent_r4_PR_e1g,
	IntraFreqEvent_r4_PR_e1h,
	IntraFreqEvent_r4_PR_e1i
} IntraFreqEvent_r4_PR;

/* IntraFreqEvent-r4 */
typedef struct IntraFreqEvent_r4 {
	IntraFreqEvent_r4_PR present;
	union IntraFreqEvent_r4_u {
		Event1a_r4_t	 e1a;
		Event1b_r4_t	 e1b;
		Event1c_t	 e1c;
		NULL_t	 e1d;
		Event1e_t	 e1e;
		Event1f_t	 e1f;
		NULL_t	 e1g;
		ThresholdUsedFrequency_t	 e1h;
		ThresholdUsedFrequency_t	 e1i;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqEvent_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqEvent_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _IntraFreqEvent_r4_H_ */
#include <asn_internal.h>