/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SRB_InformationSetup_r6_H_
#define	_SRB_InformationSetup_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RB-Identity.h"
#include "RLC-InfoChoice-r6.h"
#include "RB-MappingInfo-r6.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SRB-InformationSetup-r6 */
typedef struct SRB_InformationSetup_r6 {
	RB_Identity_t	*rb_Identity	/* OPTIONAL */;
	RLC_InfoChoice_r6_t	 rlc_InfoChoice;
	RB_MappingInfo_r6_t	 rb_MappingInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SRB_InformationSetup_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SRB_InformationSetup_r6;

#ifdef __cplusplus
}
#endif

#endif	/* _SRB_InformationSetup_r6_H_ */
#include <asn_internal.h>
