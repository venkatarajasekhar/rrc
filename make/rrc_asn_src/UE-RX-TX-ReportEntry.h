/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UE_RX_TX_ReportEntry_H_
#define	_UE_RX_TX_ReportEntry_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PrimaryCPICH-Info.h"
#include "UE-RX-TX-TimeDifferenceType1.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* UE-RX-TX-ReportEntry */
typedef struct UE_RX_TX_ReportEntry {
	PrimaryCPICH_Info_t	 primaryCPICH_Info;
	UE_RX_TX_TimeDifferenceType1_t	 ue_RX_TX_TimeDifferenceType1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UE_RX_TX_ReportEntry_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UE_RX_TX_ReportEntry;

#ifdef __cplusplus
}
#endif

#endif	/* _UE_RX_TX_ReportEntry_H_ */
#include <asn_internal.h>
