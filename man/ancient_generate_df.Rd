% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/ancient_generate_df.R
\name{ancient_generate_df}
\alias{ancient_generate_df}
\title{ancient_generate_df function}
\usage{
ancient_generate_df(
  sim_list,
  nwins,
  split_type = "base",
  trim_sim = F,
  snp = NA,
  missing_rate,
  trans_prop = 0.776,
  dmg_rate = 0.05,
  ascertain_indices,
  seed = NA,
  impute_method,
  ID = NA,
  denoise_method = "none",
  max_clus = 0.2,
  fixed_clus = NA
)
}
\arguments{
\item{snp}{: Optional. Number of snps to include per simulation. Used only when trim_sim is T.}

\item{missing_rate}{: Probability of elements that are randomly sampled to become NA for each row in G.}

\item{sim_list:}{list of simulation objects}

\item{nwins:}{number of subwindows desired to split each genome matrix per simulation}

\item{split_type:}{Method of splitting the genome matrix. Valid options are "base" and "mut". Default "base".}

\item{trim_sim:}{a logical indicating whether outer snps should be removed. Default is F.}

\item{trans_prop:}{Proportion of columns (i.e. sites) that are chosen to be transition sites.
Default is 0.776.}

\item{dmg_rate:}{Probability of a element in a transition column changing from 0 to 1, or 1 to 0. 
Default is 0.05.}

\item{index:}{A vector of indices indicating the rows of the genome matrix which represent the outgroup.}

\item{ascertain_indices:}{A list of 2-dimensional vectors. Each vector contains the indices of 2 
rows in G for doing the ascertainment bias.}

\item{impute_method:}{A string indicating the imputation method for missingness. Options are
"random" and "zero." See documentation on random_impute and zero_impute for more information.}

\item{ID:}{Optional. A numeric vector if ID values to label each observation according to the simulation 
it came from. If argument is not used, the rows will be labelled 1,2,....}

\item{denoise_method:}{A method for denoising the genome matrix for the purposes of computing the 
haplotype statistics. Default is "none". Options are "cluster","majority_flip" and "fixed_cluster".
See majority_flip and clus_hstats documentation for more information.}

\item{max_clus:}{A number between 0 and 1. Specifies the max number of clusters to consider as a fraction
of the total number of rows in the genome matrix. Only used with the "cluster" denoise method. Default
value is 0.2.}

\item{fixed_clus:}{Only used with the "fixed_cluster" denoise method. Specifies the number of clusters
to make from rows of a genome matrix. Must be a postive integer.}
}
\value{
a dataframe containting the summary statistics for the list of simulation objects
}
\description{
Takes in a list of simulation objects, simulates DNA aging and generates
summary statistics. See the generate_df documentation for more information.
}
\examples{
generate_df(sim_list,nwins = 10, missing_rate = 0.05, index = c(99,100))
}
