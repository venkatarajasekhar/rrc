/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_TX_DiversityMode_H_
#define	_TX_DiversityMode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum TX_DiversityMode {
	TX_DiversityMode_noDiversity	= 0,
	TX_DiversityMode_sttd	= 1,
	TX_DiversityMode_closedLoopMode1	= 2,
	TX_DiversityMode_dummy	= 3
} e_TX_DiversityMode;

/* TX-DiversityMode */
typedef long	 TX_DiversityMode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TX_DiversityMode;
asn_struct_free_f TX_DiversityMode_free;
asn_struct_print_f TX_DiversityMode_print;
asn_constr_check_f TX_DiversityMode_constraint;
ber_type_decoder_f TX_DiversityMode_decode_ber;
der_type_encoder_f TX_DiversityMode_encode_der;
xer_type_decoder_f TX_DiversityMode_decode_xer;
xer_type_encoder_f TX_DiversityMode_encode_xer;
per_type_decoder_f TX_DiversityMode_decode_uper;
per_type_encoder_f TX_DiversityMode_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _TX_DiversityMode_H_ */
#include <asn_internal.h>