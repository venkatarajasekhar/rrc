/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_AccessServiceClass_TDD_r7_H_
#define	_AccessServiceClass_TDD_r7_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include <NULL.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum channelisationCodeIndices {
	channelisationCodeIndices_chCodeIndex15	= 0,
	channelisationCodeIndices_chCodeIndex14	= 1,
	channelisationCodeIndices_chCodeIndex13	= 2,
	channelisationCodeIndices_chCodeIndex12	= 3,
	channelisationCodeIndices_chCodeIndex11	= 4,
	channelisationCodeIndices_chCodeIndex10	= 5,
	channelisationCodeIndices_chCodeIndex9	= 6,
	channelisationCodeIndices_chCodeIndex8	= 7,
	channelisationCodeIndices_chCodeIndex7	= 8,
	channelisationCodeIndices_chCodeIndex6	= 9,
	channelisationCodeIndices_chCodeIndex5	= 10,
	channelisationCodeIndices_chCodeIndex4	= 11,
	channelisationCodeIndices_chCodeIndex3	= 12,
	channelisationCodeIndices_chCodeIndex2	= 13,
	channelisationCodeIndices_chCodeIndex1	= 14,
	channelisationCodeIndices_chCodeIndex0	= 15
} e_channelisationCodeIndices;
typedef enum subchannelSize_PR {
	subchannelSize_PR_NOTHING,	/* No components present */
	subchannelSize_PR_size1,
	subchannelSize_PR_size2,
	subchannelSize_PR_size4,
	subchannelSize_PR_size8,
	subchannelSize_PR_size16
} subchannelSize_PR;
typedef enum subchannels {
	subchannels_subch0	= 0,
	subchannels_subch1	= 1
} e_subchannels;
typedef enum subchannels {
	subchannels_subCh3	= 0,
	subchannels_subCh2	= 1,
	subchannels_subCh1	= 2,
	subchannels_subCh0	= 3
} e_subchannels;
typedef enum subchannels {
	subchannels_subCh7	= 0,
	subchannels_subCh6	= 1,
	subchannels_subCh5	= 2,
	subchannels_subCh4	= 3,
	subchannels_subCh3	= 4,
	subchannels_subCh2	= 5,
	subchannels_subCh1	= 6,
	subchannels_subCh0	= 7
} e_subchannels;
typedef enum subchannels {
	subchannels_subCh15	= 0,
	subchannels_subCh14	= 1,
	subchannels_subCh13	= 2,
	subchannels_subCh12	= 3,
	subchannels_subCh11	= 4,
	subchannels_subCh10	= 5,
	subchannels_subCh9	= 6,
	subchannels_subCh8	= 7,
	subchannels_subCh7	= 8,
	subchannels_subCh6	= 9,
	subchannels_subCh5	= 10,
	subchannels_subCh4	= 11,
	subchannels_subCh3	= 12,
	subchannels_subCh2	= 13,
	subchannels_subCh1	= 14,
	subchannels_subCh0	= 15
} e_subchannels;

/* AccessServiceClass-TDD-r7 */
typedef struct AccessServiceClass_TDD_r7 {
	BIT_STRING_t	*channelisationCodeIndices	/* OPTIONAL */;
	struct subchannelSize {
		subchannelSize_PR present;
		union AccessServiceClass_TDD_r7__subchannelSize_u {
			NULL_t	 size1;
			struct size2 {
				long	*subchannels	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} size2;
			struct size4 {
				BIT_STRING_t	*subchannels	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} size4;
			struct size8 {
				BIT_STRING_t	*subchannels	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} size8;
			struct size16 {
				BIT_STRING_t	*subchannels	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} size16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} subchannelSize;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} AccessServiceClass_TDD_r7_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_subchannels_22;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_AccessServiceClass_TDD_r7;

#ifdef __cplusplus
}
#endif

#endif	/* _AccessServiceClass_TDD_r7_H_ */
#include <asn_internal.h>