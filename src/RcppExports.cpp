// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// test
void test();
RcppExport SEXP _MinExampleOfSolaris_test() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    test();
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MinExampleOfSolaris_test", (DL_FUNC) &_MinExampleOfSolaris_test, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_MinExampleOfSolaris(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
