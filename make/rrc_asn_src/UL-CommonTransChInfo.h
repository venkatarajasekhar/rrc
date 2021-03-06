/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UL_CommonTransChInfo_H_
#define	_UL_CommonTransChInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include "TFCS.h"
#include <constr_SEQUENCE.h>
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

/* Forward declarations */
struct TFC_Subset;
struct TFCS;
struct IndividualUL_CCTrCH_InfoList;

/* UL-CommonTransChInfo */
typedef struct UL_CommonTransChInfo {
	struct TFC_Subset	*tfc_Subset	/* OPTIONAL */;
	struct TFCS	*prach_TFCS	/* OPTIONAL */;
	struct modeSpecificInfo {
		modeSpecificInfo_PR present;
		union UL_CommonTransChInfo__modeSpecificInfo_u {
			struct fdd {
				TFCS_t	 ul_TFCS;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			struct tdd {
				struct IndividualUL_CCTrCH_InfoList	*individualUL_CCTrCH_InfoList	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *modeSpecificInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_CommonTransChInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_CommonTransChInfo;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "TFC-Subset.h"
#include "TFCS.h"
#include "IndividualUL-CCTrCH-InfoList.h"

#endif	/* _UL_CommonTransChInfo_H_ */
#include <asn_internal.h>
