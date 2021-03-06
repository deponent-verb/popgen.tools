% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/fixed_clus_hap.R
\name{fixed_clus_hap}
\alias{fixed_clus_hap}
\title{fixed_clus_hap function}
\usage{
fixed_clus_hap(G, n_clus, seed = NA)
}
\arguments{
\item{G:}{Binary genome matrix of 0's and 1's. Each column is a SNP, each row is an individual.}

\item{n_clus:}{Number of clusters to cluster the rows of G.}

\item{seed:}{Integer random seed for the clustering algorithm.}
}
\value{
A Numeric vector indicating the clusters to which each row belongs
}
\description{
Takes a genome matrix and clusters the rows into n_clus clusters. If the 
number of unique rows is higher than n_clus, then the number of unique rows
is used instead.
}
\examples{
G = matrix(sample(0:1, size = 40 , replace = TRUE), nc = 8)
fixed_clus_hap(G, 3)
}
