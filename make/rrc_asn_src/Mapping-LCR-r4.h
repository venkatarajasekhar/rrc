/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_Mapping_LCR_r4_H_
#define	_Mapping_LCR_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MappingFunctionParameterList.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Mapping-LCR-r4 */
typedef struct Mapping_LCR_r4 {
	MappingFunctionParameterList_t	 mappingFunctionParameterList;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} Mapping_LCR_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_Mapping_LCR_r4;

#ifdef __cplusplus
}
#endif

#endif	/* _Mapping_LCR_r4_H_ */
#include <asn_internal.h>
