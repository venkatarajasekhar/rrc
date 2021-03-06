/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_GSM_MessageList_H_
#define	_GSM_MessageList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* GSM-MessageList */
typedef struct GSM_MessageList {
	A_SEQUENCE_OF(BIT_STRING_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} GSM_MessageList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_GSM_MessageList;

#ifdef __cplusplus
}
#endif

#endif	/* _GSM_MessageList_H_ */
#include <asn_internal.h>
