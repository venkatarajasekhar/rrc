/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_RB_InformationSetupList_H_
#define	_RB_InformationSetupList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RB_InformationSetup;

/* RB-InformationSetupList */
typedef struct RB_InformationSetupList {
	A_SEQUENCE_OF(struct RB_InformationSetup) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RB_InformationSetupList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RB_InformationSetupList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RB-InformationSetup.h"

#endif	/* _RB_InformationSetupList_H_ */
#include <asn_internal.h>
