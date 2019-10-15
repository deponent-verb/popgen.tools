#include <Rcpp.h>
using namespace Rcpp;
#include "vec_equal.h"
#include "unique_rows.h"

// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//

//remember param is singular for the documentation

//' h_stats function
//' 
//' Computes the h1,h2,h12,h123 statistics. For more information see https://doi.org/10.1371/journal.pgen.1005004.
//' 
//' @param G: A binary genome matrix consisting of 1's and 0's. Each column is a SNP. Each row is a sampled individual. 
//' @return A numeric vector of h stats. (h1,h2,h12,h123)
//' @examples h_stats(G)
//' @export
// [[Rcpp::export]]
NumericVector h_stats(NumericMatrix G) {
  
  //compute haplotype frequencies and store them in vector p
  NumericVector haplo_counts=unique_rows(G);
  int num_haplotypes=haplo_counts.size();
  int nsam=G.nrow();
  NumericVector p=haplo_counts*(1.0/nsam);
//  Rcout<<"Before "<<p<<std::endl;
  p=vec_sort(p);
//  Rcout<<"Sorted "<<p<<std::endl;

  
  
  //compute h1. Sum of squares of all haplotype frequencies. 
  double h1=0;
  for(int i=0; i<num_haplotypes; i++){
    h1=h1+p[i]*p[i];
  }
//  Rcout<<"h1 " << h1<<std::endl;
  
   
  //the h12 stat combines the frequencies of the top 2 most common haplotypes into one haplotype. We use a shortcut to compute it. 
  double h12=h1+2*p[0]*p[1];
//  Rcout<<"h12 "<<h12<<std::endl;

  //h3 stat is like h2 but takes top 3
  double h123=h12+2*p[0]*p[2]+2*p[1]*p[2];
//  Rcout<<"h123 "<<h123<<std::endl;

  //h2. This is like h1 but removes the first haplotype.
  double h2=h1-p[0]*p[0];
//  Rcout<<"h2 "<<h2<<std::endl;

  //Putting everything together
  
  NumericVector h_stats=NumericVector::create(h1,h2,h12,h123);

  
  return h_stats;
}


// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.
//

/*** R
set.seed(800)
seq <-matrix(sample(0:1, size = 16, replace = TRUE), nc = 4)
seq<-rbind(seq,seq[2,])
seq<-rbind(seq,seq[4,])
seq<-rbind(seq,seq[3,])
h_stats(seq)
*/
