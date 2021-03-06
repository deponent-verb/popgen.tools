% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{het_finder}
\alias{het_finder}
\title{het_finder function}
\usage{
het_finder(G)
}
\arguments{
\item{G:}{A NumericMatrix}
}
\value{
A NumericVector containing the indices of the columns with different elements.
}
\description{
Searches through the columns of a NumericMatrix and finds all the columns that 
contain different elements. Returns the indices of these columns. Note that 
this function uses 1 indexing to suit R.
}
\examples{
 G <-matrix(sample(0:1, size = 16, replace = TRUE), nc = 4), het_finder(G)
}
