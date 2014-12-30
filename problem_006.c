#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv)
{
  unsigned long sum_of_squares;
  unsigned long sum;
  for (int i = 1; i <= 100; ++i) {
    sum += i;
    sum_of_squares += (long) pow(i,2);
  }
  unsigned long sqr_of_sum = pow(sum,2);
  printf("%lu", sqr_of_sum - sum_of_squares);
  return 0;
}


