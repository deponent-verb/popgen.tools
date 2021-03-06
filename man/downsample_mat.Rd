% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/downsample_mat.R
\name{downsample_mat}
\alias{downsample_mat}
\title{downsample_mat function}
\usage{
downsample_mat(G, p, seed = NA, min_col = F)
}
\arguments{
\item{G}{: A NumericMatrix designating a binary genome matrix consisting of 1's and 0's.}

\item{p}{: Proportion of columns to downsample.}

\item{seed:}{Random seed for sampling columns. (optional)}

\item{min_col:}{If the number of columns in G is less than min_col, returns the original
matrix G. (optional)}
}
\value{
A smaller NumericMatrix with randomly selected columns from G.
}
\description{
Downsample a NumericMatrix by randomly sampling the columns without replacement.
}
\examples{
seq <-matrix(sample(0:1, size =40 , replace = TRUE), nc = 10)
downsample_mat(seq, 0.2)
}
