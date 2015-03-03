/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "CN-DomainInformationFull.h"

static asn_TYPE_member_t asn_MBR_CN_DomainInformationFull_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CN_DomainInformationFull, cn_DomainIdentity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_DomainIdentity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-DomainIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CN_DomainInformationFull, cn_DomainSpecificNAS_Info),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NAS_SystemInformationGSM_MAP,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-DomainSpecificNAS-Info"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CN_DomainInformationFull, cn_DRX_CycleLengthCoeff),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_DRX_CycleLengthCoefficient,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-DRX-CycleLengthCoeff"
		},
};
static const ber_tlv_tag_t asn_DEF_CN_DomainInformationFull_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CN_DomainInformationFull_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cn-DomainIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cn-DomainSpecificNAS-Info */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* cn-DRX-CycleLengthCoeff */
};
static asn_SEQUENCE_specifics_t asn_SPC_CN_DomainInformationFull_specs_1 = {
	sizeof(struct CN_DomainInformationFull),
	offsetof(struct CN_DomainInformationFull, _asn_ctx),
	asn_MAP_CN_DomainInformationFull_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CN_DomainInformationFull = {
	"CN-DomainInformationFull",
	"CN-DomainInformationFull",
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
	asn_DEF_CN_DomainInformationFull_tags_1,
	sizeof(asn_DEF_CN_DomainInformationFull_tags_1)
		/sizeof(asn_DEF_CN_DomainInformationFull_tags_1[0]), /* 1 */
	asn_DEF_CN_DomainInformationFull_tags_1,	/* Same as above */
	sizeof(asn_DEF_CN_DomainInformationFull_tags_1)
		/sizeof(asn_DEF_CN_DomainInformationFull_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CN_DomainInformationFull_1,
	3,	/* Elements count */
	&asn_SPC_CN_DomainInformationFull_specs_1	/* Additional specs */
};
