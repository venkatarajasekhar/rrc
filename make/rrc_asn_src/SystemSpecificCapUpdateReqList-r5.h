/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SystemSpecificCapUpdateReqList_r5_H_
#define	_SystemSpecificCapUpdateReqList_r5_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SystemSpecificCapUpdateReq-r5.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SystemSpecificCapUpdateReqList-r5 */
typedef struct SystemSpecificCapUpdateReqList_r5 {
	A_SEQUENCE_OF(SystemSpecificCapUpdateReq_r5_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SystemSpecificCapUpdateReqList_r5_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SystemSpecificCapUpdateReqList_r5;

#ifdef __cplusplus
}
#endif

#endif	/* _SystemSpecificCapUpdateReqList_r5_H_ */
#include <asn_internal.h>