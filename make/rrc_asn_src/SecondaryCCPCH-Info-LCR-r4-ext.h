/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_SecondaryCCPCH_Info_LCR_r4_ext_H_
#define	_SecondaryCCPCH_Info_LCR_r4_ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IndividualTimeslotInfo-LCR-r4-ext.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* SecondaryCCPCH-Info-LCR-r4-ext */
typedef struct SecondaryCCPCH_Info_LCR_r4_ext {
	IndividualTimeslotInfo_LCR_r4_ext_t	 individualTimeslotLCR_Ext;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SecondaryCCPCH_Info_LCR_r4_ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SecondaryCCPCH_Info_LCR_r4_ext;

#ifdef __cplusplus
}
#endif

#endif	/* _SecondaryCCPCH_Info_LCR_r4_ext_H_ */
#include <asn_internal.h>