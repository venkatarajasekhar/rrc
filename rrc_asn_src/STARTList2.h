/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_STARTList2_H_
#define	_STARTList2_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct STARTSingle;

/* STARTList2 */
typedef struct STARTList2 {
	A_SEQUENCE_OF(struct STARTSingle) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} STARTList2_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_STARTList2;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "STARTSingle.h"

#endif	/* _STARTList2_H_ */
#include <asn_internal.h>