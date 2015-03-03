/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#include "SysInfoType1.h"

static const ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_8 = {
	sizeof(struct nonCriticalExtensions),
	offsetof(struct nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_8 = {
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
	asn_DEF_nonCriticalExtensions_tags_8,
	sizeof(asn_DEF_nonCriticalExtensions_tags_8)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_8[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_8,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_8)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v3a0NonCriticalExtensions_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct v3a0NonCriticalExtensions, sysInfoType1_v3a0ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType1_v3a0ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sysInfoType1-v3a0ext"
		},
	{ ATF_POINTER, 1, offsetof(struct v3a0NonCriticalExtensions, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtensions"
		},
};
static const int asn_MAP_v3a0NonCriticalExtensions_oms_6[] = { 1 };
static const ber_tlv_tag_t asn_DEF_v3a0NonCriticalExtensions_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_v3a0NonCriticalExtensions_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType1-v3a0ext */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_v3a0NonCriticalExtensions_specs_6 = {
	sizeof(struct v3a0NonCriticalExtensions),
	offsetof(struct v3a0NonCriticalExtensions, _asn_ctx),
	asn_MAP_v3a0NonCriticalExtensions_tag2el_6,
	2,	/* Count of tags in the map */
	asn_MAP_v3a0NonCriticalExtensions_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v3a0NonCriticalExtensions_6 = {
	"v3a0NonCriticalExtensions",
	"v3a0NonCriticalExtensions",
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
	asn_DEF_v3a0NonCriticalExtensions_tags_6,
	sizeof(asn_DEF_v3a0NonCriticalExtensions_tags_6)
		/sizeof(asn_DEF_v3a0NonCriticalExtensions_tags_6[0]) - 1, /* 1 */
	asn_DEF_v3a0NonCriticalExtensions_tags_6,	/* Same as above */
	sizeof(asn_DEF_v3a0NonCriticalExtensions_tags_6)
		/sizeof(asn_DEF_v3a0NonCriticalExtensions_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v3a0NonCriticalExtensions_6,
	2,	/* Elements count */
	&asn_SPC_v3a0NonCriticalExtensions_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SysInfoType1_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType1, cn_CommonGSM_MAP_NAS_SysInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NAS_SystemInformationGSM_MAP,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-CommonGSM-MAP-NAS-SysInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType1, cn_DomainSysInfoList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CN_DomainSysInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"cn-DomainSysInfoList"
		},
	{ ATF_POINTER, 3, offsetof(struct SysInfoType1, ue_ConnTimersAndConstants),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_ConnTimersAndConstants,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-ConnTimersAndConstants"
		},
	{ ATF_POINTER, 2, offsetof(struct SysInfoType1, ue_IdleTimersAndConstants),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UE_IdleTimersAndConstants,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ue-IdleTimersAndConstants"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType1, v3a0NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		0,
		&asn_DEF_v3a0NonCriticalExtensions_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v3a0NonCriticalExtensions"
		},
};
static const int asn_MAP_SysInfoType1_oms_1[] = { 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_SysInfoType1_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_SysInfoType1_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* cn-CommonGSM-MAP-NAS-SysInfo */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cn-DomainSysInfoList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ue-ConnTimersAndConstants */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ue-IdleTimersAndConstants */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* v3a0NonCriticalExtensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_SysInfoType1_specs_1 = {
	sizeof(struct SysInfoType1),
	offsetof(struct SysInfoType1, _asn_ctx),
	asn_MAP_SysInfoType1_tag2el_1,
	5,	/* Count of tags in the map */
	asn_MAP_SysInfoType1_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType1 = {
	"SysInfoType1",
	"SysInfoType1",
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
	asn_DEF_SysInfoType1_tags_1,
	sizeof(asn_DEF_SysInfoType1_tags_1)
		/sizeof(asn_DEF_SysInfoType1_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType1_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType1_tags_1)
		/sizeof(asn_DEF_SysInfoType1_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SysInfoType1_1,
	5,	/* Elements count */
	&asn_SPC_SysInfoType1_specs_1	/* Additional specs */
};
