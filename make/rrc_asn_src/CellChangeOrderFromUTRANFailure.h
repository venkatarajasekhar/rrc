/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_CellChangeOrderFromUTRANFailure_H_
#define	_CellChangeOrderFromUTRANFailure_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellChangeOrderFromUTRANFailure-r3-IEs.h"
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include "RRC-TransactionIdentifier.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CellChangeOrderFromUTRANFailure_PR {
	CellChangeOrderFromUTRANFailure_PR_NOTHING,	/* No components present */
	CellChangeOrderFromUTRANFailure_PR_r3,
	CellChangeOrderFromUTRANFailure_PR_dummy
} CellChangeOrderFromUTRANFailure_PR;

/* CellChangeOrderFromUTRANFailure */
typedef struct CellChangeOrderFromUTRANFailure {
	CellChangeOrderFromUTRANFailure_PR present;
	union CellChangeOrderFromUTRANFailure_u {
		struct r3 {
			CellChangeOrderFromUTRANFailure_r3_IEs_t	 cellChangeOrderFromUTRANFailure_r3;
			struct laterNonCriticalExtensions {
				BIT_STRING_t	*cellChangeOrderFromUTRANFailure_r3_add_ext	/* OPTIONAL */;
				struct nonCriticalExtensions {
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *nonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *laterNonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r3;
		struct dummy {
			RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
			struct criticalExtensions {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} dummy;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CellChangeOrderFromUTRANFailure_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CellChangeOrderFromUTRANFailure;

#ifdef __cplusplus
}
#endif

#endif	/* _CellChangeOrderFromUTRANFailure_H_ */
#include <asn_internal.h>