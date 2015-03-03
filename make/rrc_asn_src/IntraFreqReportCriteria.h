/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_IntraFreqReportCriteria_H_
#define	_IntraFreqReportCriteria_H_


#include <asn_application.h>

/* Including external dependencies */
#include "IntraFreqReportingCriteria.h"
#include "PeriodicalWithReportingCellStatus.h"
#include "ReportingCellStatusOpt.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum IntraFreqReportCriteria_PR {
	IntraFreqReportCriteria_PR_NOTHING,	/* No components present */
	IntraFreqReportCriteria_PR_intraFreqReportingCriteria,
	IntraFreqReportCriteria_PR_periodicalReportingCriteria,
	IntraFreqReportCriteria_PR_noReporting
} IntraFreqReportCriteria_PR;

/* IntraFreqReportCriteria */
typedef struct IntraFreqReportCriteria {
	IntraFreqReportCriteria_PR present;
	union IntraFreqReportCriteria_u {
		IntraFreqReportingCriteria_t	 intraFreqReportingCriteria;
		PeriodicalWithReportingCellStatus_t	 periodicalReportingCriteria;
		ReportingCellStatusOpt_t	 noReporting;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IntraFreqReportCriteria_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IntraFreqReportCriteria;

#ifdef __cplusplus
}
#endif

#endif	/* _IntraFreqReportCriteria_H_ */
#include <asn_internal.h>