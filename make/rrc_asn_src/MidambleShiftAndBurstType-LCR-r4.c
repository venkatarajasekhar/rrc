/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "MidambleShiftAndBurstType-LCR-r4.h"

static int
memb_midambleShift_constraint_5(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_midambleConfiguration_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_midambleShift_constr_6 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_midambleAllocationMode_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  2 }	/* (0..2) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_midambleConfiguration_constr_7 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_ueSpecificMidamble_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ueSpecificMidamble, midambleShift),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_midambleShift_constraint_5,
		&asn_PER_memb_midambleShift_constr_6,
		0,
		"midambleShift"
		},
};
static const ber_tlv_tag_t asn_DEF_ueSpecificMidamble_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_ueSpecificMidamble_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* midambleShift */
};
static asn_SEQUENCE_specifics_t asn_SPC_ueSpecificMidamble_specs_5 = {
	sizeof(struct ueSpecificMidamble),
	offsetof(struct ueSpecificMidamble, _asn_ctx),
	asn_MAP_ueSpecificMidamble_tag2el_5,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ueSpecificMidamble_5 = {
	"ueSpecificMidamble",
	"ueSpecificMidamble",
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
	asn_DEF_ueSpecificMidamble_tags_5,
	sizeof(asn_DEF_ueSpecificMidamble_tags_5)
		/sizeof(asn_DEF_ueSpecificMidamble_tags_5[0]) - 1, /* 1 */
	asn_DEF_ueSpecificMidamble_tags_5,	/* Same as above */
	sizeof(asn_DEF_ueSpecificMidamble_tags_5)
		/sizeof(asn_DEF_ueSpecificMidamble_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_ueSpecificMidamble_5,
	1,	/* Elements count */
	&asn_SPC_ueSpecificMidamble_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_midambleAllocationMode_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct midambleAllocationMode, choice.defaultMidamble),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"defaultMidamble"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct midambleAllocationMode, choice.commonMidamble),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"commonMidamble"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct midambleAllocationMode, choice.ueSpecificMidamble),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_ueSpecificMidamble_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ueSpecificMidamble"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_midambleAllocationMode_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* defaultMidamble */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* commonMidamble */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ueSpecificMidamble */
};
static asn_CHOICE_specifics_t asn_SPC_midambleAllocationMode_specs_2 = {
	sizeof(struct midambleAllocationMode),
	offsetof(struct midambleAllocationMode, _asn_ctx),
	offsetof(struct midambleAllocationMode, present),
	sizeof(((struct midambleAllocationMode *)0)->present),
	asn_MAP_midambleAllocationMode_tag2el_2,
	3,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_midambleAllocationMode_2 = {
	"midambleAllocationMode",
	"midambleAllocationMode",
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
	&asn_PER_type_midambleAllocationMode_constr_2,
	asn_MBR_midambleAllocationMode_2,
	3,	/* Elements count */
	&asn_SPC_midambleAllocationMode_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MidambleShiftAndBurstType_LCR_r4_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType_LCR_r4, midambleAllocationMode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_midambleAllocationMode_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"midambleAllocationMode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MidambleShiftAndBurstType_LCR_r4, midambleConfiguration),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_midambleConfiguration_constraint_1,
		&asn_PER_memb_midambleConfiguration_constr_7,
		0,
		"midambleConfiguration"
		},
};
static const ber_tlv_tag_t asn_DEF_MidambleShiftAndBurstType_LCR_r4_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MidambleShiftAndBurstType_LCR_r4_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* midambleAllocationMode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* midambleConfiguration */
};
static asn_SEQUENCE_specifics_t asn_SPC_MidambleShiftAndBurstType_LCR_r4_specs_1 = {
	sizeof(struct MidambleShiftAndBurstType_LCR_r4),
	offsetof(struct MidambleShiftAndBurstType_LCR_r4, _asn_ctx),
	asn_MAP_MidambleShiftAndBurstType_LCR_r4_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MidambleShiftAndBurstType_LCR_r4 = {
	"MidambleShiftAndBurstType-LCR-r4",
	"MidambleShiftAndBurstType-LCR-r4",
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
	asn_DEF_MidambleShiftAndBurstType_LCR_r4_tags_1,
	sizeof(asn_DEF_MidambleShiftAndBurstType_LCR_r4_tags_1)
		/sizeof(asn_DEF_MidambleShiftAndBurstType_LCR_r4_tags_1[0]), /* 1 */
	asn_DEF_MidambleShiftAndBurstType_LCR_r4_tags_1,	/* Same as above */
	sizeof(asn_DEF_MidambleShiftAndBurstType_LCR_r4_tags_1)
		/sizeof(asn_DEF_MidambleShiftAndBurstType_LCR_r4_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MidambleShiftAndBurstType_LCR_r4_1,
	2,	/* Elements count */
	&asn_SPC_MidambleShiftAndBurstType_LCR_r4_specs_1	/* Additional specs */
};
