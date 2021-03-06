/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "UL-DPCH-Info.h"

static asn_per_constraints_t asn_PER_type_modeSpecificInfo_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static int asn_DFL_7_set_1(int set_value, void **sptr) {
	NumberOfDPDCH_t *st = *sptr;
	
	if(!st) {
		if(!set_value) return -1;	/* Not a default value */
		st = (*sptr = CALLOC(1, sizeof(*st)));
		if(!st) return -1;
	}
	
	if(set_value) {
		/* Install default value 1 */
		*st = 1;
		return 0;
	} else {
		/* Test default value 1 */
		return (*st == 1);
	}
}
static asn_TYPE_member_t asn_MBR_fdd_4[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, scramblingCodeType),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ScramblingCodeType,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"scramblingCodeType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, scramblingCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_ScramblingCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"scramblingCode"
		},
	{ ATF_POINTER, 1, offsetof(struct fdd, numberOfDPDCH),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NumberOfDPDCH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		asn_DFL_7_set_1,	/* DEFAULT 1 */
		"numberOfDPDCH"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, spreadingFactor),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpreadingFactor,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"spreadingFactor"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, tfci_Existence),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tfci-Existence"
		},
	{ ATF_POINTER, 1, offsetof(struct fdd, numberOfFBI_Bits),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NumberOfFBI_Bits,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"numberOfFBI-Bits"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, puncturingLimit),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PuncturingLimit,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"puncturingLimit"
		},
};
static const int asn_MAP_fdd_oms_4[] = { 2, 5 };
static const ber_tlv_tag_t asn_DEF_fdd_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* scramblingCodeType */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* scramblingCode */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* numberOfDPDCH */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* spreadingFactor */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* tfci-Existence */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* numberOfFBI-Bits */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* puncturingLimit */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_4 = {
	sizeof(struct fdd),
	offsetof(struct fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_4,
	7,	/* Count of tags in the map */
	asn_MAP_fdd_oms_4,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_fdd_4 = {
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
	asn_DEF_fdd_tags_4,
	sizeof(asn_DEF_fdd_tags_4)
		/sizeof(asn_DEF_fdd_tags_4[0]) - 1, /* 1 */
	asn_DEF_fdd_tags_4,	/* Same as above */
	sizeof(asn_DEF_fdd_tags_4)
		/sizeof(asn_DEF_fdd_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_fdd_4,
	7,	/* Elements count */
	&asn_SPC_fdd_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_12[] = {
	{ ATF_POINTER, 3, offsetof(struct tdd, ul_TimingAdvance),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UL_TimingAdvanceControl,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-TimingAdvance"
		},
	{ ATF_POINTER, 2, offsetof(struct tdd, ul_CCTrCHList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CCTrCHList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-CCTrCHList"
		},
	{ ATF_POINTER, 1, offsetof(struct tdd, ul_CCTrCHListToRemove),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CCTrCHListToRemove,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-CCTrCHListToRemove"
		},
};
static const int asn_MAP_tdd_oms_12[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_tdd_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-TimingAdvance */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ul-CCTrCHList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ul-CCTrCHListToRemove */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_12 = {
	sizeof(struct tdd),
	offsetof(struct tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_12,
	3,	/* Count of tags in the map */
	asn_MAP_tdd_oms_12,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_12 = {
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
	asn_DEF_tdd_tags_12,
	sizeof(asn_DEF_tdd_tags_12)
		/sizeof(asn_DEF_tdd_tags_12[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_12,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_12)
		/sizeof(asn_DEF_tdd_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd_12,
	3,	/* Elements count */
	&asn_SPC_tdd_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_modeSpecificInfo_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct modeSpecificInfo, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct modeSpecificInfo, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_modeSpecificInfo_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
static asn_CHOICE_specifics_t asn_SPC_modeSpecificInfo_specs_3 = {
	sizeof(struct modeSpecificInfo),
	offsetof(struct modeSpecificInfo, _asn_ctx),
	offsetof(struct modeSpecificInfo, present),
	sizeof(((struct modeSpecificInfo *)0)->present),
	asn_MAP_modeSpecificInfo_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_modeSpecificInfo_3 = {
	"modeSpecificInfo",
	"modeSpecificInfo",
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
	&asn_PER_type_modeSpecificInfo_constr_3,
	asn_MBR_modeSpecificInfo_3,
	2,	/* Elements count */
	&asn_SPC_modeSpecificInfo_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UL_DPCH_Info_1[] = {
	{ ATF_POINTER, 1, offsetof(struct UL_DPCH_Info, ul_DPCH_PowerControlInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UL_DPCH_PowerControlInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-DPCH-PowerControlInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_Info, modeSpecificInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_modeSpecificInfo_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"modeSpecificInfo"
		},
};
static const int asn_MAP_UL_DPCH_Info_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_UL_DPCH_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UL_DPCH_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-DPCH-PowerControlInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* modeSpecificInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_UL_DPCH_Info_specs_1 = {
	sizeof(struct UL_DPCH_Info),
	offsetof(struct UL_DPCH_Info, _asn_ctx),
	asn_MAP_UL_DPCH_Info_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UL_DPCH_Info_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_UL_DPCH_Info = {
	"UL-DPCH-Info",
	"UL-DPCH-Info",
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
	asn_DEF_UL_DPCH_Info_tags_1,
	sizeof(asn_DEF_UL_DPCH_Info_tags_1)
		/sizeof(asn_DEF_UL_DPCH_Info_tags_1[0]), /* 1 */
	asn_DEF_UL_DPCH_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_UL_DPCH_Info_tags_1)
		/sizeof(asn_DEF_UL_DPCH_Info_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_UL_DPCH_Info_1,
	2,	/* Elements count */
	&asn_SPC_UL_DPCH_Info_specs_1	/* Additional specs */
};

