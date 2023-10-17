// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// Cfits_create_header
void Cfits_create_header(Rcpp::String filename, int create_ext, int create_file);
RcppExport SEXP _Rfits_Cfits_create_header(SEXP filenameSEXP, SEXP create_extSEXP, SEXP create_fileSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type create_ext(create_extSEXP);
    Rcpp::traits::input_parameter< int >::type create_file(create_fileSEXP);
    Cfits_create_header(filename, create_ext, create_file);
    return R_NilValue;
END_RCPP
}
// Cfits_read_col
SEXP Cfits_read_col(Rcpp::String filename, int colref, int ext, long nrow);
RcppExport SEXP _Rfits_Cfits_read_col(SEXP filenameSEXP, SEXP colrefSEXP, SEXP extSEXP, SEXP nrowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type colref(colrefSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    Rcpp::traits::input_parameter< long >::type nrow(nrowSEXP);
    rcpp_result_gen = Rcpp::wrap(Cfits_read_col(filename, colref, ext, nrow));
    return rcpp_result_gen;
END_RCPP
}
// Cfits_read_nrow
int Cfits_read_nrow(Rcpp::String filename, int ext);
RcppExport SEXP _Rfits_Cfits_read_nrow(SEXP filenameSEXP, SEXP extSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    rcpp_result_gen = Rcpp::wrap(Cfits_read_nrow(filename, ext));
    return rcpp_result_gen;
END_RCPP
}
// Cfits_read_nhdu
int Cfits_read_nhdu(Rcpp::String filename);
RcppExport SEXP _Rfits_Cfits_read_nhdu(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(Cfits_read_nhdu(filename));
    return rcpp_result_gen;
END_RCPP
}
// Cfits_read_ncol
int Cfits_read_ncol(Rcpp::String filename, int ext);
RcppExport SEXP _Rfits_Cfits_read_ncol(SEXP filenameSEXP, SEXP extSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    rcpp_result_gen = Rcpp::wrap(Cfits_read_ncol(filename, ext));
    return rcpp_result_gen;
END_RCPP
}
// Cfits_read_colname
SEXP Cfits_read_colname(Rcpp::String filename, int colref, int ext);
RcppExport SEXP _Rfits_Cfits_read_colname(SEXP filenameSEXP, SEXP colrefSEXP, SEXP extSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type colref(colrefSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    rcpp_result_gen = Rcpp::wrap(Cfits_read_colname(filename, colref, ext));
    return rcpp_result_gen;
END_RCPP
}
// Cfits_create_bintable
void Cfits_create_bintable(Rcpp::String filename, int tfields, Rcpp::CharacterVector ttypes, Rcpp::CharacterVector tforms, Rcpp::CharacterVector tunits, Rcpp::String extname, int ext, int create_ext, int create_file, int table_type);
RcppExport SEXP _Rfits_Cfits_create_bintable(SEXP filenameSEXP, SEXP tfieldsSEXP, SEXP ttypesSEXP, SEXP tformsSEXP, SEXP tunitsSEXP, SEXP extnameSEXP, SEXP extSEXP, SEXP create_extSEXP, SEXP create_fileSEXP, SEXP table_typeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type tfields(tfieldsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type ttypes(ttypesSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type tforms(tformsSEXP);
    Rcpp::traits::input_parameter< Rcpp::CharacterVector >::type tunits(tunitsSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type extname(extnameSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    Rcpp::traits::input_parameter< int >::type create_ext(create_extSEXP);
    Rcpp::traits::input_parameter< int >::type create_file(create_fileSEXP);
    Rcpp::traits::input_parameter< int >::type table_type(table_typeSEXP);
    Cfits_create_bintable(filename, tfields, ttypes, tforms, tunits, extname, ext, create_ext, create_file, table_type);
    return R_NilValue;
END_RCPP
}
// Cfits_write_col
void Cfits_write_col(Rcpp::String filename, SEXP data, int nrow, int colref, int ext, int typecode);
RcppExport SEXP _Rfits_Cfits_write_col(SEXP filenameSEXP, SEXP dataSEXP, SEXP nrowSEXP, SEXP colrefSEXP, SEXP extSEXP, SEXP typecodeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type colref(colrefSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    Rcpp::traits::input_parameter< int >::type typecode(typecodeSEXP);
    Cfits_write_col(filename, data, nrow, colref, ext, typecode);
    return R_NilValue;
END_RCPP
}
// Cfits_read_key
SEXP Cfits_read_key(Rcpp::String filename, Rcpp::String keyname, int typecode, int ext);
RcppExport SEXP _Rfits_Cfits_read_key(SEXP filenameSEXP, SEXP keynameSEXP, SEXP typecodeSEXP, SEXP extSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type keyname(keynameSEXP);
    Rcpp::traits::input_parameter< int >::type typecode(typecodeSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    rcpp_result_gen = Rcpp::wrap(Cfits_read_key(filename, keyname, typecode, ext));
    return rcpp_result_gen;
END_RCPP
}
// Cfits_update_key
void Cfits_update_key(Rcpp::String filename, SEXP keyvalue, Rcpp::String keyname, Rcpp::String keycomment, int ext, int typecode);
RcppExport SEXP _Rfits_Cfits_update_key(SEXP filenameSEXP, SEXP keyvalueSEXP, SEXP keynameSEXP, SEXP keycommentSEXP, SEXP extSEXP, SEXP typecodeSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type keyvalue(keyvalueSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type keyname(keynameSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type keycomment(keycommentSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    Rcpp::traits::input_parameter< int >::type typecode(typecodeSEXP);
    Cfits_update_key(filename, keyvalue, keyname, keycomment, ext, typecode);
    return R_NilValue;
END_RCPP
}
// Cfits_write_history
void Cfits_write_history(Rcpp::String filename, Rcpp::String history, int ext);
RcppExport SEXP _Rfits_Cfits_write_history(SEXP filenameSEXP, SEXP historySEXP, SEXP extSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type history(historySEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    Cfits_write_history(filename, history, ext);
    return R_NilValue;
END_RCPP
}
// Cfits_write_comment
void Cfits_write_comment(Rcpp::String filename, Rcpp::String comment, int ext);
RcppExport SEXP _Rfits_Cfits_write_comment(SEXP filenameSEXP, SEXP commentSEXP, SEXP extSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type comment(commentSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    Cfits_write_comment(filename, comment, ext);
    return R_NilValue;
END_RCPP
}
// Cfits_write_date
void Cfits_write_date(Rcpp::String filename, int ext);
RcppExport SEXP _Rfits_Cfits_write_date(SEXP filenameSEXP, SEXP extSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    Cfits_write_date(filename, ext);
    return R_NilValue;
END_RCPP
}
// Cfits_create_image
void Cfits_create_image(Rcpp::String filename, int naxis, long naxis1, long naxis2, long naxis3, long naxis4, int ext, int create_ext, int create_file, int bitpix);
RcppExport SEXP _Rfits_Cfits_create_image(SEXP filenameSEXP, SEXP naxisSEXP, SEXP naxis1SEXP, SEXP naxis2SEXP, SEXP naxis3SEXP, SEXP naxis4SEXP, SEXP extSEXP, SEXP create_extSEXP, SEXP create_fileSEXP, SEXP bitpixSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type naxis(naxisSEXP);
    Rcpp::traits::input_parameter< long >::type naxis1(naxis1SEXP);
    Rcpp::traits::input_parameter< long >::type naxis2(naxis2SEXP);
    Rcpp::traits::input_parameter< long >::type naxis3(naxis3SEXP);
    Rcpp::traits::input_parameter< long >::type naxis4(naxis4SEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    Rcpp::traits::input_parameter< int >::type create_ext(create_extSEXP);
    Rcpp::traits::input_parameter< int >::type create_file(create_fileSEXP);
    Rcpp::traits::input_parameter< int >::type bitpix(bitpixSEXP);
    Cfits_create_image(filename, naxis, naxis1, naxis2, naxis3, naxis4, ext, create_ext, create_file, bitpix);
    return R_NilValue;
END_RCPP
}
// Cfits_write_pix
void Cfits_write_pix(Rcpp::String filename, SEXP data, int ext, int datatype, int naxis, long naxis1, long naxis2, long naxis3, long naxis4);
RcppExport SEXP _Rfits_Cfits_write_pix(SEXP filenameSEXP, SEXP dataSEXP, SEXP extSEXP, SEXP datatypeSEXP, SEXP naxisSEXP, SEXP naxis1SEXP, SEXP naxis2SEXP, SEXP naxis3SEXP, SEXP naxis4SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    Rcpp::traits::input_parameter< int >::type datatype(datatypeSEXP);
    Rcpp::traits::input_parameter< int >::type naxis(naxisSEXP);
    Rcpp::traits::input_parameter< long >::type naxis1(naxis1SEXP);
    Rcpp::traits::input_parameter< long >::type naxis2(naxis2SEXP);
    Rcpp::traits::input_parameter< long >::type naxis3(naxis3SEXP);
    Rcpp::traits::input_parameter< long >::type naxis4(naxis4SEXP);
    Cfits_write_pix(filename, data, ext, datatype, naxis, naxis1, naxis2, naxis3, naxis4);
    return R_NilValue;
END_RCPP
}
// Cfits_read_img
SEXP Cfits_read_img(Rcpp::String filename, int ext, int datatype, long naxis1, long naxis2, long naxis3, long naxis4);
RcppExport SEXP _Rfits_Cfits_read_img(SEXP filenameSEXP, SEXP extSEXP, SEXP datatypeSEXP, SEXP naxis1SEXP, SEXP naxis2SEXP, SEXP naxis3SEXP, SEXP naxis4SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    Rcpp::traits::input_parameter< int >::type datatype(datatypeSEXP);
    Rcpp::traits::input_parameter< long >::type naxis1(naxis1SEXP);
    Rcpp::traits::input_parameter< long >::type naxis2(naxis2SEXP);
    Rcpp::traits::input_parameter< long >::type naxis3(naxis3SEXP);
    Rcpp::traits::input_parameter< long >::type naxis4(naxis4SEXP);
    rcpp_result_gen = Rcpp::wrap(Cfits_read_img(filename, ext, datatype, naxis1, naxis2, naxis3, naxis4));
    return rcpp_result_gen;
END_RCPP
}
// Cfits_read_header
SEXP Cfits_read_header(Rcpp::String filename, int ext);
RcppExport SEXP _Rfits_Cfits_read_header(SEXP filenameSEXP, SEXP extSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    rcpp_result_gen = Rcpp::wrap(Cfits_read_header(filename, ext));
    return rcpp_result_gen;
END_RCPP
}
// Cfits_read_header_raw
SEXP Cfits_read_header_raw(Rcpp::String filename, int ext);
RcppExport SEXP _Rfits_Cfits_read_header_raw(SEXP filenameSEXP, SEXP extSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    rcpp_result_gen = Rcpp::wrap(Cfits_read_header_raw(filename, ext));
    return rcpp_result_gen;
END_RCPP
}
// Cfits_delete_HDU
void Cfits_delete_HDU(Rcpp::String filename, int ext);
RcppExport SEXP _Rfits_Cfits_delete_HDU(SEXP filenameSEXP, SEXP extSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    Cfits_delete_HDU(filename, ext);
    return R_NilValue;
END_RCPP
}
// Cfits_delete_key
void Cfits_delete_key(Rcpp::String filename, Rcpp::String keyname, int ext);
RcppExport SEXP _Rfits_Cfits_delete_key(SEXP filenameSEXP, SEXP keynameSEXP, SEXP extSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< Rcpp::String >::type keyname(keynameSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    Cfits_delete_key(filename, keyname, ext);
    return R_NilValue;
END_RCPP
}
// Cfits_delete_header
void Cfits_delete_header(Rcpp::String filename, int ext);
RcppExport SEXP _Rfits_Cfits_delete_header(SEXP filenameSEXP, SEXP extSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    Cfits_delete_header(filename, ext);
    return R_NilValue;
END_RCPP
}
// Cfits_read_img_subset
SEXP Cfits_read_img_subset(Rcpp::String filename, int ext, int datatype, long fpixel0, long fpixel1, long fpixel2, long fpixel3, long lpixel0, long lpixel1, long lpixel2, long lpixel3, long sparse);
RcppExport SEXP _Rfits_Cfits_read_img_subset(SEXP filenameSEXP, SEXP extSEXP, SEXP datatypeSEXP, SEXP fpixel0SEXP, SEXP fpixel1SEXP, SEXP fpixel2SEXP, SEXP fpixel3SEXP, SEXP lpixel0SEXP, SEXP lpixel1SEXP, SEXP lpixel2SEXP, SEXP lpixel3SEXP, SEXP sparseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    Rcpp::traits::input_parameter< int >::type datatype(datatypeSEXP);
    Rcpp::traits::input_parameter< long >::type fpixel0(fpixel0SEXP);
    Rcpp::traits::input_parameter< long >::type fpixel1(fpixel1SEXP);
    Rcpp::traits::input_parameter< long >::type fpixel2(fpixel2SEXP);
    Rcpp::traits::input_parameter< long >::type fpixel3(fpixel3SEXP);
    Rcpp::traits::input_parameter< long >::type lpixel0(lpixel0SEXP);
    Rcpp::traits::input_parameter< long >::type lpixel1(lpixel1SEXP);
    Rcpp::traits::input_parameter< long >::type lpixel2(lpixel2SEXP);
    Rcpp::traits::input_parameter< long >::type lpixel3(lpixel3SEXP);
    Rcpp::traits::input_parameter< long >::type sparse(sparseSEXP);
    rcpp_result_gen = Rcpp::wrap(Cfits_read_img_subset(filename, ext, datatype, fpixel0, fpixel1, fpixel2, fpixel3, lpixel0, lpixel1, lpixel2, lpixel3, sparse));
    return rcpp_result_gen;
END_RCPP
}
// Cfits_write_img_subset
void Cfits_write_img_subset(Rcpp::String filename, SEXP data, int ext, int datatype, int naxis, long fpixel0, long fpixel1, long fpixel2, long fpixel3, long lpixel0, long lpixel1, long lpixel2, long lpixel3);
RcppExport SEXP _Rfits_Cfits_write_img_subset(SEXP filenameSEXP, SEXP dataSEXP, SEXP extSEXP, SEXP datatypeSEXP, SEXP naxisSEXP, SEXP fpixel0SEXP, SEXP fpixel1SEXP, SEXP fpixel2SEXP, SEXP fpixel3SEXP, SEXP lpixel0SEXP, SEXP lpixel1SEXP, SEXP lpixel2SEXP, SEXP lpixel3SEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    Rcpp::traits::input_parameter< int >::type datatype(datatypeSEXP);
    Rcpp::traits::input_parameter< int >::type naxis(naxisSEXP);
    Rcpp::traits::input_parameter< long >::type fpixel0(fpixel0SEXP);
    Rcpp::traits::input_parameter< long >::type fpixel1(fpixel1SEXP);
    Rcpp::traits::input_parameter< long >::type fpixel2(fpixel2SEXP);
    Rcpp::traits::input_parameter< long >::type fpixel3(fpixel3SEXP);
    Rcpp::traits::input_parameter< long >::type lpixel0(lpixel0SEXP);
    Rcpp::traits::input_parameter< long >::type lpixel1(lpixel1SEXP);
    Rcpp::traits::input_parameter< long >::type lpixel2(lpixel2SEXP);
    Rcpp::traits::input_parameter< long >::type lpixel3(lpixel3SEXP);
    Cfits_write_img_subset(filename, data, ext, datatype, naxis, fpixel0, fpixel1, fpixel2, fpixel3, lpixel0, lpixel1, lpixel2, lpixel3);
    return R_NilValue;
END_RCPP
}
// Cfits_write_chksum
void Cfits_write_chksum(Rcpp::String filename);
RcppExport SEXP _Rfits_Cfits_write_chksum(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Cfits_write_chksum(filename);
    return R_NilValue;
END_RCPP
}
// Cfits_verify_chksum
SEXP Cfits_verify_chksum(Rcpp::String filename, int verbose);
RcppExport SEXP _Rfits_Cfits_verify_chksum(SEXP filenameSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(Cfits_verify_chksum(filename, verbose));
    return rcpp_result_gen;
END_RCPP
}
// Cfits_get_chksum
SEXP Cfits_get_chksum(Rcpp::String filename);
RcppExport SEXP _Rfits_Cfits_get_chksum(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(Cfits_get_chksum(filename));
    return rcpp_result_gen;
END_RCPP
}
// Cfits_encode_chksum
SEXP Cfits_encode_chksum(unsigned long sum, int complement);
RcppExport SEXP _Rfits_Cfits_encode_chksum(SEXP sumSEXP, SEXP complementSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned long >::type sum(sumSEXP);
    Rcpp::traits::input_parameter< int >::type complement(complementSEXP);
    rcpp_result_gen = Rcpp::wrap(Cfits_encode_chksum(sum, complement));
    return rcpp_result_gen;
END_RCPP
}
// Cfits_decode_chksum
SEXP Cfits_decode_chksum(Rcpp::String ascii, int complement);
RcppExport SEXP _Rfits_Cfits_decode_chksum(SEXP asciiSEXP, SEXP complementSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type ascii(asciiSEXP);
    Rcpp::traits::input_parameter< int >::type complement(complementSEXP);
    rcpp_result_gen = Rcpp::wrap(Cfits_decode_chksum(ascii, complement));
    return rcpp_result_gen;
END_RCPP
}
// Cfits_read_nkey
int Cfits_read_nkey(Rcpp::String filename, int ext);
RcppExport SEXP _Rfits_Cfits_read_nkey(SEXP filenameSEXP, SEXP extSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type filename(filenameSEXP);
    Rcpp::traits::input_parameter< int >::type ext(extSEXP);
    rcpp_result_gen = Rcpp::wrap(Cfits_read_nkey(filename, ext));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_Rfits_Cfits_create_header", (DL_FUNC) &_Rfits_Cfits_create_header, 3},
    {"_Rfits_Cfits_read_col", (DL_FUNC) &_Rfits_Cfits_read_col, 4},
    {"_Rfits_Cfits_read_nrow", (DL_FUNC) &_Rfits_Cfits_read_nrow, 2},
    {"_Rfits_Cfits_read_nhdu", (DL_FUNC) &_Rfits_Cfits_read_nhdu, 1},
    {"_Rfits_Cfits_read_ncol", (DL_FUNC) &_Rfits_Cfits_read_ncol, 2},
    {"_Rfits_Cfits_read_colname", (DL_FUNC) &_Rfits_Cfits_read_colname, 3},
    {"_Rfits_Cfits_create_bintable", (DL_FUNC) &_Rfits_Cfits_create_bintable, 10},
    {"_Rfits_Cfits_write_col", (DL_FUNC) &_Rfits_Cfits_write_col, 6},
    {"_Rfits_Cfits_read_key", (DL_FUNC) &_Rfits_Cfits_read_key, 4},
    {"_Rfits_Cfits_update_key", (DL_FUNC) &_Rfits_Cfits_update_key, 6},
    {"_Rfits_Cfits_write_history", (DL_FUNC) &_Rfits_Cfits_write_history, 3},
    {"_Rfits_Cfits_write_comment", (DL_FUNC) &_Rfits_Cfits_write_comment, 3},
    {"_Rfits_Cfits_write_date", (DL_FUNC) &_Rfits_Cfits_write_date, 2},
    {"_Rfits_Cfits_create_image", (DL_FUNC) &_Rfits_Cfits_create_image, 10},
    {"_Rfits_Cfits_write_pix", (DL_FUNC) &_Rfits_Cfits_write_pix, 9},
    {"_Rfits_Cfits_read_img", (DL_FUNC) &_Rfits_Cfits_read_img, 7},
    {"_Rfits_Cfits_read_header", (DL_FUNC) &_Rfits_Cfits_read_header, 2},
    {"_Rfits_Cfits_read_header_raw", (DL_FUNC) &_Rfits_Cfits_read_header_raw, 2},
    {"_Rfits_Cfits_delete_HDU", (DL_FUNC) &_Rfits_Cfits_delete_HDU, 2},
    {"_Rfits_Cfits_delete_key", (DL_FUNC) &_Rfits_Cfits_delete_key, 3},
    {"_Rfits_Cfits_delete_header", (DL_FUNC) &_Rfits_Cfits_delete_header, 2},
    {"_Rfits_Cfits_read_img_subset", (DL_FUNC) &_Rfits_Cfits_read_img_subset, 12},
    {"_Rfits_Cfits_write_img_subset", (DL_FUNC) &_Rfits_Cfits_write_img_subset, 13},
    {"_Rfits_Cfits_write_chksum", (DL_FUNC) &_Rfits_Cfits_write_chksum, 1},
    {"_Rfits_Cfits_verify_chksum", (DL_FUNC) &_Rfits_Cfits_verify_chksum, 2},
    {"_Rfits_Cfits_get_chksum", (DL_FUNC) &_Rfits_Cfits_get_chksum, 1},
    {"_Rfits_Cfits_encode_chksum", (DL_FUNC) &_Rfits_Cfits_encode_chksum, 2},
    {"_Rfits_Cfits_decode_chksum", (DL_FUNC) &_Rfits_Cfits_decode_chksum, 2},
    {"_Rfits_Cfits_read_nkey", (DL_FUNC) &_Rfits_Cfits_read_nkey, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_Rfits(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
