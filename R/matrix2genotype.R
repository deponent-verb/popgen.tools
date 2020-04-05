#' matrix2genotype function
#' 
#' Converts a binary genome matrix into a dataframe of genotype S3 objects as defined
#' in the genetics package in R. The first pair of rows from the top will be the first 
#' genotype.The second pair of rows will be the second genotype and so on. Hence, the 
#' input matrix must have an even number of rows. 
#'
#' @param G: A binary genome matrix. Columns are mutations, rows are the sampled chromosomes. 
#' G must have an even number of rows. 
#' @return A dataframe of genotype objects. 
#' @export
#'
#' @examples   seq = matrix(sample(0:1, size = 5*10, replace = TRUE), nc = 5) 
#'  matrix2genotype(seq)
#' 
#' @importFrom genetics genotype
matrix2genotype = function(G){

  nsam = nrow(G)
  
  #check input
  if((nsam %% 2) != 0){
    msg = paste("The number of rows in G must be even.")
    stop(msg)
  }
  
  if(is.numeric(G) == F){
    msg = paste ("Input matrix must be numeric")
    stop(msg)
  }
  
  #loop over all pairs of rows and convert to genotypes
  indices = seq(1,nsam-1,by=2)
  diploids = lapply(1:length(indices), function(i) NA)

  counter = 1
  for(i in indices){
    diploids[[counter]] = genetics::genotype(G[i,],G[i+1,])
    counter = counter + 1
  }
  
  names(diploids) = string_labels("g",length(indices))
  df= do.call(data.frame, diploids)
  
  return(df)
}