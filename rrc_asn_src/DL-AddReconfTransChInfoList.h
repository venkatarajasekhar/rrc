/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DL_AddReconfTransChInfoList_H_
#define	_DL_AddReconfTransChInfoList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct DL_AddReconfTransChInformation;

/* DL-AddReconfTransChInfoList */
typedef struct DL_AddReconfTransChInfoList {
	A_SEQUENCE_OF(struct DL_AddReconfTransChInformation) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_AddReconfTransChInfoList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_AddReconfTransChInfoList;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DL-AddReconfTransChInformation.h"

#endif	/* _DL_AddReconfTransChInfoList_H_ */
#include <asn_internal.h>
