/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_InterFrequencyMeasurement_r4_H_
#define	_InterFrequencyMeasurement_r4_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterFreqCellInfoList-r4.h"
#include "InterFreqReportCriteria-r4.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqMeasQuantity;
struct InterFreqReportingQuantity;
struct MeasurementValidity;
struct UE_AutonomousUpdateMode;

/* InterFrequencyMeasurement-r4 */
typedef struct InterFrequencyMeasurement_r4 {
	InterFreqCellInfoList_r4_t	 interFreqCellInfoList;
	struct InterFreqMeasQuantity	*interFreqMeasQuantity	/* OPTIONAL */;
	struct InterFreqReportingQuantity	*interFreqReportingQuantity	/* OPTIONAL */;
	struct MeasurementValidity	*measurementValidity	/* OPTIONAL */;
	struct UE_AutonomousUpdateMode	*interFreqSetUpdate	/* OPTIONAL */;
	InterFreqReportCriteria_r4_t	 reportCriteria;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFrequencyMeasurement_r4_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFrequencyMeasurement_r4;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqMeasQuantity.h"
#include "InterFreqReportingQuantity.h"
#include "MeasurementValidity.h"
#include "UE-AutonomousUpdateMode.h"

#endif	/* _InterFrequencyMeasurement_r4_H_ */
#include <asn_internal.h>