/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "MBMS-PreferredFrequencyInfo-r6.h"

static int
memb_mbms_HCSoffset_constraint_3(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 7)) {
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
memb_mbmsPreferredFrequency_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_mbms_HCSoffset_constr_5 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_layerConvergenceInformation_constr_3 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_mbmsPreferredFrequency_constr_2 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_layerConvergenceInformation_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct layerConvergenceInformation, choice.mbms_Qoffset),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_Qoffset,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mbms-Qoffset"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct layerConvergenceInformation, choice.mbms_HCSoffset),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_mbms_HCSoffset_constraint_3,
		&asn_PER_memb_mbms_HCSoffset_constr_5,
		0,
		"mbms-HCSoffset"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_layerConvergenceInformation_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbms-Qoffset */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* mbms-HCSoffset */
};
static asn_CHOICE_specifics_t asn_SPC_layerConvergenceInformation_specs_3 = {
	sizeof(struct layerConvergenceInformation),
	offsetof(struct layerConvergenceInformation, _asn_ctx),
	offsetof(struct layerConvergenceInformation, present),
	sizeof(((struct layerConvergenceInformation *)0)->present),
	asn_MAP_layerConvergenceInformation_tag2el_3,
	2,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_layerConvergenceInformation_3 = {
	"layerConvergenceInformation",
	"layerConvergenceInformation",
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
	&asn_PER_type_layerConvergenceInformation_constr_3,
	asn_MBR_layerConvergenceInformation_3,
	2,	/* Elements count */
	&asn_SPC_layerConvergenceInformation_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_MBMS_PreferredFrequencyInfo_r6_1[] = {
	{ ATF_POINTER, 1, offsetof(struct MBMS_PreferredFrequencyInfo_r6, mbmsPreferredFrequency),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		memb_mbmsPreferredFrequency_constraint_1,
		&asn_PER_memb_mbmsPreferredFrequency_constr_2,
		0,
		"mbmsPreferredFrequency"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct MBMS_PreferredFrequencyInfo_r6, layerConvergenceInformation),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_layerConvergenceInformation_3,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"layerConvergenceInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct MBMS_PreferredFrequencyInfo_r6, mbms_PL_ServiceRestrictInfo),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MBMS_PL_ServiceRestrictInfo_r6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"mbms-PL-ServiceRestrictInfo"
		},
};
static const int asn_MAP_MBMS_PreferredFrequencyInfo_r6_oms_1[] = { 0, 2 };
static const ber_tlv_tag_t asn_DEF_MBMS_PreferredFrequencyInfo_r6_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_MBMS_PreferredFrequencyInfo_r6_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* mbmsPreferredFrequency */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* layerConvergenceInformation */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* mbms-PL-ServiceRestrictInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_MBMS_PreferredFrequencyInfo_r6_specs_1 = {
	sizeof(struct MBMS_PreferredFrequencyInfo_r6),
	offsetof(struct MBMS_PreferredFrequencyInfo_r6, _asn_ctx),
	asn_MAP_MBMS_PreferredFrequencyInfo_r6_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_MBMS_PreferredFrequencyInfo_r6_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_MBMS_PreferredFrequencyInfo_r6 = {
	"MBMS-PreferredFrequencyInfo-r6",
	"MBMS-PreferredFrequencyInfo-r6",
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
	asn_DEF_MBMS_PreferredFrequencyInfo_r6_tags_1,
	sizeof(asn_DEF_MBMS_PreferredFrequencyInfo_r6_tags_1)
		/sizeof(asn_DEF_MBMS_PreferredFrequencyInfo_r6_tags_1[0]), /* 1 */
	asn_DEF_MBMS_PreferredFrequencyInfo_r6_tags_1,	/* Same as above */
	sizeof(asn_DEF_MBMS_PreferredFrequencyInfo_r6_tags_1)
		/sizeof(asn_DEF_MBMS_PreferredFrequencyInfo_r6_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_MBMS_PreferredFrequencyInfo_r6_1,
	3,	/* Elements count */
	&asn_SPC_MBMS_PreferredFrequencyInfo_r6_specs_1	/* Additional specs */
};
