/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_UTRANMobilityInformation_H_
#define	_UTRANMobilityInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UTRANMobilityInformation-r3-IEs.h"
#include "UTRANMobilityInformation-v3a0ext-IEs.h"
#include <BIT_STRING.h>
#include "UtranMobilityInformation-v690ext-IEs.h"
#include <constr_SEQUENCE.h>
#include "RRC-TransactionIdentifier.h"
#include "UTRANMobilityInformation-r5-IEs.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum UTRANMobilityInformation_PR {
	UTRANMobilityInformation_PR_NOTHING,	/* No components present */
	UTRANMobilityInformation_PR_r3,
	UTRANMobilityInformation_PR_later_than_r3
} UTRANMobilityInformation_PR;
typedef enum criticalExtensions_PR {
	criticalExtensions_PR_NOTHING,	/* No components present */
	criticalExtensions_PR_r5,
	criticalExtensions_PR_criticalExtensions
} criticalExtensions_PR;

/* UTRANMobilityInformation */
typedef struct UTRANMobilityInformation {
	UTRANMobilityInformation_PR present;
	union UTRANMobilityInformation_u {
		struct r3 {
			UTRANMobilityInformation_r3_IEs_t	 utranMobilityInformation_r3;
			struct v3a0NonCriticalExtensions {
				UTRANMobilityInformation_v3a0ext_IEs_t	 utranMobilityInformation_v3a0ext;
				struct laterNonCriticalExtensions {
					BIT_STRING_t	*utranMobilityInformation_r3_add_ext	/* OPTIONAL */;
					struct v690NonCriticalExtensions {
						UtranMobilityInformation_v690ext_IEs_t	 utranMobilityInformation_v690ext;
						struct nonCriticalExtensions {
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *nonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *v690NonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *laterNonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v3a0NonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r3;
		struct later_than_r3 {
			RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
			struct criticalExtensions {
				criticalExtensions_PR present;
				union UTRANMobilityInformation__later_than_r3__criticalExtensions_u {
					struct r5 {
						UTRANMobilityInformation_r5_IEs_t	 utranMobilityInformation_r5;
						struct v690NonCriticalExtensions {
							UtranMobilityInformation_v690ext_IEs_t	 utranMobilityInformation_v690ext;
							struct nonCriticalExtensions {
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *nonCriticalExtensions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *v690NonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} r5;
					struct criticalExtensions {
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} criticalExtensions;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} later_than_r3;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UTRANMobilityInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UTRANMobilityInformation;

#ifdef __cplusplus
}
#endif

#endif	/* _UTRANMobilityInformation_H_ */
#include <asn_internal.h>
