/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "TrafficVolumeMeasSysInfo.h"

static int asn_DFL_2_set_4(int set_value, void **sptr) {
	MeasurementIdentity_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 4 */
		*st = 4;
		return 0;
	} else {
		/* Test default value 4 */
		return (*st == 4);
	}
}
static asn_TYPE_member_t asn_MBR_TrafficVolumeMeasSysInfo_1[] = {
	{ ATF_POINTER, 6, offsetof(struct TrafficVolumeMeasSysInfo, trafficVolumeMeasurementID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_2_set_4,	/* DEFAULT 4 */
		"trafficVolumeMeasurementID"
		},
	{ ATF_POINTER, 5, offsetof(struct TrafficVolumeMeasSysInfo, trafficVolumeMeasurementObjectList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrafficVolumeMeasurementObjectList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"trafficVolumeMeasurementObjectList"
		},
	{ ATF_POINTER, 4, offsetof(struct TrafficVolumeMeasSysInfo, trafficVolumeMeasQuantity),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TrafficVolumeMeasQuantity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"trafficVolumeMeasQuantity"
		},
	{ ATF_POINTER, 3, offsetof(struct TrafficVolumeMeasSysInfo, trafficVolumeReportingQuantity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrafficVolumeReportingQuantity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"trafficVolumeReportingQuantity"
		},
	{ ATF_POINTER, 2, offsetof(struct TrafficVolumeMeasSysInfo, dummy),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TrafficVolumeReportingCriteria,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dummy"
		},
	{ ATF_POINTER, 1, offsetof(struct TrafficVolumeMeasSysInfo, measurementValidity),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementValidity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measurementValidity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficVolumeMeasSysInfo, measurementReportingMode),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementReportingMode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measurementReportingMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct TrafficVolumeMeasSysInfo, reportCriteriaSysInf),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_TrafficVolumeReportCriteriaSysInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"reportCriteriaSysInf"
		},
};
static const int asn_MAP_TrafficVolumeMeasSysInfo_oms_1[] = { 0, 1, 2, 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_TrafficVolumeMeasSysInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_TrafficVolumeMeasSysInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* trafficVolumeMeasurementID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* trafficVolumeMeasurementObjectList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* trafficVolumeMeasQuantity */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* trafficVolumeReportingQuantity */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dummy */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* measurementValidity */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* measurementReportingMode */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 } /* reportCriteriaSysInf */
};
static asn_SEQUENCE_specifics_t asn_SPC_TrafficVolumeMeasSysInfo_specs_1 = {
	sizeof(struct TrafficVolumeMeasSysInfo),
	offsetof(struct TrafficVolumeMeasSysInfo, _asn_ctx),
	asn_MAP_TrafficVolumeMeasSysInfo_tag2el_1,
	8,	/* Count of tags in the map */
	asn_MAP_TrafficVolumeMeasSysInfo_oms_1,	/* Optional members */
	6, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_TrafficVolumeMeasSysInfo = {
	"TrafficVolumeMeasSysInfo",
	"TrafficVolumeMeasSysInfo",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_TrafficVolumeMeasSysInfo_tags_1,
	sizeof(asn_DEF_TrafficVolumeMeasSysInfo_tags_1)
		/sizeof(asn_DEF_TrafficVolumeMeasSysInfo_tags_1[0]), /* 1 */
	asn_DEF_TrafficVolumeMeasSysInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_TrafficVolumeMeasSysInfo_tags_1)
		/sizeof(asn_DEF_TrafficVolumeMeasSysInfo_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_TrafficVolumeMeasSysInfo_1,
	8,	/* Elements count */
	&asn_SPC_TrafficVolumeMeasSysInfo_specs_1	/* Additional specs */
};

