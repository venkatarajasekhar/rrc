/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "UE-Positioning-GPS-AdditionalAssistanceDataRequest.h"

static asn_TYPE_member_t asn_MBR_UE_Positioning_GPS_AdditionalAssistanceDataRequest_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_GPS_AdditionalAssistanceDataRequest, almanacRequest),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"almanacRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_GPS_AdditionalAssistanceDataRequest, utcModelRequest),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utcModelRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_GPS_AdditionalAssistanceDataRequest, ionosphericModelRequest),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ionosphericModelRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_GPS_AdditionalAssistanceDataRequest, navigationModelRequest),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"navigationModelRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_GPS_AdditionalAssistanceDataRequest, dgpsCorrectionsRequest),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dgpsCorrectionsRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_GPS_AdditionalAssistanceDataRequest, referenceLocationRequest),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"referenceLocationRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_GPS_AdditionalAssistanceDataRequest, referenceTimeRequest),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"referenceTimeRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_GPS_AdditionalAssistanceDataRequest, aquisitionAssistanceRequest),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"aquisitionAssistanceRequest"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UE_Positioning_GPS_AdditionalAssistanceDataRequest, realTimeIntegrityRequest),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"realTimeIntegrityRequest"
		},
	{ ATF_POINTER, 1, offsetof(struct UE_Positioning_GPS_AdditionalAssistanceDataRequest, navModelAddDataRequest),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_Positioning_GPS_NavModelAddDataReq,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"navModelAddDataRequest"
		},
};
static const int asn_MAP_UE_Positioning_GPS_AdditionalAssistanceDataRequest_oms_1[] = { 9 };
static const ber_tlv_tag_t asn_DEF_UE_Positioning_GPS_AdditionalAssistanceDataRequest_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UE_Positioning_GPS_AdditionalAssistanceDataRequest_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* almanacRequest */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* utcModelRequest */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ionosphericModelRequest */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* navigationModelRequest */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* dgpsCorrectionsRequest */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* referenceLocationRequest */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* referenceTimeRequest */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* aquisitionAssistanceRequest */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* realTimeIntegrityRequest */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 } /* navModelAddDataRequest */
};
static asn_SEQUENCE_specifics_t asn_SPC_UE_Positioning_GPS_AdditionalAssistanceDataRequest_specs_1 = {
	sizeof(struct UE_Positioning_GPS_AdditionalAssistanceDataRequest),
	offsetof(struct UE_Positioning_GPS_AdditionalAssistanceDataRequest, _asn_ctx),
	asn_MAP_UE_Positioning_GPS_AdditionalAssistanceDataRequest_tag2el_1,
	10,	/* Count of tags in the map */
	asn_MAP_UE_Positioning_GPS_AdditionalAssistanceDataRequest_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UE_Positioning_GPS_AdditionalAssistanceDataRequest = {
	"UE-Positioning-GPS-AdditionalAssistanceDataRequest",
	"UE-Positioning-GPS-AdditionalAssistanceDataRequest",
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
	asn_DEF_UE_Positioning_GPS_AdditionalAssistanceDataRequest_tags_1,
	sizeof(asn_DEF_UE_Positioning_GPS_AdditionalAssistanceDataRequest_tags_1)
		/sizeof(asn_DEF_UE_Positioning_GPS_AdditionalAssistanceDataRequest_tags_1[0]), /* 1 */
	asn_DEF_UE_Positioning_GPS_AdditionalAssistanceDataRequest_tags_1,	/* Same as above */
	sizeof(asn_DEF_UE_Positioning_GPS_AdditionalAssistanceDataRequest_tags_1)
		/sizeof(asn_DEF_UE_Positioning_GPS_AdditionalAssistanceDataRequest_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UE_Positioning_GPS_AdditionalAssistanceDataRequest_1,
	10,	/* Elements count */
	&asn_SPC_UE_Positioning_GPS_AdditionalAssistanceDataRequest_specs_1	/* Additional specs */
};
