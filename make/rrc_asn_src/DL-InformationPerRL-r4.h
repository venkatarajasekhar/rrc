/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_DL_InformationPerRL_r4_H_
#define	_DL_InformationPerRL_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "CellIdentity.h"
#include "PrimaryCCPCH-Info-r4.h"
#include "PrimaryCPICH-Info.h"
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
struct DL_DPCH_InfoPerRL_r4;
struct SCCPCH_InfoForFACH_r4;
struct PDSCH_SHO_DCH_Info;
struct PDSCH_CodeMapping;

/* DL-InformationPerRL-r4 */
typedef struct DL_InformationPerRL_r4 {
	struct modeSpecificInfo {
		modeSpecificInfo_PR present;
		union DL_InformationPerRL_r4__modeSpecificInfo_u {
			struct fdd {
				PrimaryCPICH_Info_t	 primaryCPICH_Info;
				struct PDSCH_SHO_DCH_Info	*dummy1	/* OPTIONAL */;
				struct PDSCH_CodeMapping	*dummy2	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			PrimaryCCPCH_Info_r4_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificInfo;
	struct DL_DPCH_InfoPerRL_r4	*dl_DPCH_InfoPerRL	/* OPTIONAL */;
	struct SCCPCH_InfoForFACH_r4	*dummy	/* OPTIONAL */;
	CellIdentity_t	*cell_id	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} DL_InformationPerRL_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_DL_InformationPerRL_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "DL-DPCH-InfoPerRL-r4.h"
#include "SCCPCH-InfoForFACH-r4.h"
#include "PDSCH-SHO-DCH-Info.h"
#include "PDSCH-CodeMapping.h"

#endif	/* _DL_InformationPerRL_r4_H_ */
#include <asn_internal.h>
