# Test discoal command entry----

test_that("Discoal command entered correctly", {
  
  ##tests for constant population size models

  #input parameters
  mu=1e-7
  recomb_rate=1e-9
  Ne=100000
  genome_length=1e5
  samplesize=20
  s=0.1
  fix=1
  discoal_path="~/work/programs/discoal/discoal"
  sweep="hard"

  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=genome_length,samplesize=samplesize,s=s,discoal_path=discoal_path,fix_time=fix,sweep=sweep)
  cmd<-sim$cmd

  alpha=no_scientific(2*Ne*s) #scaled strength of selection
  theta=no_scientific(4*Ne*mu*genome_length) #scaled mutation rate
  rho=no_scientific(4*Ne*recomb_rate*genome_length)  #recomb_rate is the probability of a cross over per basepair of sequence being modelled.
  tau= no_scientific(fix/(4*Ne)) #scaled time for fixation

  test_cmd=paste(discoal_path, no_scientific(samplesize),1,no_scientific(200000),"-t",theta,"-r", rho,
                 "-a", alpha, "-ws", tau)
  expect_equal(cmd,test_cmd)

  seeds=c(1,2)
  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=genome_length,samplesize=samplesize,s=s,discoal_path=discoal_path,fix_time=fix,seed=seeds,sweep=sweep)
  cmd<-sim$cmd
  test_cmd=paste(discoal_path, no_scientific(samplesize),1,no_scientific(200000),"-t",theta,"-r", rho,"-d", seeds[1],seeds[2],
                 "-a", alpha, "-ws", tau)
  expect_equal(cmd,test_cmd)
  
  #test hard sweep command
  sweep="hard"
  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=genome_length,samplesize=samplesize,discoal_path=discoal_path,fix_time=fix,sweep=sweep,s=0.2)
  input_cmd=sim$cmd
  test_cmd=paste(discoal_path, no_scientific(samplesize),1,no_scientific(200000),"-t",theta,"-r", rho,
                 "a", alpha, "-ws", tau)
  
  #test soft sweep
  sweep="soft"
  start_freq=0.2
  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=genome_length,samplesize=samplesize,discoal_path=discoal_path,fix_time=fix,sweep=sweep,start_freq=start_freq,s=0.1)
  input_cmd=sim$cmd
  test_cmd=paste(discoal_path, no_scientific(samplesize),1,no_scientific(200000),"-t",theta,"-r", rho,
                 "a", alpha, "-ws", tau, "-f", start_freq)

  #testing the neutral sweep command

  sweep="neutral_fixation"
  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=genome_length,samplesize=samplesize,discoal_path=discoal_path,fix_time=fix,sweep=sweep)
  input_cmd=sim$cmd
  test_cmd=paste(discoal_path, no_scientific(samplesize),1,no_scientific(200000),"-t",theta,"-r", rho,
                 "-wn", tau)
  expect_equal(input_cmd,test_cmd)
  
  #testing the neutral simulation command
  sweep="neutral"
  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=genome_length,samplesize=samplesize,discoal_path=discoal_path,sweep=sweep)
  input_cmd=sim$cmd
  test_cmd=paste(discoal_path, no_scientific(samplesize),1,no_scientific(200000),"-t",theta,"-r", rho)
  expect_equal(input_cmd,test_cmd)
  
  ## testing command for bottleneck scenarios
  size=c(0.5,1)
  time=c(10,50)
  pop_changes = tibble::tibble(size,time)
  sweep="neutral"
  
  sim = discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,
                    genome_length=genome_length,samplesize=samplesize,
                    discoal_path=discoal_path,sweep=sweep,
                    popsize_changes = pop_changes )
  input_cmd = sim$cmd
  scaled_times = time/(4*Ne)
  test_cmd=paste(discoal_path, no_scientific(samplesize),1,
                 no_scientific(200000),"-t",theta,"-r", rho, "-en",
                 no_scientific(scaled_times[1]), 0, size[1], 
                 "-en", no_scientific(scaled_times[2]),0, size[2])
  expect_equal(input_cmd,test_cmd)
  
  #testing command for simulating multiple demes
  demes = 2
  sample_dist = c(10,10)
  time = 50
  deme_join = tibble::tibble(time = 50, pop1 = 0, pop2 = 1)
  
  sim = discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,
                    genome_length=genome_length,samplesize=samplesize,
                    discoal_path=discoal_path,sweep=sweep,
                    demes = demes, sample_dist = sample_dist, deme_join = deme_join)
  
  test_cmd = paste(discoal_path, no_scientific(samplesize),1,
                   no_scientific(200000),"-t",theta,"-r", rho, 
                   "-p", demes, sample_dist[1], sample_dist[2],
                   "-ed", deme_join$time/(4*Ne), deme_join$pop1, deme_join$pop2)
  expect_equal(sim$cmd, test_cmd)
})

test_that("Discoal command converted to neutral correctly",{
  #test that s=0 converts into a neutral command
  mu=1e-7
  recomb_rate=1e-9
  Ne=100000
  genome_length=1e5
  samplesize=10
  s = 0
  fix=1
  discoal_path="~/work/programs/discoal/discoal"
  sweep="hard"
  
  #I am supposed to produce a warning. 
  sim = suppressWarnings( 
    discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=genome_length,
                    samplesize=samplesize,discoal_path=discoal_path,
                    sweep=sweep,fix_time = fix)
  )
  
  input_cmd=sim$cmd
  theta=no_scientific(4*Ne*mu*genome_length) 
  rho=no_scientific(4*Ne*recomb_rate*genome_length)  
  test_cmd=paste(discoal_path, no_scientific(samplesize),1,no_scientific(200000),"-t",theta,"-r", rho)
  expect_equal(test_cmd,input_cmd)
  expect_equal("neutral",sim$sweep)
})

# Test random seeds extraction----

test_that("Seed extraction successful",{

  #input parameters
  set.seed(123)
  mu=runif(1,1e-8,1e-7)
  recomb_rate=runif(1,1e-10,1e-9)
  Ne=runif(1,1000,1000000)
  genome_length=1e5
  samplesize=runif(1,1,50)
  s=runif(1,1e-3,0.1)
  fix=runif(1,1,5)
  discoal_path="~/work/programs/discoal/discoal"
  seed1=floor(runif(1,1,9e6))
  seed2=floor(runif(1,1,9e6))
  seeds=c(seed1,seed2)
  
  sweep="neutral"
  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=genome_length,samplesize=samplesize,discoal_path=discoal_path,seed=seeds,sweep=sweep)
  used_seed<-sim$seeds
  expect_equal(used_seed,seeds)
  
  sweep="neutral_fixation"
  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=genome_length,samplesize=samplesize,discoal_path=discoal_path,fix_time=fix,seed=seeds,sweep=sweep)
  used_seed<-sim$seeds
  expect_equal(used_seed,seeds)
  
  sweep="hard"
  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=genome_length,samplesize=samplesize,s=s,discoal_path=discoal_path,fix_time=fix,seed=seeds,sweep=sweep)
  used_seed<-sim$seeds
  expect_equal(used_seed,seeds)
  
  sweep="soft"
  start_freq=0.2
  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=genome_length,samplesize=samplesize,s=s,discoal_path=discoal_path,fix_time=fix,seed=seeds,sweep=sweep,start_freq = start_freq)
  used_seed<-sim$seeds
  expect_equal(used_seed,seeds)
})

# Test segsite extraction ----

test_that("Segsites extraction successful",{
  
  #testing for hard sweeps
  
  #input parameters
  mu=2e-8
  recomb_rate=1e-9
  Ne=100
  genome_length=1e6
  samplesize=30
  s=0.1
  fix=2
  discoal_path="~/work/programs/discoal/discoal"
  seeds=c(2019,1688)
  sweep="hard"

  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=genome_length,samplesize=samplesize,s=s,discoal_path=discoal_path,fix_time=fix,seed=seeds,sweep=sweep)
  extracted_seg=sim$num_seg
  #print(extracted_seg)
  #Ran in terminal to get this
  actual_seg=10
  expect_equal(extracted_seg,actual_seg)
  
  #test case of having no segregating sites
  samplesize=1
  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=genome_length,samplesize=samplesize,s=s,discoal_path=discoal_path,fix_time=fix,seed=seeds,sweep=sweep)
  expect_equal(sim,"Simulation produced no segregating sites")

  #test for neutral simulations
  sweep="neutral"
  mu=2e-6
  recomb_rate=1e-9
  Ne=100
  genome_length=1e5
  samplesize=30
  
  
  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=genome_length,samplesize=samplesize,discoal_path=discoal_path,seed=seeds,sweep=sweep)
  extracted_seg=sim$num_seg
  actual_seg=346
  expect_equal(extracted_seg,actual_seg)
  
  #test for neutral fixation
  sweep="neutral_fixation"
  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=genome_length,samplesize=samplesize,discoal_path=discoal_path,seed=seeds,fix_time=fix,sweep=sweep)
  extracted_seg=sim$num_seg
  actual_seg=277
  expect_equal(extracted_seg,actual_seg)
  
  freq=0.2
  sweep="soft"
  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,s=0.2,genome_length=genome_length,samplesize=samplesize,discoal_path=discoal_path,seed=seeds,fix_time=fix,sweep=sweep,start_freq = freq)
  extracted_seg=sim$num_seg
  actual_seg=118
  expect_equal(extracted_seg,actual_seg)
})

#Test position vector extraction ----

test_that("Postions extraction successful",{
  #input parameters
  mu=2e-8
  recomb_rate=1e-8
  Ne=1000000
  genome_length=1e5
  samplesize=3
  s=0.1
  fix=2
  discoal_path="~/work/programs/discoal/discoal"
  seeds=c(1453,1688)
  sweep="hard"

  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=genome_length,samplesize=samplesize,s=s,discoal_path=discoal_path,fix_time=fix,seed=seeds,sweep=sweep)
  extracted_pos=sim$pos
  #Ran the command in terminal to get these numbers
  actual_pos=c(0.575357, 0.592501, 0.677530, 0.991324 )
  expect_equal(extracted_pos,actual_pos)
})

#Test genome matrix extraction-----

test_that("Genome matrix extraction successful",{
  #fix. Code acts funny when there is only one segsite
  
  #Hard sweep test
  #input parameters
  mu=2e-7
  recomb_rate=1e-8
  Ne=500
  genome_length=1e5
  samplesize=5
  s=0.1
  fix=2
  discoal_path="~/work/programs/discoal/discoal"
  seeds=c(1688,1707)
  sweep="hard"

  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=genome_length,samplesize=samplesize,s=s,discoal_path=discoal_path,fix_time=fix,seed=seeds,sweep=sweep)

  #Obtained via directly running command in terminal
  actual=cbind(c(1,0,0,0,0),c(0,0,0,1,0),c(0,0,0,1,0),c(1,0,0,0,0),c(0,1,0,0,0))
  extract=matrix(unlist(sim$genomes),nrow=samplesize)
  expect_equal(actual,extract)
  
  #Soft sweep test
  #input parameters
  mu=2e-7
  recomb_rate=1e-8
  Ne=100
  genome_length=1e5
  samplesize=5
  s=0.2
  fix=2
  seeds=c(1688,1707)
  sweep="soft"
  freq=0.4
  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=genome_length,samplesize=samplesize,s=s,discoal_path=discoal_path,fix_time=fix,seed=seeds,sweep=sweep,start_freq = freq)
  actual=cbind(c(1,0,0,0,0),c(0,0,1,0,0))
  extract=matrix(unlist(sim$genomes),nrow=samplesize)
  expect_equal(actual,extract)
})

#Test bottleneck info extraction----

test_that("Bottleneck recorded correctly",{
  
  #Hard sweep test, manual
  
  mu=2e-7
  recomb_rate=1e-8
  Ne=600
  genome_length=1e5
  samplesize=20
  s=0.05
  fix=1
  discoal_path="~/work/programs/discoal/discoal"
  seeds=c(1707,1801)
  sweep="hard"
  bottleneck=tibble::tibble(size=c(0.9,1),time=c(5,10))
  
  
  sim<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,
                   genome_length=genome_length,samplesize=samplesize,
                   s=s,discoal_path=discoal_path,fix_time=fix,seed=seeds,
                   sweep=sweep, popsize_changes = bottleneck)
  
  expect_equal(sim$bottle_time1, bottleneck$time[1])
  expect_equal(sim$bottle_time2, bottleneck$time[2])
  expect_equal(sim$bottle_size1, bottleneck$size[1])
  expect_equal(sim$bottle_size2, bottleneck$size[2])
  
})

#run this if you want to check s=0 convert to neutral warning

# test_that("sum_stat works",{
#   
#   #test if sweep is converted to neutral if s=0 
#   mu=2e-8
#   recomb_rate=1e-9
#   Ne=1000
#   nBases=1e6
#   samplesize=50
#   s=0
#   fix=4
#   discoal_path="~/work/programs/discoal/discoal"
#   sweep_type="hard"
#   nwins=10
#   id=1
#   temp<-discoal_sim(mu=mu,recomb_rate=recomb_rate,Ne=Ne,genome_length=nBases,samplesize=samplesize,s=s,discoal_path=discoal_path,sweep=sweep_type)
#   #This was meant to produce a warning. 
#   expect_equal("neutral",temp$sweep)
# })
 
