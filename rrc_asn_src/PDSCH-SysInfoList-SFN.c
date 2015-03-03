/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "PDSCH-SysInfoList-SFN.h"

static asn_per_constraints_t asn_PER_type_PDSCH_SysInfoList_SFN_constr_1 GCC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_Member_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct Member, pdsch_SysInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_PDSCH_SysInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"pdsch-SysInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct Member, sfn_TimeInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SFN_TimeInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sfn-TimeInfo"
		},
};
static const int asn_MAP_Member_oms_2[] = { 1 };
static const ber_tlv_tag_t asn_DEF_Member_tags_2[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_Member_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* pdsch-SysInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* sfn-TimeInfo */
};
static asn_SEQUENCE_specifics_t asn_SPC_Member_specs_2 = {
	sizeof(struct Member),
	offsetof(struct Member, _asn_ctx),
	asn_MAP_Member_tag2el_2,
	2,	/* Count of tags in the map */
	asn_MAP_Member_oms_2,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_Member_2 = {
	"SEQUENCE",
	"SEQUENCE",
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
	asn_DEF_Member_tags_2,
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	asn_DEF_Member_tags_2,	/* Same as above */
	sizeof(asn_DEF_Member_tags_2)
		/sizeof(asn_DEF_Member_tags_2[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_Member_2,
	2,	/* Elements count */
	&asn_SPC_Member_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_PDSCH_SysInfoList_SFN_1[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_Member_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		""
		},
};
static const ber_tlv_tag_t asn_DEF_PDSCH_SysInfoList_SFN_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_PDSCH_SysInfoList_SFN_specs_1 = {
	sizeof(struct PDSCH_SysInfoList_SFN),
	offsetof(struct PDSCH_SysInfoList_SFN, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
asn_TYPE_descriptor_t asn_DEF_PDSCH_SysInfoList_SFN = {
	"PDSCH-SysInfoList-SFN",
	"PDSCH-SysInfoList-SFN",
	SEQUENCE_OF_free,
	SEQUENCE_OF_print,
	SEQUENCE_OF_constraint,
	SEQUENCE_OF_decode_ber,
	SEQUENCE_OF_encode_der,
	SEQUENCE_OF_decode_xer,
	SEQUENCE_OF_encode_xer,
	SEQUENCE_OF_decode_uper,
	SEQUENCE_OF_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_PDSCH_SysInfoList_SFN_tags_1,
	sizeof(asn_DEF_PDSCH_SysInfoList_SFN_tags_1)
		/sizeof(asn_DEF_PDSCH_SysInfoList_SFN_tags_1[0]), /* 1 */
	asn_DEF_PDSCH_SysInfoList_SFN_tags_1,	/* Same as above */
	sizeof(asn_DEF_PDSCH_SysInfoList_SFN_tags_1)
		/sizeof(asn_DEF_PDSCH_SysInfoList_SFN_tags_1[0]), /* 1 */
	&asn_PER_type_PDSCH_SysInfoList_SFN_constr_1,
	asn_MBR_PDSCH_SysInfoList_SFN_1,
	1,	/* Single element */
	&asn_SPC_PDSCH_SysInfoList_SFN_specs_1	/* Additional specs */
};
