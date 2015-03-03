/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "SecondaryCPICH-Info.h"

static asn_TYPE_member_t asn_MBR_SecondaryCPICH_Info_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SecondaryCPICH_Info, secondaryDL_ScramblingCode),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SecondaryScramblingCode,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"secondaryDL-ScramblingCode"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SecondaryCPICH_Info, channelisationCode),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ChannelisationCode256,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"channelisationCode"
		},
};
static const int asn_MAP_SecondaryCPICH_Info_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_SecondaryCPICH_Info_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SecondaryCPICH_Info_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* secondaryDL-ScramblingCode */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* channelisationCode */
};
static asn_SEQUENCE_specifics_t asn_SPC_SecondaryCPICH_Info_specs_1 = {
	sizeof(struct SecondaryCPICH_Info),
	offsetof(struct SecondaryCPICH_Info, _asn_ctx),
	asn_MAP_SecondaryCPICH_Info_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_SecondaryCPICH_Info_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SecondaryCPICH_Info = {
	"SecondaryCPICH-Info",
	"SecondaryCPICH-Info",
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
	asn_DEF_SecondaryCPICH_Info_tags_1,
	sizeof(asn_DEF_SecondaryCPICH_Info_tags_1)
		/sizeof(asn_DEF_SecondaryCPICH_Info_tags_1[0]), /* 1 */
	asn_DEF_SecondaryCPICH_Info_tags_1,	/* Same as above */
	sizeof(asn_DEF_SecondaryCPICH_Info_tags_1)
		/sizeof(asn_DEF_SecondaryCPICH_Info_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SecondaryCPICH_Info_1,
	2,	/* Elements count */
	&asn_SPC_SecondaryCPICH_Info_specs_1	/* Additional specs */
};
