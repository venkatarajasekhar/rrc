/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "DL-TransportChannelType-r5.h"

static asn_per_constraints_t asn_PER_type_DL_TransportChannelType_r5_constr_1 GCC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_DL_TransportChannelType_r5_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DL_TransportChannelType_r5, choice.dch),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportChannelIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dch"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_TransportChannelType_r5, choice.fach),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NULL,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fach"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_TransportChannelType_r5, choice.dsch),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportChannelIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dsch"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_TransportChannelType_r5, choice.dch_and_dsch),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_TransportChannelIdentityDCHandDSCH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dch-and-dsch"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_TransportChannelType_r5, choice.hsdsch),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_d_FlowIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"hsdsch"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct DL_TransportChannelType_r5, choice.dch_and_hsdsch),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MAC_d_FlowIdentityDCHandHSDSCH,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dch-and-hsdsch"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_DL_TransportChannelType_r5_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* dch */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* fach */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* dsch */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* dch-and-dsch */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* hsdsch */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* dch-and-hsdsch */
};
static asn_CHOICE_specifics_t asn_SPC_DL_TransportChannelType_r5_specs_1 = {
	sizeof(struct DL_TransportChannelType_r5),
	offsetof(struct DL_TransportChannelType_r5, _asn_ctx),
	offsetof(struct DL_TransportChannelType_r5, present),
	sizeof(((struct DL_TransportChannelType_r5 *)0)->present),
	asn_MAP_DL_TransportChannelType_r5_tag2el_1,
	6,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_DL_TransportChannelType_r5 = {
	"DL-TransportChannelType-r5",
	"DL-TransportChannelType-r5",
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
	&asn_PER_type_DL_TransportChannelType_r5_constr_1,
	asn_MBR_DL_TransportChannelType_r5_1,
	6,	/* Elements count */
	&asn_SPC_DL_TransportChannelType_r5_specs_1	/* Additional specs */
};
