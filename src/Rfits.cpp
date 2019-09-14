#include "cfitsio/fitsio.h"
#include <algorithm>
#include <vector>
#include <Rcpp.h>

using namespace Rcpp;

// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//

// [[Rcpp::export]]
int Rffrtnm(Rcpp::String url, Rcpp::String rootname){
  int status;
  int temp = ffrtnm((char *)url.get_cstring(), (char *)rootname.get_cstring(), &status);
  return temp;
};

// [[Rcpp::export]]
Rcpp::NumericMatrix Rfits_read_img(Rcpp::String filename, int xpix=100, int ypix=100)
{
  fitsfile *fptr;
  int status = 0, anynull, nullvals = 0;

  fits_open_image(&fptr, filename.get_cstring(), READONLY, &status);
  if (status) {
    fits_report_error(stderr, status);
    throw std::runtime_error("cannot open file");
  }

  int npixels = xpix * ypix;
  std::vector<float> pixels(npixels);
  fits_read_img(fptr, TFLOAT, 1, npixels, &nullvals, pixels.data(), &anynull, &status);
  if (status) {
    fits_report_error(stderr, status);
    throw std::runtime_error("cannot read image");
  }

  fits_close_file(fptr, &status);
  if (status) {
    fits_report_error(stderr, status);
    throw std::runtime_error("cannot close file");
  }

  NumericMatrix pixel_matrix(xpix, ypix);
  std::copy(pixels.begin(), pixels.end(), pixel_matrix.begin());
  return pixel_matrix;
}

// [[Rcpp::export]]
RcppExport SEXP Rfits_read_col(Rcpp::String filename, int colref=2, int ext=2){
  int status=0;
  int hdutype,anynull,typecode,ii;
  long nrows,repeat,width;

  fitsfile *fptr;

  fits_open_file(&fptr, filename.get_cstring(), READONLY, &status);
  
  if (status) {
    fits_report_error(stderr, status);
    throw std::runtime_error("cannot open file");
  }

  fits_movabs_hdu(fptr, ext, &hdutype,&status);

  if (status) {
    fits_report_error(stderr, status);
    throw std::runtime_error("cannot move HDU");
  }

  fits_get_num_rows(fptr,&nrows,&status);

  //Rcpp::NumericVector out(nrows);
  
  //Rcpp::Rcout << "nrows = " << nrows << std::endl;

  if (status) {
    fits_report_error(stderr, status);
    throw std::runtime_error("cannot get row numbers");
  }

  fits_get_coltype(fptr,colref,&typecode,&repeat,&width,&status);

  if (status) {
    fits_report_error(stderr, status);
    throw std::runtime_error("cannot get column type");
  }
  
  //Rcpp::Rcout << "typecode = " << typecode << std::endl;

  if ( typecode == TSTRING ) {
    //Rcpp::Rcout << "Reading TSTRING" << std::endl;
    //throw std::runtime_error("cannot read string (yet)!");
    int cwidth;
    fits_get_col_display_width(fptr, colref, &cwidth, &status);
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot check character width");
    }
    //Rcpp::Rcout << "Character width = " << cwidth << std::endl;
      
    int nullval = 0;
    //std::vector<char**> data(nrows*cwidth);
    char **data = (char **)malloc(sizeof(char *) * nrows);
    for (ii = 0 ; ii < nrows ; ii++ ) {
      data[ii] = (char*)malloc(cwidth);
    }
    fits_read_col(fptr, TSTRING, colref, 1, 1, nrows, &nullval, data, &anynull, &status);
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot read table");
    }
    Rcpp::StringVector out(nrows);
    std::copy(data, data + nrows, out.begin());
    for (int i = 0; i != nrows; i++) {
     delete data[i];
    }
    delete [] data;
    fits_close_file(fptr, &status);
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot close file");
    }
    return(out);
  }
  else if ( typecode == TBYTE ) {
    //Rcpp::Rcout << "Reading TBYTE" << std::endl;
    int nullval = 0;
    std::vector<Rbyte> col(nrows);
    fits_read_col(fptr, TBYTE, colref, 1, 1, nrows, &nullval, col.data(), &anynull, &status);
    Rcpp::IntegerVector out(nrows);
    std::copy(col.begin(), col.end(), out.begin());
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot read table");
    }
    fits_close_file(fptr, &status);
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot close file");
    }
    return(out);
  }
  else if ( typecode == TINT ) {
    //Rcpp::Rcout << "Reading TINT" << std::endl;
    int nullval = -999;
    std::vector<int> col(nrows);
    fits_read_col(fptr, TINT, colref, 1, 1, nrows, &nullval, col.data(), &anynull, &status);
    Rcpp::IntegerVector out(nrows);
    std::copy(col.begin(), col.end(), out.begin());
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot read table");
    }
    fits_close_file(fptr, &status);
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot close file");
    }
    return(out);
  }
  else if ( typecode == TUINT ) {
    //Rcpp::Rcout << "Reading TUINT" << std::endl;
    int nullval = -999;
    std::vector<int> col(nrows);
    fits_read_col(fptr, TUINT, colref, 1, 1, nrows, &nullval, col.data(), &anynull, &status);
    Rcpp::IntegerVector out(nrows);
    std::copy(col.begin(), col.end(), out.begin());
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot read table");
    }
    fits_close_file(fptr, &status);
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot close file");
    }
    return(out);
  }
  else if ( typecode == TSHORT ) {
    //Rcpp::Rcout << "Reading TSHORT" << std::endl;
    short nullval = -999;
    std::vector<short> col(nrows);
    fits_read_col(fptr, TSHORT, colref, 1, 1, nrows, &nullval, col.data(), &anynull, &status);
    Rcpp::NumericVector out(nrows);
    std::copy(col.begin(), col.end(), out.begin());
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot read table");
    }
    fits_close_file(fptr, &status);
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot close file");
    }
    return(out);
  }
  else if ( typecode == TUSHORT ) {
    //Rcpp::Rcout << "Reading TUSHORT" << std::endl;
    short nullval = -999;
    std::vector<short> col(nrows);
    fits_read_col(fptr, TUSHORT, colref, 1, 1, nrows, &nullval, col.data(), &anynull, &status);
    Rcpp::NumericVector out(nrows);
    std::copy(col.begin(), col.end(), out.begin());
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot read table");
    }
    fits_close_file(fptr, &status);
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot close file");
    }
    return(out);
  }
  else if ( typecode == TFLOAT ) {
    //Rcpp::Rcout << "Reading TFLOAT" << std::endl;
    float nullval = -999;
    std::vector<float> col(nrows);
    fits_read_col(fptr, TFLOAT, colref, 1, 1, nrows, &nullval, col.data(), &anynull, &status);
    Rcpp::NumericVector out(nrows);
    std::copy(col.begin(), col.end(), out.begin());
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot read table");
    }
    fits_close_file(fptr, &status);
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot close file");
    }
    return(out);
  }
  else if ( typecode == TLONG ) {
    //Rcpp::Rcout << "Reading TLONG" << std::endl;
    long nullval = -999;
    std::vector<long> col(nrows);
    fits_read_col(fptr, TLONG, colref, 1, 1, nrows, &nullval, col.data(), &anynull, &status);
    Rcpp::NumericVector out(nrows);
    std::copy(col.begin(), col.end(), out.begin());
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot read table");
    }
    fits_close_file(fptr, &status);
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot close file");
    }
    return(out);
  }
  else if ( typecode == TLONGLONG ) {
    //Rcpp::Rcout << "Reading TLONGLONG" << std::endl;
    long nullval = -999;
    //std::vector<long long> col(nrows);
    std::vector<int64_t> col(nrows);
    fits_read_col(fptr, TLONGLONG, colref, 1, 1, nrows, &nullval, col.data(), &anynull, &status);
    Rcpp::NumericVector out(nrows);
    //std::memcpy(out.data(), col.data());
    std::memcpy(&(out[0]), &(col[0]), nrows * sizeof(double));
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot read table");
    }
    fits_close_file(fptr, &status);
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot close file");
    }
    out.attr("class") = "integer64";
    return(out);
  }
  else if ( typecode == TDOUBLE ) {
    //Rcpp::Rcout << "Reading TDOUBLE" << std::endl;
    double nullval = -999;
    std::vector<double> col(nrows);
    fits_read_col(fptr, TDOUBLE, colref, 1, 1, nrows, &nullval, col.data(), &anynull, &status);
    Rcpp::NumericVector out(nrows);
    std::copy(col.begin(), col.end(), out.begin());
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot read table");
    }
    fits_close_file(fptr, &status);
    if (status) {
      fits_report_error(stderr, status);
      throw std::runtime_error("cannot close file");
    }
    return(out);
  }

  throw std::runtime_error("unsupported type");
}

// [[Rcpp::export]]
int Rfits_read_nrow(Rcpp::String filename, int ext=2){
  int status=0;
  int hdutype;
  long nrows;

  fitsfile *fptr;
  
  fits_open_file(&fptr, filename.get_cstring(), READONLY, &status);
  
  if (status) {
    fits_report_error(stderr, status);
    throw std::runtime_error("cannot open file");
  }
  
  fits_movabs_hdu(fptr, ext, &hdutype, &status);
  
  if (status) {
    fits_report_error(stderr, status);
    throw std::runtime_error("cannot move HDU");
  }
  
  fits_get_num_rows(fptr, &nrows, &status);
  
  fits_close_file(fptr, &status);
  if (status) {
    fits_report_error(stderr, status);
    throw std::runtime_error("cannot close file");
  }
  
  return nrows;
}

// [[Rcpp::export]]
int Rfits_read_ncol(Rcpp::String filename, int ext=2){
  int status=0;
  int hdutype,ncols;

  fitsfile *fptr;
  
  fits_open_file(&fptr, filename.get_cstring(), READONLY, &status);
  
  if (status) {
    fits_report_error(stderr, status);
    throw std::runtime_error("cannot open file");
  }
  
  fits_movabs_hdu(fptr, ext, &hdutype,&status);
  
  if (status) {
    fits_report_error(stderr, status);
    throw std::runtime_error("cannot move HDU");
  }
  
  fits_get_num_cols(fptr,&ncols,&status);
  
  fits_close_file(fptr, &status);
  if (status) {
    fits_report_error(stderr, status);
    throw std::runtime_error("cannot close file");
  }
  
  return ncols;
}

// [[Rcpp::export]]
SEXP Rfits_read_colname(Rcpp::String filename, int colref=2, int ext=2){
  int status=0;
  int hdutype,ncols;
  //char colname(9);
  fitsfile *fptr;
  
  fits_open_file(&fptr, filename.get_cstring(), READONLY, &status);
  
  if (status) {
    fits_report_error(stderr, status);
    throw std::runtime_error("cannot open file");
  }
  
  fits_movabs_hdu(fptr, ext, &hdutype, &status);
  
  if (status) {
    fits_report_error(stderr, status);
    throw std::runtime_error("cannot move HDU");
  }
  
  fits_get_num_cols(fptr, &ncols, &status);
  
  Rcpp::StringVector out(ncols);
  char *colname = (char *)malloc(sizeof(char) * 9);
  
  status = 0; int ii = 0;
  while ( status != COL_NOT_FOUND ) {
    //Rcpp::Rcout << "i = " << ii << std::endl;
    fits_get_colname(fptr, CASEINSEN, "*", colname, &colref, &status);
    if(status != COL_NOT_FOUND){
      out[ii] = colname;
      //Rcpp::Rcout << "colname = " << colname << std::endl; 
    }
    ii++;
  }
  
  status = 0;
  fits_close_file(fptr, &status);
  if (status) {
    fits_report_error(stderr, status);
    throw std::runtime_error("cannot close file");
  }
  
  return out;
}

