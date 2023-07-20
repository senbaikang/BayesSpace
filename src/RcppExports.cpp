// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>
#include <RcppArmadillo.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true> &Rcpp::Rcout  = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false> &Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// iterate
List iterate(
    arma::mat Y, List df_j, int nrep, int n, int d, double gamma, int q,
    arma::vec init, NumericVector mu0, arma::mat lambda0, double alpha,
    double beta
);
RcppExport SEXP
_BayesSpace_iterate(
    SEXP YSEXP, SEXP df_jSEXP, SEXP nrepSEXP, SEXP nSEXP, SEXP dSEXP,
    SEXP gammaSEXP, SEXP qSEXP, SEXP initSEXP, SEXP mu0SEXP, SEXP lambda0SEXP,
    SEXP alphaSEXP, SEXP betaSEXP
) {
  BEGIN_RCPP
  Rcpp::RObject rcpp_result_gen;
  Rcpp::RNGScope rcpp_rngScope_gen;
  Rcpp::traits::input_parameter<arma::mat>::type Y(YSEXP);
  Rcpp::traits::input_parameter<List>::type df_j(df_jSEXP);
  Rcpp::traits::input_parameter<int>::type nrep(nrepSEXP);
  Rcpp::traits::input_parameter<int>::type n(nSEXP);
  Rcpp::traits::input_parameter<int>::type d(dSEXP);
  Rcpp::traits::input_parameter<double>::type gamma(gammaSEXP);
  Rcpp::traits::input_parameter<int>::type q(qSEXP);
  Rcpp::traits::input_parameter<arma::vec>::type init(initSEXP);
  Rcpp::traits::input_parameter<NumericVector>::type mu0(mu0SEXP);
  Rcpp::traits::input_parameter<arma::mat>::type lambda0(lambda0SEXP);
  Rcpp::traits::input_parameter<double>::type alpha(alphaSEXP);
  Rcpp::traits::input_parameter<double>::type beta(betaSEXP);
  rcpp_result_gen = Rcpp::wrap(
      iterate(Y, df_j, nrep, n, d, gamma, q, init, mu0, lambda0, alpha, beta)
  );
  return rcpp_result_gen;
  END_RCPP
}
// iterate_vvv
List iterate_vvv(
    arma::mat Y, List df_j, int nrep, int n, int d, double gamma, int q,
    arma::vec init, NumericVector mu0, arma::mat lambda0, double alpha,
    double beta
);
RcppExport SEXP
_BayesSpace_iterate_vvv(
    SEXP YSEXP, SEXP df_jSEXP, SEXP nrepSEXP, SEXP nSEXP, SEXP dSEXP,
    SEXP gammaSEXP, SEXP qSEXP, SEXP initSEXP, SEXP mu0SEXP, SEXP lambda0SEXP,
    SEXP alphaSEXP, SEXP betaSEXP
) {
  BEGIN_RCPP
  Rcpp::RObject rcpp_result_gen;
  Rcpp::RNGScope rcpp_rngScope_gen;
  Rcpp::traits::input_parameter<arma::mat>::type Y(YSEXP);
  Rcpp::traits::input_parameter<List>::type df_j(df_jSEXP);
  Rcpp::traits::input_parameter<int>::type nrep(nrepSEXP);
  Rcpp::traits::input_parameter<int>::type n(nSEXP);
  Rcpp::traits::input_parameter<int>::type d(dSEXP);
  Rcpp::traits::input_parameter<double>::type gamma(gammaSEXP);
  Rcpp::traits::input_parameter<int>::type q(qSEXP);
  Rcpp::traits::input_parameter<arma::vec>::type init(initSEXP);
  Rcpp::traits::input_parameter<NumericVector>::type mu0(mu0SEXP);
  Rcpp::traits::input_parameter<arma::mat>::type lambda0(lambda0SEXP);
  Rcpp::traits::input_parameter<double>::type alpha(alphaSEXP);
  Rcpp::traits::input_parameter<double>::type beta(betaSEXP);
  rcpp_result_gen = Rcpp::wrap(iterate_vvv(
      Y, df_j, nrep, n, d, gamma, q, init, mu0, lambda0, alpha, beta
  ));
  return rcpp_result_gen;
  END_RCPP
}
// iterate_t
List iterate_t(
    arma::mat Y, List df_j, int nrep, int n, int d, double gamma, int q,
    arma::vec init, NumericVector mu0, arma::mat lambda0, double alpha,
    double beta
);
RcppExport SEXP
_BayesSpace_iterate_t(
    SEXP YSEXP, SEXP df_jSEXP, SEXP nrepSEXP, SEXP nSEXP, SEXP dSEXP,
    SEXP gammaSEXP, SEXP qSEXP, SEXP initSEXP, SEXP mu0SEXP, SEXP lambda0SEXP,
    SEXP alphaSEXP, SEXP betaSEXP
) {
  BEGIN_RCPP
  Rcpp::RObject rcpp_result_gen;
  Rcpp::RNGScope rcpp_rngScope_gen;
  Rcpp::traits::input_parameter<arma::mat>::type Y(YSEXP);
  Rcpp::traits::input_parameter<List>::type df_j(df_jSEXP);
  Rcpp::traits::input_parameter<int>::type nrep(nrepSEXP);
  Rcpp::traits::input_parameter<int>::type n(nSEXP);
  Rcpp::traits::input_parameter<int>::type d(dSEXP);
  Rcpp::traits::input_parameter<double>::type gamma(gammaSEXP);
  Rcpp::traits::input_parameter<int>::type q(qSEXP);
  Rcpp::traits::input_parameter<arma::vec>::type init(initSEXP);
  Rcpp::traits::input_parameter<NumericVector>::type mu0(mu0SEXP);
  Rcpp::traits::input_parameter<arma::mat>::type lambda0(lambda0SEXP);
  Rcpp::traits::input_parameter<double>::type alpha(alphaSEXP);
  Rcpp::traits::input_parameter<double>::type beta(betaSEXP);
  rcpp_result_gen = Rcpp::wrap(
      iterate_t(Y, df_j, nrep, n, d, gamma, q, init, mu0, lambda0, alpha, beta)
  );
  return rcpp_result_gen;
  END_RCPP
}
// iterate_t_vvv
List iterate_t_vvv(
    arma::mat Y, List df_j, int nrep, int n, int d, double gamma, int q,
    arma::vec init, NumericVector mu0, arma::mat lambda0, double alpha,
    double beta
);
RcppExport SEXP
_BayesSpace_iterate_t_vvv(
    SEXP YSEXP, SEXP df_jSEXP, SEXP nrepSEXP, SEXP nSEXP, SEXP dSEXP,
    SEXP gammaSEXP, SEXP qSEXP, SEXP initSEXP, SEXP mu0SEXP, SEXP lambda0SEXP,
    SEXP alphaSEXP, SEXP betaSEXP
) {
  BEGIN_RCPP
  Rcpp::RObject rcpp_result_gen;
  Rcpp::RNGScope rcpp_rngScope_gen;
  Rcpp::traits::input_parameter<arma::mat>::type Y(YSEXP);
  Rcpp::traits::input_parameter<List>::type df_j(df_jSEXP);
  Rcpp::traits::input_parameter<int>::type nrep(nrepSEXP);
  Rcpp::traits::input_parameter<int>::type n(nSEXP);
  Rcpp::traits::input_parameter<int>::type d(dSEXP);
  Rcpp::traits::input_parameter<double>::type gamma(gammaSEXP);
  Rcpp::traits::input_parameter<int>::type q(qSEXP);
  Rcpp::traits::input_parameter<arma::vec>::type init(initSEXP);
  Rcpp::traits::input_parameter<NumericVector>::type mu0(mu0SEXP);
  Rcpp::traits::input_parameter<arma::mat>::type lambda0(lambda0SEXP);
  Rcpp::traits::input_parameter<double>::type alpha(alphaSEXP);
  Rcpp::traits::input_parameter<double>::type beta(betaSEXP);
  rcpp_result_gen = Rcpp::wrap(iterate_t_vvv(
      Y, df_j, nrep, n, d, gamma, q, init, mu0, lambda0, alpha, beta
  ));
  return rcpp_result_gen;
  END_RCPP
}
// iterate_deconv
List iterate_deconv(
    arma::mat &Y, const List &df_j, const bool tdist, const int nrep,
    const int n, const int n0, const int d, const int d_subspot,
    const double gamma, const int q, const arma::uvec &init, const int subspots,
    const bool verbose, const double jitter_scale, const double c,
    const NumericVector &mu0, const arma::mat &lambda0, const double alpha,
    const double beta, const int thread_num
);
RcppExport SEXP
_BayesSpace_iterate_deconv(
    SEXP YSEXP, SEXP df_jSEXP, SEXP tdistSEXP, SEXP nrepSEXP, SEXP nSEXP,
    SEXP n0SEXP, SEXP dSEXP, SEXP d_subspotSEXP, SEXP gammaSEXP, SEXP qSEXP,
    SEXP initSEXP, SEXP subspotsSEXP, SEXP verboseSEXP, SEXP jitter_scaleSEXP,
    SEXP cSEXP, SEXP mu0SEXP, SEXP lambda0SEXP, SEXP alphaSEXP, SEXP betaSEXP,
    SEXP thread_numSEXP
) {
  BEGIN_RCPP
  Rcpp::RObject rcpp_result_gen;
  Rcpp::RNGScope rcpp_rngScope_gen;
  Rcpp::traits::input_parameter<arma::mat &>::type Y(YSEXP);
  Rcpp::traits::input_parameter<const List &>::type df_j(df_jSEXP);
  Rcpp::traits::input_parameter<const bool>::type tdist(tdistSEXP);
  Rcpp::traits::input_parameter<const int>::type nrep(nrepSEXP);
  Rcpp::traits::input_parameter<const int>::type n(nSEXP);
  Rcpp::traits::input_parameter<const int>::type n0(n0SEXP);
  Rcpp::traits::input_parameter<const int>::type d(dSEXP);
  Rcpp::traits::input_parameter<const int>::type d_subspot(d_subspotSEXP);
  Rcpp::traits::input_parameter<const double>::type gamma(gammaSEXP);
  Rcpp::traits::input_parameter<const int>::type q(qSEXP);
  Rcpp::traits::input_parameter<const arma::uvec &>::type init(initSEXP);
  Rcpp::traits::input_parameter<const int>::type subspots(subspotsSEXP);
  Rcpp::traits::input_parameter<const bool>::type verbose(verboseSEXP);
  Rcpp::traits::input_parameter<const double>::type jitter_scale(
      jitter_scaleSEXP
  );
  Rcpp::traits::input_parameter<const double>::type c(cSEXP);
  Rcpp::traits::input_parameter<const NumericVector &>::type mu0(mu0SEXP);
  Rcpp::traits::input_parameter<const arma::mat &>::type lambda0(lambda0SEXP);
  Rcpp::traits::input_parameter<const double>::type alpha(alphaSEXP);
  Rcpp::traits::input_parameter<const double>::type beta(betaSEXP);
  Rcpp::traits::input_parameter<const int>::type thread_num(thread_numSEXP);
  rcpp_result_gen = Rcpp::wrap(iterate_deconv(
      Y, df_j, tdist, nrep, n, n0, d, d_subspot, gamma, q, init, subspots,
      verbose, jitter_scale, c, mu0, lambda0, alpha, beta, thread_num
  ));
  return rcpp_result_gen;
  END_RCPP
}
// get_spot_subspot_tiles_from_image
Rcpp::List get_spot_subspot_tiles_from_image(
    const Rcpp::CharacterVector &barcodes,
    const arma::mat &spot_center_coordinates, const double spot_radius_pxl,
    const std::string &fullres_image_file, const std::string &tile_image_dir,
    const bool init_vips, const bool shutdown_vips, const int thread_num
);
RcppExport SEXP
_BayesSpace_get_spot_subspot_tiles_from_image(
    SEXP barcodesSEXP, SEXP spot_center_coordinatesSEXP,
    SEXP spot_radius_pxlSEXP, SEXP fullres_image_fileSEXP,
    SEXP tile_image_dirSEXP, SEXP init_vipsSEXP, SEXP shutdown_vipsSEXP,
    SEXP thread_numSEXP
) {
  BEGIN_RCPP
  Rcpp::RObject rcpp_result_gen;
  Rcpp::RNGScope rcpp_rngScope_gen;
  Rcpp::traits::input_parameter<const Rcpp::CharacterVector &>::type barcodes(
      barcodesSEXP
  );
  Rcpp::traits::input_parameter<const arma::mat &>::type
      spot_center_coordinates(spot_center_coordinatesSEXP);
  Rcpp::traits::input_parameter<const double>::type spot_radius_pxl(
      spot_radius_pxlSEXP
  );
  Rcpp::traits::input_parameter<const std::string &>::type fullres_image_file(
      fullres_image_fileSEXP
  );
  Rcpp::traits::input_parameter<const std::string &>::type tile_image_dir(
      tile_image_dirSEXP
  );
  Rcpp::traits::input_parameter<const bool>::type init_vips(init_vipsSEXP);
  Rcpp::traits::input_parameter<const bool>::type shutdown_vips(
      shutdown_vipsSEXP
  );
  Rcpp::traits::input_parameter<const int>::type thread_num(thread_numSEXP);
  rcpp_result_gen = Rcpp::wrap(get_spot_subspot_tiles_from_image(
      barcodes, spot_center_coordinates, spot_radius_pxl, fullres_image_file,
      tile_image_dir, init_vips, shutdown_vips, thread_num
  ));
  return rcpp_result_gen;
  END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BayesSpace_iterate", (DL_FUNC) &_BayesSpace_iterate, 12},
    {"_BayesSpace_iterate_vvv", (DL_FUNC) &_BayesSpace_iterate_vvv, 12},
    {"_BayesSpace_iterate_t", (DL_FUNC) &_BayesSpace_iterate_t, 12},
    {"_BayesSpace_iterate_t_vvv", (DL_FUNC) &_BayesSpace_iterate_t_vvv, 12},
    {"_BayesSpace_iterate_deconv", (DL_FUNC) &_BayesSpace_iterate_deconv, 20},
    {"_BayesSpace_get_spot_subspot_tiles_from_image",
     (DL_FUNC) &_BayesSpace_get_spot_subspot_tiles_from_image, 8},
    {NULL, NULL, 0}
};

RcppExport void
R_init_BayesSpace(DllInfo *dll) {
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
