/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_CompleteSIBshort_H_
#define	_CompleteSIBshort_H_


#include <asn_application.h>

/* Including external dependencies */
#include "SIB-Type.h"
#include "SIB-Data-variable.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* CompleteSIBshort */
typedef struct CompleteSIBshort {
	SIB_Type_t	 sib_Type;
	SIB_Data_variable_t	 sib_Data_variable;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CompleteSIBshort_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CompleteSIBshort;

#ifdef __cplusplus
}
#endif

#endif	/* _CompleteSIBshort_H_ */
#include <asn_internal.h>
