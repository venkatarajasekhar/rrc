/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UE_RadioAccessCapability_v3a0ext_H_
#define	_UE_RadioAccessCapability_v3a0ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UE-PositioningCapabilityExt-v3a0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-RadioAccessCapability-v3a0ext */
typedef struct UE_RadioAccessCapability_v3a0ext {
	UE_PositioningCapabilityExt_v3a0_t	 ue_PositioningCapabilityExt_v3a0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_RadioAccessCapability_v3a0ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_RadioAccessCapability_v3a0ext;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_RadioAccessCapability_v3a0ext_H_ */
#include <asn_internal.h>