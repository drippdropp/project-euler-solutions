#include <iostream>
#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv)
{
  long sum;
  for (long i = 200000; i < 1000000000; i += 20) {
    //std::cout << i << std::endl;
    sum = 0;
    for (long j = 1; j <= 20; ++j) {
      sum += i % j;
      //std::cout << i % j << std::endl;
    }
    if (!sum) {
      std::cout << i << " divides ALL!" << std::endl;
      return 0;
    }
  }


  return 0;
}

