/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_NewInterFreqCell_H_
#define	_NewInterFreqCell_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterFreqCellID.h"
#include "CellInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct FrequencyInfo;

/* NewInterFreqCell */
typedef struct NewInterFreqCell {
	InterFreqCellID_t	*interFreqCellID	/* OPTIONAL */;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	CellInfo_t	 cellInfo;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NewInterFreqCell_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NewInterFreqCell;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "FrequencyInfo.h"

#endif	/* _NewInterFreqCell_H_ */
#include <asn_internal.h>