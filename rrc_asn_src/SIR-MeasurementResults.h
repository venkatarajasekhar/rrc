/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SIR_MeasurementResults_H_
#define	_SIR_MeasurementResults_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TFCS-IdentityPlain.h"
#include "SIR-TimeslotList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SIR-MeasurementResults */
typedef struct SIR_MeasurementResults {
	TFCS_IdentityPlain_t	 tfcs_ID;
	SIR_TimeslotList_t	 sir_TimeslotList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SIR_MeasurementResults_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SIR_MeasurementResults;

#ifdef __cplusplus
}
#endif

#endif	/* _SIR_MeasurementResults_H_ */
#include <asn_internal.h>