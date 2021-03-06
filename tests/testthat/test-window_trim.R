# This is a R version of the function for testing purposes only

#Trims the outer columns of a matrix. 

#G: NumericMatrix
#cen: index for center
#width: number of columns to include from either side of cen

R_window_trim<-function(G,cen,width){
  
  #take the k/2 snps on the left and right of the center
  start=max(cen-width,0)
  end=min(cen+width,ncol(G))
  
  G2<-G[,(start:end)]
  return(G2)
}

test_that("window_trim working",{
  
  #small case tests with result checked manually
  
  set.seed(1991)
  SNP=10
  nsam=5
  cen=5
  k=2
  seq <-matrix(sample(0:1, size = SNP*nsam, replace = TRUE), nc = SNP)
  output<-window_trim(seq,cen,k)
  start=cen-k
  end=cen+k
  real<-seq[,(start:end)]
  expect_equal(output,real)
  expect_equal(R_window_trim(seq,cen,k),real)
  
  #larger case checked using function in R
  set.seed(800)
  SNP=20
  nsam=6
  cen=10
  k=4
  seq <-matrix(sample(0:1, size = SNP*nsam, replace = TRUE), nc = SNP)
  output<-window_trim(seq,cen,k)
  start=cen-k
  end=cen+k
  real<-seq[,(start:end)]
  expect_equal(output,real)
  expect_equal(R_window_trim(seq,cen,k),real)
  
  set.seed(1991)
  SNP=500
  nsam=10
  cen=250
  k=100
  seq <-matrix(sample(0:1, size = SNP*nsam, replace = TRUE), nc = SNP)
  output<-window_trim(seq,cen,k)
  real<-R_window_trim(seq,cen,k)
  expect_equal(output,real)
  
  #case for when there are insufficient columns on the left
  set.seed(1531)
  SNP=100
  nsam=20
  cen=49
  k=100
  seq <-matrix(sample(0:1, size = SNP*nsam, replace = TRUE), nc = SNP)
  output<-window_trim(seq,cen,k)
  real<-R_window_trim(seq,cen,k)
  expect_equal(output,real)
  
  #case when insufficient columns on the right
  set.seed(1530)
  SNP=100
  nsam=20
  cen=70
  k=100
  seq <-matrix(sample(0:1, size = SNP*nsam, replace = TRUE), nc = SNP)
  output<-window_trim(seq,cen,k)
  real<-R_window_trim(seq,cen,k)
  expect_equal(output,real)
  
  #test with vector
  
  # set.seed(1187)
  # cen=5
  # k=2
  # pos<-runif(0,1,n=10) %>% sort()
  # temp = as.matrix(pos) %>% t()
  # window_trim(pos,cen,k)
  
})

