/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_RRCConnectionRequest_H_
#define	_RRCConnectionRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InitialUE-Identity.h"
#include "EstablishmentCause.h"
#include "ProtocolErrorIndicator.h"
#include "RRCConnectionRequest-v3d0ext-IEs.h"
#include "RRCConnectionRequest-v4b0ext-IEs.h"
#include "RRCConnectionRequest-v590ext-IEs.h"
#include "RRCConnectionRequest-v690ext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasuredResultsOnRACH;

/* RRCConnectionRequest */
typedef struct RRCConnectionRequest {
	InitialUE_Identity_t	 initialUE_Identity;
	EstablishmentCause_t	 establishmentCause;
	ProtocolErrorIndicator_t	 protocolErrorIndicator;
	struct MeasuredResultsOnRACH	*measuredResultsOnRACH	/* OPTIONAL */;
	struct v3d0NonCriticalExtensions {
		RRCConnectionRequest_v3d0ext_IEs_t	 rRCConnectionRequest_v3d0ext;
		struct v4b0NonCriticalExtensions {
			RRCConnectionRequest_v4b0ext_IEs_t	 rrcConnectionRequest_v4b0ext;
			struct v590NonCriticalExtensions {
				RRCConnectionRequest_v590ext_IEs_t	 rrcConnectionRequest_v590ext;
				struct v690NonCriticalExtensions {
					RRCConnectionRequest_v690ext_IEs_t	 rrcConnectionRequest_v690ext;
					struct nonCriticalExtensions {
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *nonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *v690NonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v590NonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v4b0NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *v3d0NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RRCConnectionRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RRCConnectionRequest;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasuredResultsOnRACH.h"

#endif	/* _RRCConnectionRequest_H_ */
#include <asn_internal.h>
