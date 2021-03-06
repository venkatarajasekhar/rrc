/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "UL-DPCH-PowerControlInfo-r5.h"

static asn_per_constraints_t asn_PER_type_tddOption_constr_15 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_ul_OL_PC_Signalling_constr_12 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_UL_DPCH_PowerControlInfo_r5_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_fdd_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, dpcch_PowerOffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DPCCH_PowerOffset,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dpcch-PowerOffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, pc_Preamble),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PC_Preamble,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pc-Preamble"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, sRB_delay),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRB_delay,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sRB-delay"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct fdd, powerControlAlgorithm),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_PowerControlAlgorithm,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"powerControlAlgorithm"
		},
	{ ATF_POINTER, 3, offsetof(struct fdd, deltaACK),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaACK,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deltaACK"
		},
	{ ATF_POINTER, 2, offsetof(struct fdd, deltaNACK),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DeltaNACK,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"deltaNACK"
		},
	{ ATF_POINTER, 1, offsetof(struct fdd, ack_NACK_repetition_factor),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ACK_NACK_repetitionFactor,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ack-NACK-repetition-factor"
		},
};
static const int asn_MAP_fdd_oms_2[] = { 4, 5, 6 };
static const ber_tlv_tag_t asn_DEF_fdd_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_fdd_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dpcch-PowerOffset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pc-Preamble */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* sRB-delay */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* powerControlAlgorithm */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* deltaACK */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* deltaNACK */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ack-NACK-repetition-factor */
};
static asn_SEQUENCE_specifics_t asn_SPC_fdd_specs_2 = {
	sizeof(struct fdd),
	offsetof(struct fdd, _asn_ctx),
	asn_MAP_fdd_tag2el_2,
	7,	/* Count of tags in the map */
	asn_MAP_fdd_oms_2,	/* Optional members */
	3, 0,	/* Root/Additions */
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
	7,	/* Elements count */
	&asn_SPC_fdd_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd384_16[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct tdd384, individualTS_InterferenceList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_IndividualTS_InterferenceList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"individualTS-InterferenceList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct tdd384, dpch_ConstantValue),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ConstantValue,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dpch-ConstantValue"
		},
};
static const ber_tlv_tag_t asn_DEF_tdd384_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd384_tag2el_16[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* individualTS-InterferenceList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* dpch-ConstantValue */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd384_specs_16 = {
	sizeof(struct tdd384),
	offsetof(struct tdd384, _asn_ctx),
	asn_MAP_tdd384_tag2el_16,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd384_16 = {
	"tdd384",
	"tdd384",
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
	asn_DEF_tdd384_tags_16,
	sizeof(asn_DEF_tdd384_tags_16)
		/sizeof(asn_DEF_tdd384_tags_16[0]) - 1, /* 1 */
	asn_DEF_tdd384_tags_16,	/* Same as above */
	sizeof(asn_DEF_tdd384_tags_16)
		/sizeof(asn_DEF_tdd384_tags_16[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd384_16,
	2,	/* Elements count */
	&asn_SPC_tdd384_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd128_19[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct tdd128, tpc_StepSize),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TPC_StepSizeTDD,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tpc-StepSize"
		},
};
static const ber_tlv_tag_t asn_DEF_tdd128_tags_19[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd128_tag2el_19[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* tpc-StepSize */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd128_specs_19 = {
	sizeof(struct tdd128),
	offsetof(struct tdd128, _asn_ctx),
	asn_MAP_tdd128_tag2el_19,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd128_19 = {
	"tdd128",
	"tdd128",
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
	asn_DEF_tdd128_tags_19,
	sizeof(asn_DEF_tdd128_tags_19)
		/sizeof(asn_DEF_tdd128_tags_19[0]) - 1, /* 1 */
	asn_DEF_tdd128_tags_19,	/* Same as above */
	sizeof(asn_DEF_tdd128_tags_19)
		/sizeof(asn_DEF_tdd128_tags_19[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd128_19,
	1,	/* Elements count */
	&asn_SPC_tdd128_specs_19	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tddOption_15[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct tddOption, choice.tdd384),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_tdd384_16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd384"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct tddOption, choice.tdd128),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd128_19,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd128"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_tddOption_tag2el_15[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tdd384 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd128 */
};
static asn_CHOICE_specifics_t asn_SPC_tddOption_specs_15 = {
	sizeof(struct tddOption),
	offsetof(struct tddOption, _asn_ctx),
	offsetof(struct tddOption, present),
	sizeof(((struct tddOption *)0)->present),
	asn_MAP_tddOption_tag2el_15,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tddOption_15 = {
	"tddOption",
	"tddOption",
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
	&asn_PER_type_tddOption_constr_15,
	asn_MBR_tddOption_15,
	2,	/* Elements count */
	&asn_SPC_tddOption_specs_15	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_individuallySignalled_14[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct individuallySignalled, tddOption),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tddOption_15,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tddOption"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct individuallySignalled, primaryCCPCH_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PrimaryCCPCH_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"primaryCCPCH-TX-Power"
		},
};
static const ber_tlv_tag_t asn_DEF_individuallySignalled_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_individuallySignalled_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tddOption */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* primaryCCPCH-TX-Power */
};
static asn_SEQUENCE_specifics_t asn_SPC_individuallySignalled_specs_14 = {
	sizeof(struct individuallySignalled),
	offsetof(struct individuallySignalled, _asn_ctx),
	asn_MAP_individuallySignalled_tag2el_14,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_individuallySignalled_14 = {
	"individuallySignalled",
	"individuallySignalled",
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
	asn_DEF_individuallySignalled_tags_14,
	sizeof(asn_DEF_individuallySignalled_tags_14)
		/sizeof(asn_DEF_individuallySignalled_tags_14[0]) - 1, /* 1 */
	asn_DEF_individuallySignalled_tags_14,	/* Same as above */
	sizeof(asn_DEF_individuallySignalled_tags_14)
		/sizeof(asn_DEF_individuallySignalled_tags_14[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_individuallySignalled_14,
	2,	/* Elements count */
	&asn_SPC_individuallySignalled_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_ul_OL_PC_Signalling_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct ul_OL_PC_Signalling, choice.broadcast_UL_OL_PC_info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"broadcast-UL-OL-PC-info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct ul_OL_PC_Signalling, choice.individuallySignalled),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_individuallySignalled_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"individuallySignalled"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_ul_OL_PC_Signalling_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* broadcast-UL-OL-PC-info */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* individuallySignalled */
};
static asn_CHOICE_specifics_t asn_SPC_ul_OL_PC_Signalling_specs_12 = {
	sizeof(struct ul_OL_PC_Signalling),
	offsetof(struct ul_OL_PC_Signalling, _asn_ctx),
	offsetof(struct ul_OL_PC_Signalling, present),
	sizeof(((struct ul_OL_PC_Signalling *)0)->present),
	asn_MAP_ul_OL_PC_Signalling_tag2el_12,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_ul_OL_PC_Signalling_12 = {
	"ul-OL-PC-Signalling",
	"ul-OL-PC-Signalling",
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
	&asn_PER_type_ul_OL_PC_Signalling_constr_12,
	asn_MBR_ul_OL_PC_Signalling_12,
	2,	/* Elements count */
	&asn_SPC_ul_OL_PC_Signalling_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_tdd_10[] = {
	{ ATF_POINTER, 1, offsetof(struct tdd, ul_TargetSIR),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_TargetSIR,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-TargetSIR"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct tdd, ul_OL_PC_Signalling),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_ul_OL_PC_Signalling_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-OL-PC-Signalling"
		},
};
static const int asn_MAP_tdd_oms_10[] = { 0 };
static const ber_tlv_tag_t asn_DEF_tdd_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_tdd_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ul-TargetSIR */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* ul-OL-PC-Signalling */
};
static asn_SEQUENCE_specifics_t asn_SPC_tdd_specs_10 = {
	sizeof(struct tdd),
	offsetof(struct tdd, _asn_ctx),
	asn_MAP_tdd_tag2el_10,
	2,	/* Count of tags in the map */
	asn_MAP_tdd_oms_10,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tdd_10 = {
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
	asn_DEF_tdd_tags_10,
	sizeof(asn_DEF_tdd_tags_10)
		/sizeof(asn_DEF_tdd_tags_10[0]) - 1, /* 1 */
	asn_DEF_tdd_tags_10,	/* Same as above */
	sizeof(asn_DEF_tdd_tags_10)
		/sizeof(asn_DEF_tdd_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_tdd_10,
	2,	/* Elements count */
	&asn_SPC_tdd_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_UL_DPCH_PowerControlInfo_r5_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo_r5, choice.fdd),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_fdd_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fdd"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct UL_DPCH_PowerControlInfo_r5, choice.tdd),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_tdd_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tdd"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_UL_DPCH_PowerControlInfo_r5_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fdd */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* tdd */
};
static asn_CHOICE_specifics_t asn_SPC_UL_DPCH_PowerControlInfo_r5_specs_1 = {
	sizeof(struct UL_DPCH_PowerControlInfo_r5),
	offsetof(struct UL_DPCH_PowerControlInfo_r5, _asn_ctx),
	offsetof(struct UL_DPCH_PowerControlInfo_r5, present),
	sizeof(((struct UL_DPCH_PowerControlInfo_r5 *)0)->present),
	asn_MAP_UL_DPCH_PowerControlInfo_r5_tag2el_1,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_UL_DPCH_PowerControlInfo_r5 = {
	"UL-DPCH-PowerControlInfo-r5",
	"UL-DPCH-PowerControlInfo-r5",
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
	&asn_PER_type_UL_DPCH_PowerControlInfo_r5_constr_1,
	asn_MBR_UL_DPCH_PowerControlInfo_r5_1,
	2,	/* Elements count */
	&asn_SPC_UL_DPCH_PowerControlInfo_r5_specs_1	/* Additional specs */
};

