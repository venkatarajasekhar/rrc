/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_UECapabilityInformation_v690ext_IEs_H_
#define	_UECapabilityInformation_v690ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UECapabilityInformation-v690ext-IEs */
typedef struct UECapabilityInformation_v690ext_IEs {
	BIT_STRING_t	*ueCapabilityContainer	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityInformation_v690ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityInformation_v690ext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _UECapabilityInformation_v690ext_IEs_H_ */
#include <asn_internal.h>