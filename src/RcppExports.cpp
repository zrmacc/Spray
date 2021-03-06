// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// fitOLS
SEXP fitOLS(const arma::colvec y, const arma::mat X);
RcppExport SEXP _SurrogateRegression_fitOLS(SEXP ySEXP, SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::colvec >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(fitOLS(y, X));
    return rcpp_result_gen;
END_RCPP
}
// matDet
SEXP matDet(const arma::mat A, const bool logDet);
RcppExport SEXP _SurrogateRegression_matDet(SEXP ASEXP, SEXP logDetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< const bool >::type logDet(logDetSEXP);
    rcpp_result_gen = Rcpp::wrap(matDet(A, logDet));
    return rcpp_result_gen;
END_RCPP
}
// matInv
SEXP matInv(const arma::mat A);
RcppExport SEXP _SurrogateRegression_matInv(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(matInv(A));
    return rcpp_result_gen;
END_RCPP
}
// matIP
SEXP matIP(const arma::mat A, const arma::mat B);
RcppExport SEXP _SurrogateRegression_matIP(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(matIP(A, B));
    return rcpp_result_gen;
END_RCPP
}
// MMP
SEXP MMP(const arma::mat A, const arma::mat B);
RcppExport SEXP _SurrogateRegression_MMP(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(MMP(A, B));
    return rcpp_result_gen;
END_RCPP
}
// matOP
SEXP matOP(const arma::mat A, const arma::mat B);
RcppExport SEXP _SurrogateRegression_matOP(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(matOP(A, B));
    return rcpp_result_gen;
END_RCPP
}
// matQF
SEXP matQF(const arma::mat X, const arma::mat A);
RcppExport SEXP _SurrogateRegression_matQF(SEXP XSEXP, SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(matQF(X, A));
    return rcpp_result_gen;
END_RCPP
}
// SchurC
SEXP SchurC(const arma::mat Ibb, const arma::mat Iaa, const arma::mat Iba);
RcppExport SEXP _SurrogateRegression_SchurC(SEXP IbbSEXP, SEXP IaaSEXP, SEXP IbaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type Ibb(IbbSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type Iaa(IaaSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type Iba(IbaSEXP);
    rcpp_result_gen = Rcpp::wrap(SchurC(Ibb, Iaa, Iba));
    return rcpp_result_gen;
END_RCPP
}
// tr
SEXP tr(const arma::mat A);
RcppExport SEXP _SurrogateRegression_tr(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(tr(A));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_SurrogateRegression_fitOLS", (DL_FUNC) &_SurrogateRegression_fitOLS, 2},
    {"_SurrogateRegression_matDet", (DL_FUNC) &_SurrogateRegression_matDet, 2},
    {"_SurrogateRegression_matInv", (DL_FUNC) &_SurrogateRegression_matInv, 1},
    {"_SurrogateRegression_matIP", (DL_FUNC) &_SurrogateRegression_matIP, 2},
    {"_SurrogateRegression_MMP", (DL_FUNC) &_SurrogateRegression_MMP, 2},
    {"_SurrogateRegression_matOP", (DL_FUNC) &_SurrogateRegression_matOP, 2},
    {"_SurrogateRegression_matQF", (DL_FUNC) &_SurrogateRegression_matQF, 2},
    {"_SurrogateRegression_SchurC", (DL_FUNC) &_SurrogateRegression_SchurC, 3},
    {"_SurrogateRegression_tr", (DL_FUNC) &_SurrogateRegression_tr, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_SurrogateRegression(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
