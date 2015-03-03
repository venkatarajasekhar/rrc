/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DSCH_TransportChannelsInfo_H_
#define	_DSCH_TransportChannelsInfo_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "TransportChannelIdentity.h"
#include "TransportFormatSet.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* DSCH-TransportChannelsInfo */
typedef struct DSCH_TransportChannelsInfo {
	A_SEQUENCE_OF(struct Member {
		TransportChannelIdentity_t	 dsch_transport_channel_identity;
		TransportFormatSet_t	 dsch_TFS;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DSCH_TransportChannelsInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DSCH_TransportChannelsInfo;

#ifdef __cplusplus
}
#endif

#endif	/* _DSCH_TransportChannelsInfo_H_ */
#include <asn_internal.h>