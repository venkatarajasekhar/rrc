/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "rrc.asn1"
 */

#include "RRCConnectionReleaseComplete.h"

static const ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_6 = {
	sizeof(struct nonCriticalExtensions),
	offsetof(struct nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_6 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
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
	asn_DEF_nonCriticalExtensions_tags_6,
	sizeof(asn_DEF_nonCriticalExtensions_tags_6)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_6[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_6,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_6)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_laterNonCriticalExtensions_4[] = {
	{ ATF_POINTER, 2, offsetof(struct laterNonCriticalExtensions, rrcConnectionReleaseComplete_r3_add_ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrcConnectionReleaseComplete-r3-add-ext"
		},
	{ ATF_POINTER, 1, offsetof(struct laterNonCriticalExtensions, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtensions"
		},
};
static const int asn_MAP_laterNonCriticalExtensions_oms_4[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_laterNonCriticalExtensions_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_laterNonCriticalExtensions_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrcConnectionReleaseComplete-r3-add-ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_laterNonCriticalExtensions_specs_4 = {
	sizeof(struct laterNonCriticalExtensions),
	offsetof(struct laterNonCriticalExtensions, _asn_ctx),
	asn_MAP_laterNonCriticalExtensions_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_laterNonCriticalExtensions_oms_4,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_laterNonCriticalExtensions_4 = {
	"laterNonCriticalExtensions",
	"laterNonCriticalExtensions",
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
	asn_DEF_laterNonCriticalExtensions_tags_4,
	sizeof(asn_DEF_laterNonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_laterNonCriticalExtensions_tags_4[0]) - 1, /* 1 */
	asn_DEF_laterNonCriticalExtensions_tags_4,	/* Same as above */
	sizeof(asn_DEF_laterNonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_laterNonCriticalExtensions_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_laterNonCriticalExtensions_4,
	2,	/* Elements count */
	&asn_SPC_laterNonCriticalExtensions_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_RRCConnectionReleaseComplete_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionReleaseComplete, rrc_TransactionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TransactionIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-TransactionIdentifier"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionReleaseComplete, errorIndication),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_FailureCauseWithProtErr,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"errorIndication"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionReleaseComplete, laterNonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_laterNonCriticalExtensions_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"laterNonCriticalExtensions"
		},
};
static const int asn_MAP_RRCConnectionReleaseComplete_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_RRCConnectionReleaseComplete_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_RRCConnectionReleaseComplete_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* rrc-TransactionIdentifier */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* errorIndication */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* laterNonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionReleaseComplete_specs_1 = {
	sizeof(struct RRCConnectionReleaseComplete),
	offsetof(struct RRCConnectionReleaseComplete, _asn_ctx),
	asn_MAP_RRCConnectionReleaseComplete_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_RRCConnectionReleaseComplete_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionReleaseComplete = {
	"RRCConnectionReleaseComplete",
	"RRCConnectionReleaseComplete",
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
	asn_DEF_RRCConnectionReleaseComplete_tags_1,
	sizeof(asn_DEF_RRCConnectionReleaseComplete_tags_1)
		/sizeof(asn_DEF_RRCConnectionReleaseComplete_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionReleaseComplete_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionReleaseComplete_tags_1)
		/sizeof(asn_DEF_RRCConnectionReleaseComplete_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RRCConnectionReleaseComplete_1,
	3,	/* Elements count */
	&asn_SPC_RRCConnectionReleaseComplete_specs_1	/* Additional specs */
};
