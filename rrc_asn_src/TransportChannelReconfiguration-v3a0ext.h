/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_TransportChannelReconfiguration_v3a0ext_H_
#define	_TransportChannelReconfiguration_v3a0ext_H_


#include <asn_application.h>

/* Including external dependencies */
#include "DSCH-RNTI.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* TransportChannelReconfiguration-v3a0ext */
typedef struct TransportChannelReconfiguration_v3a0ext {
	DSCH_RNTI_t	*new_DSCH_RNTI	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TransportChannelReconfiguration_v3a0ext_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TransportChannelReconfiguration_v3a0ext;

#ifdef __cplusplus
}
#endif

#endif	/* _TransportChannelReconfiguration_v3a0ext_H_ */
#include <asn_internal.h>
