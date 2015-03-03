/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_UECapabilityInformation_H_
#define	_UECapabilityInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "RRC-TransactionIdentifier.h"
#include "UECapabilityInformation-v370ext.h"
#include "UECapabilityInformation-v380ext-IEs.h"
#include "UECapabilityInformation-v3a0ext-IEs.h"
#include <BIT_STRING.h>
#include "UECapabilityInformation-v4b0ext.h"
#include "UECapabilityInformation-v590ext.h"
#include "UECapabilityInformation-v5c0ext.h"
#include "UECapabilityInformation-v690ext-IEs.h"
#include "UECapabilityInformation-v7xyext-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct UE_RadioAccessCapability;
struct InterRAT_UE_RadioAccessCapabilityList;

/* UECapabilityInformation */
typedef struct UECapabilityInformation {
	RRC_TransactionIdentifier_t	*rrc_TransactionIdentifier	/* OPTIONAL */;
	struct UE_RadioAccessCapability	*ue_RadioAccessCapability	/* OPTIONAL */;
	struct InterRAT_UE_RadioAccessCapabilityList	*ue_RATSpecificCapability	/* OPTIONAL */;
	struct v370NonCriticalExtensions {
		UECapabilityInformation_v370ext_t	 ueCapabilityInformation_v370ext;
		struct v380NonCriticalExtensions {
			UECapabilityInformation_v380ext_IEs_t	 ueCapabilityInformation_v380ext;
			struct v3a0NonCriticalExtensions {
				UECapabilityInformation_v3a0ext_IEs_t	 ueCapabilityInformation_v3a0ext;
				struct laterNonCriticalExtensions {
					BIT_STRING_t	*ueCapabilityInformation_r3_add_ext	/* OPTIONAL */;
					struct v4b0NonCriticalExtensions {
						UECapabilityInformation_v4b0ext_t	 ueCapabilityInformation_v4b0ext;
						struct v590NonCriticalExtensions {
							UECapabilityInformation_v590ext_t	 ueCapabilityInformation_v590ext;
							struct v5c0NonCriticalExtensions {
								UECapabilityInformation_v5c0ext_t	 ueCapabilityInformation_v5c0ext;
								struct v690NonCriticalExtensions {
									UECapabilityInformation_v690ext_IEs_t	 ueCapabilityInformation_v690ext;
									struct v7xyNonCriticalExtensions {
										UECapabilityInformation_v7xyext_IEs_t	 ueCapabilityInformation_v7xyext;
										struct nonCriticalExtensions {
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *nonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *v7xyNonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *v690NonCriticalExtensions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *v5c0NonCriticalExtensions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *v590NonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} *v4b0NonCriticalExtensions;
					
					/* Context for parsing across buffer boundaries */
					asn_struct_ctx_t _asn_ctx;
				} *laterNonCriticalExtensions;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *v3a0NonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *v380NonCriticalExtensions;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *v370NonCriticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} UECapabilityInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_UECapabilityInformation;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "UE-RadioAccessCapability.h"
#include "InterRAT-UE-RadioAccessCapabilityList.h"

#endif	/* _UECapabilityInformation_H_ */
#include <asn_internal.h>