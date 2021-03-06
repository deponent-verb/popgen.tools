% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{rm_nonpoly_cols}
\alias{rm_nonpoly_cols}
\title{nonpoly_cols function}
\usage{
rm_nonpoly_cols(G)
}
\arguments{
\item{G:}{A binary NumericMatrix of 0's and 1's.}
}
\value{
A list. Element 1 is a NumericMatrix with subset columns of G. Any columns with only 1's or only 0's
have been removed. Element 2 is vector containing the column indices of the polymorphic
columns. Note we use 1 indexing here for alignment with R.
}
\description{
Takes a NumericMatrix and returns a list. The first element is a thinner matrix where
all the columns with the same element are removed. The second element is a vector of 
the indices of any columns that have all 0's, 1's and NA's. If none such columns exist, 
the vector is NA.
}
\examples{
G <-matrix(sample(0:1, size = 40, replace = TRUE), nc = 8)
rm_nonpoly_cols(G)
}
