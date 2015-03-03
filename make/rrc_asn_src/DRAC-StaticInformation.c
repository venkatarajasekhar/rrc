/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "DRAC-StaticInformation.h"

static asn_TYPE_member_t asn_MBR_DRAC_StaticInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DRAC_StaticInformation, transmissionTimeValidity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransmissionTimeValidity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transmissionTimeValidity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRAC_StaticInformation, timeDurationBeforeRetry),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TimeDurationBeforeRetry,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"timeDurationBeforeRetry"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DRAC_StaticInformation, drac_ClassIdentity),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DRAC_ClassIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"drac-ClassIdentity"
		},
};
static const ber_tlv_tag_t asn_DEF_DRAC_StaticInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_DRAC_StaticInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transmissionTimeValidity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* timeDurationBeforeRetry */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* drac-ClassIdentity */
};
static asn_SEQUENCE_specifics_t asn_SPC_DRAC_StaticInformation_specs_1 = {
	sizeof(struct DRAC_StaticInformation),
	offsetof(struct DRAC_StaticInformation, _asn_ctx),
	asn_MAP_DRAC_StaticInformation_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DRAC_StaticInformation = {
	"DRAC-StaticInformation",
	"DRAC-StaticInformation",
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
	asn_DEF_DRAC_StaticInformation_tags_1,
	sizeof(asn_DEF_DRAC_StaticInformation_tags_1)
		/sizeof(asn_DEF_DRAC_StaticInformation_tags_1[0]), /* 1 */
	asn_DEF_DRAC_StaticInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_DRAC_StaticInformation_tags_1)
		/sizeof(asn_DEF_DRAC_StaticInformation_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_DRAC_StaticInformation_1,
	3,	/* Elements count */
	&asn_SPC_DRAC_StaticInformation_specs_1	/* Additional specs */
};
