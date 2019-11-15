/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "F1AP-IEs"
 * 	found in "F1.asn1"
 * 	`asn1c -D ./out -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-example`
 */

#ifndef	_Reestablishment_Indication_H_
#define	_Reestablishment_Indication_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Reestablishment_Indication {
	Reestablishment_Indication_reestablished	= 0
	/*
	 * Enumeration is extensible
	 */
} e_Reestablishment_Indication;

/* Reestablishment-Indication */
typedef long	 Reestablishment_Indication_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Reestablishment_Indication_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Reestablishment_Indication;
extern const asn_INTEGER_specifics_t asn_SPC_Reestablishment_Indication_specs_1;
asn_struct_free_f Reestablishment_Indication_free;
asn_struct_print_f Reestablishment_Indication_print;
asn_constr_check_f Reestablishment_Indication_constraint;
ber_type_decoder_f Reestablishment_Indication_decode_ber;
der_type_encoder_f Reestablishment_Indication_encode_der;
xer_type_decoder_f Reestablishment_Indication_decode_xer;
xer_type_encoder_f Reestablishment_Indication_encode_xer;
oer_type_decoder_f Reestablishment_Indication_decode_oer;
oer_type_encoder_f Reestablishment_Indication_encode_oer;
per_type_decoder_f Reestablishment_Indication_decode_uper;
per_type_encoder_f Reestablishment_Indication_encode_uper;
per_type_decoder_f Reestablishment_Indication_decode_aper;
per_type_encoder_f Reestablishment_Indication_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _Reestablishment_Indication_H_ */
#include <asn_internal.h>