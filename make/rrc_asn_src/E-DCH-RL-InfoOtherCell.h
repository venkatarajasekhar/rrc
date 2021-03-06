/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_E_DCH_RL_InfoOtherCell_H_
#define	_E_DCH_RL_InfoOtherCell_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PrimaryCPICH-Info.h"
#include "E-HICH-Information.h"
#include <NULL.h>
#include <constr_CHOICE.h>
#include "E-RGCH-Information.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum e_HICH_Info_PR {
	e_HICH_Info_PR_NOTHING,	/* No components present */
	e_HICH_Info_PR_e_HICH_Information,
	e_HICH_Info_PR_releaseIndicator
} e_HICH_Info_PR;
typedef enum e_RGCH_Info_PR {
	e_RGCH_Info_PR_NOTHING,	/* No components present */
	e_RGCH_Info_PR_e_RGCH_Information,
	e_RGCH_Info_PR_releaseIndicator
} e_RGCH_Info_PR;

/* E-DCH-RL-InfoOtherCell */
typedef struct E_DCH_RL_InfoOtherCell {
	PrimaryCPICH_Info_t	 primaryCPICH_Info;
	struct e_HICH_Info {
		e_HICH_Info_PR present;
		union E_DCH_RL_InfoOtherCell__e_HICH_Info_u {
			E_HICH_Information_t	 e_HICH_Information;
			NULL_t	 releaseIndicator;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *e_HICH_Info;
	struct e_RGCH_Info {
		e_RGCH_Info_PR present;
		union E_DCH_RL_InfoOtherCell__e_RGCH_Info_u {
			E_RGCH_Information_t	 e_RGCH_Information;
			NULL_t	 releaseIndicator;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *e_RGCH_Info;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_DCH_RL_InfoOtherCell_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_DCH_RL_InfoOtherCell;

#ifdef __cplusplus
}
#endif

#endif	/* _E_DCH_RL_InfoOtherCell_H_ */
#include <asn_internal.h>
