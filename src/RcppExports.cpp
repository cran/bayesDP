// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// ppexpV
double ppexpV(double q, const arma::vec& x, const arma::vec& cuts);
RcppExport SEXP bayesDP_ppexpV(SEXP qSEXP, SEXP xSEXP, SEXP cutsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type cuts(cutsSEXP);
    rcpp_result_gen = Rcpp::wrap(ppexpV(q, x, cuts));
    return rcpp_result_gen;
END_RCPP
}
// ppexpM
arma::vec ppexpM(double q, const arma::mat& x, const arma::vec& cuts);
RcppExport SEXP bayesDP_ppexpM(SEXP qSEXP, SEXP xSEXP, SEXP cutsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type q(qSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type cuts(cutsSEXP);
    rcpp_result_gen = Rcpp::wrap(ppexpM(q, x, cuts));
    return rcpp_result_gen;
END_RCPP
}