/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_PhysicalChannelReconfiguration_r4_IEs_H_
#define	_PhysicalChannelReconfiguration_r4_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ActivationTime.h"
#include "C-RNTI.h"
#include "DSCH-RNTI.h"
#include "RRC-StateIndicator.h"
#include "UTRAN-DRX-CycleLengthCoefficient.h"
#include "URA-Identity.h"
#include "MaxAllowedUL-TX-Power.h"
#include <NULL.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum modeSpecificInfo_PR {
	modeSpecificInfo_PR_NOTHING,	/* No components present */
	modeSpecificInfo_PR_fdd,
	modeSpecificInfo_PR_tdd
} modeSpecificInfo_PR;

/* Forward declarations */
struct IntegrityProtectionModeInfo;
struct CipheringModeInfo;
struct U_RNTI;
struct CN_InformationInfo;
struct DL_CounterSynchronisationInfo;
struct FrequencyInfo;
struct UL_ChannelRequirementWithCPCH_SetID_r4;
struct DL_CommonInformation_r4;
struct DL_InformationPerRL_List_r4;
struct DL_PDSCH_Information;

/* PhysicalChannelReconfiguration-r4-IEs */
typedef struct PhysicalChannelReconfiguration_r4_IEs {
	struct IntegrityProtectionModeInfo	*integrityProtectionModeInfo	/* OPTIONAL */;
	struct CipheringModeInfo	*cipheringModeInfo	/* OPTIONAL */;
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	struct U_RNTI	*new_U_RNTI	/* OPTIONAL */;
	C_RNTI_t	*new_C_RNTI	/* OPTIONAL */;
	DSCH_RNTI_t	*new_DSCH_RNTI	/* OPTIONAL */;
	RRC_StateIndicator_t	 rrc_StateIndicator;
	UTRAN_DRX_CycleLengthCoefficient_t	*utran_DRX_CycleLengthCoeff	/* OPTIONAL */;
	struct CN_InformationInfo	*cn_InformationInfo	/* OPTIONAL */;
	URA_Identity_t	*ura_Identity	/* OPTIONAL */;
	struct DL_CounterSynchronisationInfo	*dl_CounterSynchronisationInfo	/* OPTIONAL */;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	MaxAllowedUL_TX_Power_t	*maxAllowedUL_TX_Power	/* OPTIONAL */;
	struct UL_ChannelRequirementWithCPCH_SetID_r4	*ul_ChannelRequirement	/* OPTIONAL */;
	struct modeSpecificInfo {
		modeSpecificInfo_PR present;
		union PhysicalChannelReconfiguration_r4_IEs__modeSpecificInfo_u {
			struct fdd {
				struct DL_PDSCH_Information	*dummy	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			NULL_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	struct DL_CommonInformation_r4	*dl_CommonInformation	/* OPTIONAL */;
	struct DL_InformationPerRL_List_r4	*dl_InformationPerRL_List	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} PhysicalChannelReconfiguration_r4_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_PhysicalChannelReconfiguration_r4_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntegrityProtectionModeInfo.h"
#include "CipheringModeInfo.h"
#include "U-RNTI.h"
#include "CN-InformationInfo.h"
#include "DL-CounterSynchronisationInfo.h"
#include "FrequencyInfo.h"
#include "UL-ChannelRequirementWithCPCH-SetID-r4.h"
#include "DL-CommonInformation-r4.h"
#include "DL-InformationPerRL-List-r4.h"
#include "DL-PDSCH-Information.h"

#endif	/* _PhysicalChannelReconfiguration_r4_IEs_H_ */
#include <asn_internal.h>