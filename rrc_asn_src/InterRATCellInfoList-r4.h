/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_InterRATCellInfoList_r4_H_
#define	_InterRATCellInfoList_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RemovedInterRATCellList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NewInterRATCellList;
struct CellsForInterRATMeasList;

/* InterRATCellInfoList-r4 */
typedef struct InterRATCellInfoList_r4 {
	RemovedInterRATCellList_t	 removedInterRATCellList;
	struct NewInterRATCellList	*newInterRATCellList	/* OPTIONAL */;
	struct CellsForInterRATMeasList	*cellsForInterRATMeasList	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterRATCellInfoList_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterRATCellInfoList_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NewInterRATCellList.h"
#include "CellsForInterRATMeasList.h"

#endif	/* _InterRATCellInfoList_r4_H_ */
#include <asn_internal.h>