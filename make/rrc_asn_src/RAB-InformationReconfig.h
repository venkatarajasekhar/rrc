/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_RAB_InformationReconfig_H_
#define	_RAB_InformationReconfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RAB-Identity.h"
#include "CN-DomainIdentity.h"
#include "NAS-Synchronisation-Indicator.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* RAB-InformationReconfig */
typedef struct RAB_InformationReconfig {
	RAB_Identity_t	 rab_Identity;
	CN_DomainIdentity_t	 cn_DomainIdentity;
	NAS_Synchronisation_Indicator_t	 nas_Synchronisation_Indicator;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RAB_InformationReconfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RAB_InformationReconfig;

#ifdef __cplusplus
}
#endif

#endif	/* _RAB_InformationReconfig_H_ */
#include <asn_internal.h>