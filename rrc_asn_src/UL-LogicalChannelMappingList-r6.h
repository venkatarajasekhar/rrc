/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_UL_LogicalChannelMappingList_r6_H_
#define	_UL_LogicalChannelMappingList_r6_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UL_LogicalChannelMapping_r6;

/* UL-LogicalChannelMappingList-r6 */
typedef struct UL_LogicalChannelMappingList_r6 {
	BOOLEAN_t	 rlc_LogicalChannelMappingIndicator;
	struct ul_LogicalChannelMapping {
		A_SEQUENCE_OF(struct UL_LogicalChannelMapping_r6) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ul_LogicalChannelMapping;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UL_LogicalChannelMappingList_r6_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UL_LogicalChannelMappingList_r6;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UL-LogicalChannelMapping-r6.h"

#endif	/* _UL_LogicalChannelMappingList_r6_H_ */
#include <asn_internal.h>