/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_InterFreqMeasQuantity_H_
#define	_InterFreqMeasQuantity_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFreqMeasQuantity.h"
#include <constr_SEQUENCE.h>
#include "FilterCoefficient.h"
#include "FreqQualityEstimateQuantity-FDD.h"
#include "FreqQualityEstimateQuantity-TDD.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum reportingCriteria_PR {
	reportingCriteria_PR_NOTHING,	/* No components present */
	reportingCriteria_PR_intraFreqReportingCriteria,
	reportingCriteria_PR_interFreqReportingCriteria
} reportingCriteria_PR;
typedef enum modeSpecificInfo_PR {
	modeSpecificInfo_PR_NOTHING,	/* No components present */
	modeSpecificInfo_PR_fdd,
	modeSpecificInfo_PR_tdd
} modeSpecificInfo_PR;

/* InterFreqMeasQuantity */
typedef struct InterFreqMeasQuantity {
	struct reportingCriteria {
		reportingCriteria_PR present;
		union InterFreqMeasQuantity__reportingCriteria_u {
			struct intraFreqReportingCriteria {
				IntraFreqMeasQuantity_t	 intraFreqMeasQuantity;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} intraFreqReportingCriteria;
			struct interFreqReportingCriteria {
				FilterCoefficient_t	 filterCoefficient	/* DEFAULT 0 */;
				struct modeSpecificInfo {
					modeSpecificInfo_PR present;
					union InterFreqMeasQuantity__reportingCriteria__interFreqReportingCriteria__modeSpecificInfo_u {
						struct fdd {
							FreqQualityEstimateQuantity_FDD_t	 freqQualityEstimateQuantity_FDD;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} fdd;
						struct tdd {
							FreqQualityEstimateQuantity_TDD_t	 freqQualityEstimateQuantity_TDD;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} tdd;
					} choice;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} modeSpecificInfo;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} interFreqReportingCriteria;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} reportingCriteria;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFreqMeasQuantity_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFreqMeasQuantity;

#ifdef __cplusplus
}
#endif

#endif	/* _InterFreqMeasQuantity_H_ */
#include <asn_internal.h>
