/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_MAC_hs_DelQueue_H_
#define	_MAC_hs_DelQueue_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MAC-hs-DelQueue */
typedef struct MAC_hs_DelQueue {
	long	 mac_hsQueueId;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MAC_hs_DelQueue_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MAC_hs_DelQueue;

#ifdef __cplusplus
}
#endif

#endif	/* _MAC_hs_DelQueue_H_ */
#include <asn_internal.h>