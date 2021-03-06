/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#ifndef	_MeasurementControl_H_
#define	_MeasurementControl_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MeasurementControl-r3-IEs.h"
#include "MeasurementControl-v390ext.h"
#include "MeasurementControl-v3a0ext.h"
#include <BIT_STRING.h>
#include "MeasurementControl-v590ext-IEs.h"
#include "MeasurementControl-v5b0ext-IEs.h"
#include "MeasurementControl-v7xyext-IEs.h"
#include <constr_SEQUENCE.h>
#include "RRC-TransactionIdentifier.h"
#include "MeasurementControl-r4-IEs.h"
#include "MeasurementControl-r6-IEs.h"
#include "MeasurementControl-v6a0ext-IEs.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum MeasurementControl_PR {
	MeasurementControl_PR_NOTHING,	/* No components present */
	MeasurementControl_PR_r3,
	MeasurementControl_PR_later_than_r3
} MeasurementControl_PR;
typedef enum criticalExtensions_PR {
	criticalExtensions_PR_NOTHING,	/* No components present */
	criticalExtensions_PR_r4,
	criticalExtensions_PR_later_than_r4
} criticalExtensions_PR;
typedef enum criticalExtensions_PR {
	criticalExtensions_PR_NOTHING,	/* No components present */
	criticalExtensions_PR_r6,
	criticalExtensions_PR_criticalExtensions
} criticalExtensions_PR;

/* MeasurementControl */
typedef struct MeasurementControl {
	MeasurementControl_PR present;
	union MeasurementControl_u {
		struct r3 {
			MeasurementControl_r3_IEs_t	 measurementControl_r3;
			struct v390nonCriticalExtensions {
				MeasurementControl_v390ext_t	 measurementControl_v390ext;
				struct v3a0NonCriticalExtensions {
					MeasurementControl_v3a0ext_t	 measurementControl_v3a0ext;
					struct laterNonCriticalExtensions {
						BIT_STRING_t	*measurementControl_r3_add_ext	/* OPTIONAL */;
						struct v4b0NonCriticalExtensions {
							struct v590NonCriticalExtensions {
								MeasurementControl_v590ext_IEs_t	 measurementControl_v590ext;
								struct v5b0NonCriticalExtensions {
									MeasurementControl_v5b0ext_IEs_t	 measurementControl_v5b0ext;
									struct v7xyNonCriticalExtensions {
										MeasurementControl_v7xyext_IEs_t	 measurementControl_v7xyext;
										struct nonCriticalExtensions {
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *nonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *v7xyNonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *v5b0NonCriticalExtensions;
								
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
			} *v390nonCriticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} r3;
		struct later_than_r3 {
			RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
			struct criticalExtensions {
				criticalExtensions_PR present;
				union MeasurementControl__later_than_r3__criticalExtensions_u {
					struct r4 {
						MeasurementControl_r4_IEs_t	 measurementControl_r4;
						struct v4d0NonCriticalExtensions {
							BIT_STRING_t	*measurementControl_r4_add_ext	/* OPTIONAL */;
							struct v590NonCriticalExtensions {
								MeasurementControl_v590ext_IEs_t	 measurementControl_v590ext;
								struct v5b0NonCriticalExtensions {
									MeasurementControl_v5b0ext_IEs_t	 measurementControl_v5b0ext;
									struct v7xyNonCriticalExtensions {
										MeasurementControl_v7xyext_IEs_t	 measurementControl_v7xyext;
										struct nonCriticalExtensions {
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *nonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *v7xyNonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} *v5b0NonCriticalExtensions;
								
								/* Context for parsing across buffer boundaries */
								asn_struct_ctx_t _asn_ctx;
							} *v590NonCriticalExtensions;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} *v4d0NonCriticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} r4;
					struct later_than_r4 {
						RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier_MSP;
						struct criticalExtensions {
							criticalExtensions_PR present;
							union MeasurementControl__later_than_r3__criticalExtensions__later_than_r4__criticalExtensions_u {
								struct r6 {
									MeasurementControl_r6_IEs_t	 measurementControl_r6;
									struct v6a0NonCriticalExtensions {
										MeasurementControl_v6a0ext_IEs_t	 measurementControl_v6a0ext;
										struct v7xyNonCriticalExtensions {
											MeasurementControl_v7xyext_IEs_t	 measurementControl_v7xyext;
											struct nonCriticalExtensions {
												
												/* Context for parsing across buffer boundaries */
												asn_struct_ctx_t _asn_ctx;
											} *nonCriticalExtensions;
											
											/* Context for parsing across buffer boundaries */
											asn_struct_ctx_t _asn_ctx;
										} *v7xyNonCriticalExtensions;
										
										/* Context for parsing across buffer boundaries */
										asn_struct_ctx_t _asn_ctx;
									} *v6a0NonCriticalExtensions;
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} r6;
								struct criticalExtensions {
									
									/* Context for parsing across buffer boundaries */
									asn_struct_ctx_t _asn_ctx;
								} criticalExtensions;
							} choice;
							
							/* Context for parsing across buffer boundaries */
							asn_struct_ctx_t _asn_ctx;
						} criticalExtensions;
						
						/* Context for parsing across buffer boundaries */
						asn_struct_ctx_t _asn_ctx;
					} later_than_r4;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} criticalExtensions;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} later_than_r3;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MeasurementControl_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MeasurementControl;

#ifdef __cplusplus
}
#endif

#endif	/* _MeasurementControl_H_ */
#include <asn_internal.h>
