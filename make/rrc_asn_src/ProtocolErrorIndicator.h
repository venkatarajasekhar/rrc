/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "rrc.asn1"
 */

#ifndef	_ProtocolErrorIndicator_H_
#define	_ProtocolErrorIndicator_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ProtocolErrorIndicator {
	ProtocolErrorIndicator_noError	= 0,
	ProtocolErrorIndicator_errorOccurred	= 1
} e_ProtocolErrorIndicator;

/* ProtocolErrorIndicator */
typedef long	 ProtocolErrorIndicator_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ProtocolErrorIndicator;
asn_struct_free_f ProtocolErrorIndicator_free;
asn_struct_print_f ProtocolErrorIndicator_print;
asn_constr_check_f ProtocolErrorIndicator_constraint;
ber_type_decoder_f ProtocolErrorIndicator_decode_ber;
der_type_encoder_f ProtocolErrorIndicator_encode_der;
xer_type_decoder_f ProtocolErrorIndicator_decode_xer;
xer_type_encoder_f ProtocolErrorIndicator_encode_xer;
per_type_decoder_f ProtocolErrorIndicator_decode_uper;
per_type_encoder_f ProtocolErrorIndicator_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _ProtocolErrorIndicator_H_ */
#include <asn_internal.h>
