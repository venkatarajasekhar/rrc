/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_PreDefPhyChConfiguration_H_
#define	_PreDefPhyChConfiguration_H_


#include <asn_application.h>

/* Including external dependencies */
#include "UL-DPCH-InfoPredef.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DL_CommonInformationPredef;

/* PreDefPhyChConfiguration */
typedef struct PreDefPhyChConfiguration {
	UL_DPCH_InfoPredef_t	 ul_DPCH_InfoPredef;
	struct DL_CommonInformationPredef	*dl_CommonInformationPredef	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PreDefPhyChConfiguration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PreDefPhyChConfiguration;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DL-CommonInformationPredef.h"

#endif	/* _PreDefPhyChConfiguration_H_ */
#include <asn_internal.h>
