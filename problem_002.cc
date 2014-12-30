#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>

long fibo(int n);
long evenFibo();
const unsigned long maxFibo = 4000000;

int main(int argc, char ** argv)
{
  printf("\n%lu\n", evenFibo());
  return 0;
}

long fibo(int n)
{
  if (n < 0) return 0;
  else if (n < 2) return n;
  else {
    return fibo(n-2) + fibo(n-1);
  }
}

long evenFibo()
{
  long sum = 0, tmpFiboValue = 0;
  bool continueSumming = true;
  int n = 0;
  while (continueSumming) {
    tmpFiboValue = fibo(n++);
    printf("%ld\n", tmpFiboValue);
    if (tmpFiboValue <= maxFibo) {
      if (tmpFiboValue % 2 == 0) {
        sum += tmpFiboValue;
        printf("%ld\n", sum);
      }
    }
    else continueSumming = false;
  }
  return sum;
}
