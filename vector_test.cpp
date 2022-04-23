#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch2/catch.hpp"
#include<cmath>
#include "vector_ops.hpp"


TEST_CASE( "Mean of a vector is computed", "[mean]" ) {
  const int N = 10;

   std::vector<double> v;
   v.resize(N);

   for(int ii=0; ii<= N-1; ++ii){

      v[ii]=1;
   }

   for (int ii=0; ii<=N-1; ++ii){
     std::cout<<v[ii]<<std::endl;
   }

   std::cout<<mean(v)<<std::endl;

  std::vector<double> y;
  y.resize(N);

  for (int ii=0; ii<=N-1; ++ii){
    y[ii] = N;
  }        

  std::cout<<mean(y);

  std::vector<double> z;
  z.resize(N);

  for ( int ii = 0; ii<=N-1; ++ii){

    z[ii]=ii;

  }      
  
 

   REQUIRE(std::fabs(1-(mean(y)/N))<=1.0e-4);

   REQUIRE(std::fabs(1-(2*mean(z)/(N-1)))<=1.0e-4);

   REQUIRE(std::fabs(1-(mean(v)/N))<=1.0e-4);

   
  


}
