/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "UL-DPCH-PowerControlInfoPredef.h"

static asn_per_constraints_t asn_PER_type_UL_DPCH_PowerControlInfoPredef_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, powerControlAlgorithm),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PowerControlAlgorithm,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"powerControlAlgorithm"
		},
};
static const ber_tlv_tag_t asn_DEF_fdd_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* powerControlAlgorithm */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_2 = {
	sizeof(struct fdd),
	offsetof(struct fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_2,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_2 = {
	"fdd",
	"fdd",
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
	asn_DEF_fdd_tags_2,
	sizeof(asn_DEF_fdd_tags_2)
		/sizeof(asn_DEF_fdd_tags_2[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_2,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_2)
		/sizeof(asn_DEF_fdd_tags_2[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_2,
	1,	/* Elements count */
	&asn_SPC_fdd_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct tdd, dpch_ConstantValue),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConstantValueTdd,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dpch-ConstantValue"
		},
};
static const ber_tlv_tag_t asn_DEF_tdd_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* dpch-ConstantValue */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_4 = {
	sizeof(struct tdd),
	offsetof(struct tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_4,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_4 = {
	"tdd",
	"tdd",
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
	asn_DEF_tdd_tags_4,
	sizeof(asn_DEF_tdd_tags_4)
		/sizeof(asn_DEF_tdd_tags_4[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_4,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_4)
		/sizeof(asn_DEF_tdd_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd_4,
	1,	/* Elements count */
	&asn_SPC_tdd_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UL_DPCH_PowerControlInfoPredef_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfoPredef, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfoPredef, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_UL_DPCH_PowerControlInfoPredef_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
static asn_CHOICE_specifics_t asn_SPC_UL_DPCH_PowerControlInfoPredef_specs_1 = {
	sizeof(struct UL_DPCH_PowerControlInfoPredef),
	offsetof(struct UL_DPCH_PowerControlInfoPredef, _asn_ctx),
	offsetof(struct UL_DPCH_PowerControlInfoPredef, present),
	sizeof(((struct UL_DPCH_PowerControlInfoPredef *)0)->present),
	asn_MAP_UL_DPCH_PowerControlInfoPredef_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UL_DPCH_PowerControlInfoPredef = {
	"UL-DPCH-PowerControlInfoPredef",
	"UL-DPCH-PowerControlInfoPredef",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_UL_DPCH_PowerControlInfoPredef_constr_1,
	asn_MBR_UL_DPCH_PowerControlInfoPredef_1,
	2,	/* Elements count */
	&asn_SPC_UL_DPCH_PowerControlInfoPredef_specs_1	/* Additional specs */
};
