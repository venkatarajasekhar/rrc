/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_InterRATHandoverInfo_v4b0ext_IEs_H_
#define	_InterRATHandoverInfo_v4b0ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "AccessStratumReleaseIndicator.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* InterRATHandoverInfo-v4b0ext-IEs */
typedef struct InterRATHandoverInfo_v4b0ext_IEs {
	AccessStratumReleaseIndicator_t	 accessStratumReleaseIndicator;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRATHandoverInfo_v4b0ext_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRATHandoverInfo_v4b0ext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _InterRATHandoverInfo_v4b0ext_IEs_H_ */
#include <asn_internal.h>
