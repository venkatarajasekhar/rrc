/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DL_DPCH_InfoCommonPredef_H_
#define	_DL_DPCH_InfoCommonPredef_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SF512-AndPilot.h"
#include "PositionFixedOrFlexible.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include "CommonTimeslotInfo.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum modeSpecificInfo_PR {
	modeSpecificInfo_PR_NOTHING,	/* No components present */
	modeSpecificInfo_PR_fdd,
	modeSpecificInfo_PR_tdd
} modeSpecificInfo_PR;

/* DL-DPCH-InfoCommonPredef */
typedef struct DL_DPCH_InfoCommonPredef {
	struct modeSpecificInfo {
		modeSpecificInfo_PR present;
		union DL_DPCH_InfoCommonPredef__modeSpecificInfo_u {
			struct fdd {
				SF512_AndPilot_t	 spreadingFactorAndPilot;
				PositionFixedOrFlexible_t	 positionFixedOrFlexible;
				BOOLEAN_t	 tfci_Existence;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct tdd {
				CommonTimeslotInfo_t	 commonTimeslotInfo;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_DPCH_InfoCommonPredef_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_DPCH_InfoCommonPredef;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_DPCH_InfoCommonPredef_H_ */
#include <asn_internal.h>
