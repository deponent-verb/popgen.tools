#include <Rcpp.h>
using namespace Rcpp;
#include "vec_equal.h"

//including the header allows us to use that function on this script

// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp 
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//

//' fill_row function
//' takes a NumericVector and adds it as a new row on the bottom of a matrix
//' @param A: A NumericMatrix
//' @param x: A NumericVector
//' @return a new matrix where vector x is bound as the bottom row of A
//' @examples fill_row(A,x)
//' @export
// [[Rcpp::export]]
NumericMatrix fill_row(NumericMatrix A, NumericVector x){
  int colA=A.ncol();
  int size_x=x.size();
  
  if(colA!=size_x){
    try{
      throw 1;
      }
    catch(int e){
      Rcout<<"Error exception "<<e<<std::endl;
      Rcout<<"Dimensions of vector must match the number of columns in NumericMatrix"<<std::endl;
      //throw an null matrix
      NumericMatrix Z;
      return Z;
    }
  }
    
//    Rcout<<t<<std::endl;
    NumericMatrix B (A.nrow()+1, A.ncol());
    for(int i=0;i<A.nrow();i++){
      B(i,_)=A(i,_);
    }
    //insert vector as the last row of matrix
    B(A.nrow(),_)=x;
  return B;
}


//' row_count function
//' 
//' Counts how many times a vector is present as a row in a NumericMatrix.
//' 
//' @param A: NumericMatrix
//' @param x: NumericVector
//' @return integer recording how many times the vector is present as a row in the matrix
//' @export
// [[Rcpp::export]]
int row_count(NumericMatrix A, NumericVector x){
  int ncols=A.ncol();
  
  //check that the number of columns is the same as the dimension of the input vector x
  if(ncols!=x.size()){
    try{
      throw 1;
    }
    catch(int e){
      Rcout<<"row_count error. Exception "<<e<<std::endl;
      Rcout<<"Error: Dimensions of vector x must match the number of columns in matrix A"<<std::endl;
      return 0;
    }
  }
  
  int count=0;
  int num_rows=A.nrow();
  
  for(int i=0;i<num_rows;i++){
    NumericVector row=A(i,_);
//    Rcout<<i<<std::endl;
//    Rcout<<row<<std::endl;
    if(vec_equal(row,x)==TRUE){
        count=count+1;
    }
  }
  
  return count;
}

//' unique_rows function
//' 
//' Takes a NumericMatrix and returns the frequency of all the unique rows as a NumericVectior.
//' 
//' @param A: A general matrix of real values.
//' @return A NumericMatrix containing all the unique rows of A. 
//' @examples unique_rows(A)
//' @export
// [[Rcpp::export]]
NumericVector unique_rows(NumericMatrix A) {
  
  //intialise matrix with dim nrow*nncol
  NumericMatrix B(A.nrow(),A.ncol());
  std::fill( B.begin(), B.end(), NumericVector::get_na());
  //Rcout<<B<<std::endl;
  //Rcout<<"Passed 1"<<std::endl;
  
  //keep track of the count of each haplotype row
  NumericVector freq(A.nrow());
  std::fill( freq.begin(), freq.end(), NumericVector::get_na());
  //Rcout<<"Passed 2"<<std::endl;
  //Rcout<<freq<<std::endl;
  
//  Rcout<<freq<<std::endl;
  
//  Rcout<<B<<std::endl;
  
  //index keeps track of how many rows we have copied over. 
  int index=0;
  
  //loop across all rows
  for(int i=0; i<A.nrow(); i++){
    NumericVector row=A(i,_);
    int frequency=row_count(B,row);
    
    if(frequency==0){
      B(index,_)=row;
      freq(index)=row_count(A,row);
      // Rcout<<"hit"<<std::endl;
      // Rcout<<row<<std::endl;
      // Rcout<<B<<std::endl;
      index+=1; 
    }
  }
//  Rcout<<"Passed 3"<<std::endl;
//  Rcout<<B<<std::endl;

  //Here's the matrix with all the unique rows for testing purposes. 
  //NumericMatrix C= B(Range(0,index-1),Range(0,B.ncol()-1));
  //Rcout<<C<<std::endl;
  
  //remove the NA's from freq
  //freq=freq(Range(0,index-1));
  //NumericVector test=freq(0,2);
  //Rcout<<test<<std::endl;
  NumericVector row_frequencies=na_omit(freq);
  //Rcout<<freq<<std::endl;
  //Rcout<<freq<<std::endl;
  return row_frequencies;
}

//' vec_sort function
//' 
//' Sorts the elements of a NumericVector in descending order
//' 
//' @param x: NumericVector
//' @return NumericVector with elements of x sorted in descending order
//' @examples x<-c(1,8,2,2,3)
//' vec_sort(x)
//' @export
// [[Rcpp::export]]
Rcpp::NumericVector vec_sort(Rcpp::NumericVector x) {
  Rcpp::NumericVector res = Rcpp::clone(x);
  res.sort(true);
  return res;
}







// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically 
// run after the compilation.
//

/*** R
set.seed(1709)
seq <-matrix(sample(0:1, size = 16, replace = TRUE), nc = 4) 
x<-c(1,0,1,1)
seq<-fill_row(seq,x)
seq<-fill_row(seq,x)


unique_rows(seq)
*/

