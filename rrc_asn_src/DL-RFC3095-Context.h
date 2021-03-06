/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_DL_RFC3095_Context_H_
#define	_DL_RFC3095_Context_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <OCTET_STRING.h>
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum dl_mode {
	dl_mode_u	= 0,
	dl_mode_o	= 1,
	dl_mode_r	= 2
} e_dl_mode;

/* DL-RFC3095-Context */
typedef struct DL_RFC3095_Context {
	long	 rfc3095_Context_Identity;
	long	 dl_mode;
	OCTET_STRING_t	 dl_ref_ir;
	unsigned long	*dl_ref_time	/* OPTIONAL */;
	unsigned long	*dl_curr_time	/* OPTIONAL */;
	long	*dl_syn_offset_id	/* OPTIONAL */;
	unsigned long	*dl_syn_slope_ts	/* OPTIONAL */;
	BOOLEAN_t	 dl_dyn_changed;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_RFC3095_Context_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_mode_3;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_ref_time_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_curr_time_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_dl_syn_slope_ts_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_DL_RFC3095_Context;

#ifdef __cplusplus
}
#endif

#endif	/* _DL_RFC3095_Context_H_ */
#include <asn_internal.h>
