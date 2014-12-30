#include <iostream>
#include <cstdio>
#include <cstdlib>

bool IsPrime(long N);

int main(int argc, char** argv)
{
  // we skip '2' to get on an odd number with 3.
  unsigned long count = 2;
  unsigned long position = 3;

  while (count < 10002) {
    if (IsPrime(position)) {
      std::cout << position << " is the " << count << " prime." << std::endl;
      count++;
    }
    position += 2;
  }
  return 0;
}

bool IsPrime(long N)
{
  if (!(N & 1) || N < 3) {
    return N == 2;
  } else {
    for (long i = 3; i < N; i += 2) {
      if (N % i == 0) return false;
    }
    return true;
  }
}
