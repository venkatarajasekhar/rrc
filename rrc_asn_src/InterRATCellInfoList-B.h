/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_InterRATCellInfoList_B_H_
#define	_InterRATCellInfoList_B_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RemovedInterRATCellList.h"
#include "NewInterRATCellList-B.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* InterRATCellInfoList-B */
typedef struct InterRATCellInfoList_B {
	RemovedInterRATCellList_t	 removedInterRATCellList;
	NewInterRATCellList_B_t	 newInterRATCellList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRATCellInfoList_B_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRATCellInfoList_B;

#ifdef __cplusplus
}
#endif

#endif	/* _InterRATCellInfoList_B_H_ */
#include <asn_internal.h>
