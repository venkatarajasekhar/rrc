/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UL_DeletedTransChInfoList_H_
#define	_UL_DeletedTransChInfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UL_TransportChannelIdentity;

/* UL-DeletedTransChInfoList */
typedef struct UL_DeletedTransChInfoList {
	A_SEQUENCE_OF(struct UL_TransportChannelIdentity) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_DeletedTransChInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_DeletedTransChInfoList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UL-TransportChannelIdentity.h"

#endif	/* _UL_DeletedTransChInfoList_H_ */
#include <asn_internal.h>