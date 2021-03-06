/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_EllipsoidPointAltitudeEllipsoide_H_
#define	_EllipsoidPointAltitudeEllipsoide_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum latitudeSign {
	latitudeSign_north	= 0,
	latitudeSign_south	= 1
} e_latitudeSign;
typedef enum altitudeDirection {
	altitudeDirection_height	= 0,
	altitudeDirection_depth	= 1
} e_altitudeDirection;

/* EllipsoidPointAltitudeEllipsoide */
typedef struct EllipsoidPointAltitudeEllipsoide {
	long	 latitudeSign;
	long	 latitude;
	long	 longitude;
	long	 altitudeDirection;
	long	 altitude;
	long	 uncertaintySemiMajor;
	long	 uncertaintySemiMinor;
	long	 orientationMajorAxis;
	long	 uncertaintyAltitude;
	long	 confidence;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} EllipsoidPointAltitudeEllipsoide_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_latitudeSign_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_altitudeDirection_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_EllipsoidPointAltitudeEllipsoide;

#ifdef __cplusplus
}
#endif

#endif	/* _EllipsoidPointAltitudeEllipsoide_H_ */
#include <asn_internal.h>
