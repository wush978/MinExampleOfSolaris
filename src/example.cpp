#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
void test() {
  throw std::runtime_error("test");
}
