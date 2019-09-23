// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// count
int count(NumericVector vec, int target);
RcppExport SEXP _popgen_tools_count(SEXP vecSEXP, SEXP targetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vec(vecSEXP);
    Rcpp::traits::input_parameter< int >::type target(targetSEXP);
    rcpp_result_gen = Rcpp::wrap(count(vec, target));
    return rcpp_result_gen;
END_RCPP
}
// theta_h
double theta_h(NumericMatrix G);
RcppExport SEXP _popgen_tools_theta_h(SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(theta_h(G));
    return rcpp_result_gen;
END_RCPP
}
// fwh
double fwh(double t_w, double t_h);
RcppExport SEXP _popgen_tools_fwh(SEXP t_wSEXP, SEXP t_hSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type t_w(t_wSEXP);
    Rcpp::traits::input_parameter< double >::type t_h(t_hSEXP);
    rcpp_result_gen = Rcpp::wrap(fwh(t_w, t_h));
    return rcpp_result_gen;
END_RCPP
}
// h_stats
NumericVector h_stats(NumericMatrix G);
RcppExport SEXP _popgen_tools_h_stats(SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(h_stats(G));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _popgen_tools_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}
// sub_win
List sub_win(NumericMatrix G, int num_windows);
RcppExport SEXP _popgen_tools_sub_win(SEXP GSEXP, SEXP num_windowsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type G(GSEXP);
    Rcpp::traits::input_parameter< int >::type num_windows(num_windowsSEXP);
    rcpp_result_gen = Rcpp::wrap(sub_win(G, num_windows));
    return rcpp_result_gen;
END_RCPP
}
// a1f
double a1f(int N);
RcppExport SEXP _popgen_tools_a1f(SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(a1f(N));
    return rcpp_result_gen;
END_RCPP
}
// a2f
double a2f(int N);
RcppExport SEXP _popgen_tools_a2f(SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(a2f(N));
    return rcpp_result_gen;
END_RCPP
}
// b1f
double b1f(double N);
RcppExport SEXP _popgen_tools_b1f(SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(b1f(N));
    return rcpp_result_gen;
END_RCPP
}
// b2f
double b2f(double N);
RcppExport SEXP _popgen_tools_b2f(SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(b2f(N));
    return rcpp_result_gen;
END_RCPP
}
// c1f
double c1f(double b1, double a1);
RcppExport SEXP _popgen_tools_c1f(SEXP b1SEXP, SEXP a1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type b1(b1SEXP);
    Rcpp::traits::input_parameter< double >::type a1(a1SEXP);
    rcpp_result_gen = Rcpp::wrap(c1f(b1, a1));
    return rcpp_result_gen;
END_RCPP
}
// c2f
double c2f(double a1, double a2, double b2, int N);
RcppExport SEXP _popgen_tools_c2f(SEXP a1SEXP, SEXP a2SEXP, SEXP b2SEXP, SEXP NSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a1(a1SEXP);
    Rcpp::traits::input_parameter< double >::type a2(a2SEXP);
    Rcpp::traits::input_parameter< double >::type b2(b2SEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    rcpp_result_gen = Rcpp::wrap(c2f(a1, a2, b2, N));
    return rcpp_result_gen;
END_RCPP
}
// e1f
double e1f(double c1, double a1);
RcppExport SEXP _popgen_tools_e1f(SEXP c1SEXP, SEXP a1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type c1(c1SEXP);
    Rcpp::traits::input_parameter< double >::type a1(a1SEXP);
    rcpp_result_gen = Rcpp::wrap(e1f(c1, a1));
    return rcpp_result_gen;
END_RCPP
}
// e2f
double e2f(double a1, double a2, double c2);
RcppExport SEXP _popgen_tools_e2f(SEXP a1SEXP, SEXP a2SEXP, SEXP c2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type a1(a1SEXP);
    Rcpp::traits::input_parameter< double >::type a2(a2SEXP);
    Rcpp::traits::input_parameter< double >::type c2(c2SEXP);
    rcpp_result_gen = Rcpp::wrap(e2f(a1, a2, c2));
    return rcpp_result_gen;
END_RCPP
}
// theta_t
double theta_t(NumericMatrix G);
RcppExport SEXP _popgen_tools_theta_t(SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(theta_t(G));
    return rcpp_result_gen;
END_RCPP
}
// theta_w
double theta_w(NumericMatrix G);
RcppExport SEXP _popgen_tools_theta_w(SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(theta_w(G));
    return rcpp_result_gen;
END_RCPP
}
// taj_D
double taj_D(NumericMatrix G);
RcppExport SEXP _popgen_tools_taj_D(SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(taj_D(G));
    return rcpp_result_gen;
END_RCPP
}
// fill_row
NumericMatrix fill_row(NumericMatrix A, NumericVector x);
RcppExport SEXP _popgen_tools_fill_row(SEXP ASEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(fill_row(A, x));
    return rcpp_result_gen;
END_RCPP
}
// present_row
int present_row(NumericMatrix A, NumericVector x);
RcppExport SEXP _popgen_tools_present_row(SEXP ASEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(present_row(A, x));
    return rcpp_result_gen;
END_RCPP
}
// unique_rows
NumericVector unique_rows(NumericMatrix A);
RcppExport SEXP _popgen_tools_unique_rows(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(unique_rows(A));
    return rcpp_result_gen;
END_RCPP
}
// three_top
NumericVector three_top(NumericVector x);
RcppExport SEXP _popgen_tools_three_top(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(three_top(x));
    return rcpp_result_gen;
END_RCPP
}
// vec_equal
bool vec_equal(NumericVector x, NumericVector y);
RcppExport SEXP _popgen_tools_vec_equal(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(vec_equal(x, y));
    return rcpp_result_gen;
END_RCPP
}
// w_max
NumericVector w_max(NumericVector x);
RcppExport SEXP _popgen_tools_w_max(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(w_max(x));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_popgen_tools_count", (DL_FUNC) &_popgen_tools_count, 2},
    {"_popgen_tools_theta_h", (DL_FUNC) &_popgen_tools_theta_h, 1},
    {"_popgen_tools_fwh", (DL_FUNC) &_popgen_tools_fwh, 2},
    {"_popgen_tools_h_stats", (DL_FUNC) &_popgen_tools_h_stats, 1},
    {"_popgen_tools_rcpp_hello_world", (DL_FUNC) &_popgen_tools_rcpp_hello_world, 0},
    {"_popgen_tools_sub_win", (DL_FUNC) &_popgen_tools_sub_win, 2},
    {"_popgen_tools_a1f", (DL_FUNC) &_popgen_tools_a1f, 1},
    {"_popgen_tools_a2f", (DL_FUNC) &_popgen_tools_a2f, 1},
    {"_popgen_tools_b1f", (DL_FUNC) &_popgen_tools_b1f, 1},
    {"_popgen_tools_b2f", (DL_FUNC) &_popgen_tools_b2f, 1},
    {"_popgen_tools_c1f", (DL_FUNC) &_popgen_tools_c1f, 2},
    {"_popgen_tools_c2f", (DL_FUNC) &_popgen_tools_c2f, 4},
    {"_popgen_tools_e1f", (DL_FUNC) &_popgen_tools_e1f, 2},
    {"_popgen_tools_e2f", (DL_FUNC) &_popgen_tools_e2f, 3},
    {"_popgen_tools_theta_t", (DL_FUNC) &_popgen_tools_theta_t, 1},
    {"_popgen_tools_theta_w", (DL_FUNC) &_popgen_tools_theta_w, 1},
    {"_popgen_tools_taj_D", (DL_FUNC) &_popgen_tools_taj_D, 1},
    {"_popgen_tools_fill_row", (DL_FUNC) &_popgen_tools_fill_row, 2},
    {"_popgen_tools_present_row", (DL_FUNC) &_popgen_tools_present_row, 2},
    {"_popgen_tools_unique_rows", (DL_FUNC) &_popgen_tools_unique_rows, 1},
    {"_popgen_tools_three_top", (DL_FUNC) &_popgen_tools_three_top, 1},
    {"_popgen_tools_vec_equal", (DL_FUNC) &_popgen_tools_vec_equal, 2},
    {"_popgen_tools_w_max", (DL_FUNC) &_popgen_tools_w_max, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_popgen_tools(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
