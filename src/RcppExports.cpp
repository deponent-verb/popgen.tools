// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// any_sug
bool any_sug(LogicalVector x);
RcppExport SEXP _popgen_tools_any_sug(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(any_sug(x));
    return rcpp_result_gen;
END_RCPP
}
// find_index
int find_index(NumericVector x, double target);
RcppExport SEXP _popgen_tools_find_index(SEXP xSEXP, SEXP targetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type target(targetSEXP);
    rcpp_result_gen = Rcpp::wrap(find_index(x, target));
    return rcpp_result_gen;
END_RCPP
}
// first_over
int first_over(NumericVector x, double target);
RcppExport SEXP _popgen_tools_first_over(SEXP xSEXP, SEXP targetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type target(targetSEXP);
    rcpp_result_gen = Rcpp::wrap(first_over(x, target));
    return rcpp_result_gen;
END_RCPP
}
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
double fwh(double t_t, double t_h);
RcppExport SEXP _popgen_tools_fwh(SEXP t_tSEXP, SEXP t_hSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type t_t(t_tSEXP);
    Rcpp::traits::input_parameter< double >::type t_h(t_hSEXP);
    rcpp_result_gen = Rcpp::wrap(fwh(t_t, t_h));
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
// have_na
bool have_na(NumericMatrix M);
RcppExport SEXP _popgen_tools_have_na(SEXP MSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type M(MSEXP);
    rcpp_result_gen = Rcpp::wrap(have_na(M));
    return rcpp_result_gen;
END_RCPP
}
// het_finder
NumericVector het_finder(NumericMatrix G);
RcppExport SEXP _popgen_tools_het_finder(SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(het_finder(G));
    return rcpp_result_gen;
END_RCPP
}
// is_sorted
bool is_sorted(NumericVector x, bool ascend);
RcppExport SEXP _popgen_tools_is_sorted(SEXP xSEXP, SEXP ascendSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type ascend(ascendSEXP);
    rcpp_result_gen = Rcpp::wrap(is_sorted(x, ascend));
    return rcpp_result_gen;
END_RCPP
}
// matrix_subset
Rcpp::NumericMatrix matrix_subset(Rcpp::NumericMatrix G, Rcpp::IntegerVector y);
RcppExport SEXP _popgen_tools_matrix_subset(SEXP GSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type G(GSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(matrix_subset(G, y));
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
// var_taj
double var_taj(NumericMatrix G);
RcppExport SEXP _popgen_tools_var_taj(SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(var_taj(G));
    return rcpp_result_gen;
END_RCPP
}
// taj_D
double taj_D(double t_t, double t_w, double var_taj);
RcppExport SEXP _popgen_tools_taj_D(SEXP t_tSEXP, SEXP t_wSEXP, SEXP var_tajSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type t_t(t_tSEXP);
    Rcpp::traits::input_parameter< double >::type t_w(t_wSEXP);
    Rcpp::traits::input_parameter< double >::type var_taj(var_tajSEXP);
    rcpp_result_gen = Rcpp::wrap(taj_D(t_t, t_w, var_taj));
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
// row_count
int row_count(NumericMatrix A, NumericVector x);
RcppExport SEXP _popgen_tools_row_count(SEXP ASEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(row_count(A, x));
    return rcpp_result_gen;
END_RCPP
}
// unique_rows
NumericMatrix unique_rows(NumericMatrix A);
RcppExport SEXP _popgen_tools_unique_rows(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(unique_rows(A));
    return rcpp_result_gen;
END_RCPP
}
// row_freq
NumericVector row_freq(NumericMatrix A);
RcppExport SEXP _popgen_tools_row_freq(SEXP ASEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type A(ASEXP);
    rcpp_result_gen = Rcpp::wrap(row_freq(A));
    return rcpp_result_gen;
END_RCPP
}
// vec_sort
Rcpp::NumericVector vec_sort(Rcpp::NumericVector x);
RcppExport SEXP _popgen_tools_vec_sort(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(vec_sort(x));
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
// vec_split
Rcpp::List vec_split(NumericVector x, int n);
RcppExport SEXP _popgen_tools_vec_split(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(vec_split(x, n));
    return rcpp_result_gen;
END_RCPP
}
// vector_trim
NumericVector vector_trim(NumericVector x, int cen, int k);
RcppExport SEXP _popgen_tools_vector_trim(SEXP xSEXP, SEXP cenSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type cen(cenSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(vector_trim(x, cen, k));
    return rcpp_result_gen;
END_RCPP
}
// window_trim
NumericMatrix window_trim(NumericMatrix G, int cen, int k);
RcppExport SEXP _popgen_tools_window_trim(SEXP GSEXP, SEXP cenSEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type G(GSEXP);
    Rcpp::traits::input_parameter< int >::type cen(cenSEXP);
    Rcpp::traits::input_parameter< int >::type k(kSEXP);
    rcpp_result_gen = Rcpp::wrap(window_trim(G, cen, k));
    return rcpp_result_gen;
END_RCPP
}
// winsplit_base
List winsplit_base(NumericMatrix G, NumericVector pos, int n);
RcppExport SEXP _popgen_tools_winsplit_base(SEXP GSEXP, SEXP posSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type G(GSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type pos(posSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(winsplit_base(G, pos, n));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_popgen_tools_any_sug", (DL_FUNC) &_popgen_tools_any_sug, 1},
    {"_popgen_tools_find_index", (DL_FUNC) &_popgen_tools_find_index, 2},
    {"_popgen_tools_first_over", (DL_FUNC) &_popgen_tools_first_over, 2},
    {"_popgen_tools_count", (DL_FUNC) &_popgen_tools_count, 2},
    {"_popgen_tools_theta_h", (DL_FUNC) &_popgen_tools_theta_h, 1},
    {"_popgen_tools_fwh", (DL_FUNC) &_popgen_tools_fwh, 2},
    {"_popgen_tools_h_stats", (DL_FUNC) &_popgen_tools_h_stats, 1},
    {"_popgen_tools_have_na", (DL_FUNC) &_popgen_tools_have_na, 1},
    {"_popgen_tools_het_finder", (DL_FUNC) &_popgen_tools_het_finder, 1},
    {"_popgen_tools_is_sorted", (DL_FUNC) &_popgen_tools_is_sorted, 2},
    {"_popgen_tools_matrix_subset", (DL_FUNC) &_popgen_tools_matrix_subset, 2},
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
    {"_popgen_tools_var_taj", (DL_FUNC) &_popgen_tools_var_taj, 1},
    {"_popgen_tools_taj_D", (DL_FUNC) &_popgen_tools_taj_D, 3},
    {"_popgen_tools_fill_row", (DL_FUNC) &_popgen_tools_fill_row, 2},
    {"_popgen_tools_row_count", (DL_FUNC) &_popgen_tools_row_count, 2},
    {"_popgen_tools_unique_rows", (DL_FUNC) &_popgen_tools_unique_rows, 1},
    {"_popgen_tools_row_freq", (DL_FUNC) &_popgen_tools_row_freq, 1},
    {"_popgen_tools_vec_sort", (DL_FUNC) &_popgen_tools_vec_sort, 1},
    {"_popgen_tools_vec_equal", (DL_FUNC) &_popgen_tools_vec_equal, 2},
    {"_popgen_tools_vec_split", (DL_FUNC) &_popgen_tools_vec_split, 2},
    {"_popgen_tools_vector_trim", (DL_FUNC) &_popgen_tools_vector_trim, 3},
    {"_popgen_tools_window_trim", (DL_FUNC) &_popgen_tools_window_trim, 3},
    {"_popgen_tools_winsplit_base", (DL_FUNC) &_popgen_tools_winsplit_base, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_popgen_tools(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
