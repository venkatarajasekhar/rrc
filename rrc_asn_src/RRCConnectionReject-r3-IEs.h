/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_RRCConnectionReject_r3_IEs_H_
#define	_RRCConnectionReject_r3_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InitialUE-Identity.h"
#include "RRC-TransactionIdentifier.h"
#include "RejectionCause.h"
#include "WaitTime.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct RedirectionInfo;

/* RRCConnectionReject-r3-IEs */
typedef struct RRCConnectionReject_r3_IEs {
	InitialUE_Identity_t	 initialUE_Identity;
	RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	RejectionCause_t	 rejectionCause;
	WaitTime_t	 waitTime;
	struct RedirectionInfo	*redirectionInfo	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionReject_r3_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionReject_r3_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "RedirectionInfo.h"

#endif	/* _RRCConnectionReject_r3_IEs_H_ */
#include <asn_internal.h>