/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_InterRATMeasQuantity_H_
#define	_InterRATMeasQuantity_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementQuantityGSM.h"
#include "FilterCoefficient.h"
#include "BSIC-VerificationRequired.h"
#include <constr_SEQUENCE.h>
#include <NativeInteger.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ratSpecificInfo_PR {
	ratSpecificInfo_PR_NOTHING,	/* No components present */
	ratSpecificInfo_PR_gsm,
	ratSpecificInfo_PR_is_2000
} ratSpecificInfo_PR;

/* Forward declarations */
struct IntraFreqMeasQuantity;

/* InterRATMeasQuantity */
typedef struct InterRATMeasQuantity {
	struct IntraFreqMeasQuantity	*measQuantityUTRAN_QualityEstimate	/* OPTIONAL */;
	struct ratSpecificInfo {
		ratSpecificInfo_PR present;
		union InterRATMeasQuantity__ratSpecificInfo_u {
			struct gsm {
				MeasurementQuantityGSM_t	 measurementQuantity;
				FilterCoefficient_t	 filterCoefficient	/* DEFAULT 0 */;
				BSIC_VerificationRequired_t	 bsic_VerificationRequired;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} gsm;
			struct is_2000 {
				long	 tadd_EcIo;
				long	 tcomp_EcIo;
				long	*softSlope	/* OPTIONAL */;
				long	*addIntercept	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} is_2000;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ratSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRATMeasQuantity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRATMeasQuantity;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntraFreqMeasQuantity.h"

#endif	/* _InterRATMeasQuantity_H_ */
#include <asn_internal.h>