/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "Internode-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_OngoingMeasRep_H_
#define	_OngoingMeasRep_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementIdentity.h"
#include "MeasurementCommandWithType.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct MeasurementReportingMode;
struct AdditionalMeasurementID_List;

/* OngoingMeasRep */
typedef struct OngoingMeasRep {
	MeasurementIdentity_t	 measurementIdentity;
	MeasurementCommandWithType_t	 measurementCommandWithType;
	struct MeasurementReportingMode	*measurementReportingMode	/* OPTIONAL */;
	struct AdditionalMeasurementID_List	*additionalMeasurementID_List	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} OngoingMeasRep_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_OngoingMeasRep;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "MeasurementReportingMode.h"
#include "AdditionalMeasurementID-List.h"

#endif	/* _OngoingMeasRep_H_ */
#include <asn_internal.h>
