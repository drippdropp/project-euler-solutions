#include <iostream>
#include <string>
#include <sstream>

std::string Stringify(const int);
std::string ReverseString(const std::string &);
bool IsPalindrome(const std::string &);
int ThreeDigitProducts();

inline int BuildNumber(int a, int b, int c) {
  return  (a * 100000) +
          (b * 10000) +
          (c * 1000) +
          (c * 100) +
          (b * 10) +
          (a);
}

int main(int argc, char ** argv)
{
  ThreeDigitProducts();
	return 0;
}

std::string Stringify(int n) {
	std::ostringstream conversion_proxy;
	conversion_proxy << n;
	return conversion_proxy.str();
}

std::string ReverseString(const std::string &input_string)
{
  std::string copy_input_string = input_string;
  std::reverse(copy_input_string.begin(), copy_input_string.end());
  return copy_input_string;
}

bool IsPalindrome(const std::string &check_string)
{
  return check_string == ReverseString(check_string);
}

int ThreeDigitProducts()
{
  const int starting_digit = 99;
  const int ending_digit = 999;
  int a, b, c, number;
  for (int i = 999; i > 500; --i) {
    c = i%10;
    b = (i/10)%10;
    a = (i/100)%10;
    number = BuildNumber(a, b, c);
    for (int j = 999; j > 500; --j) {
      if (number % j == 0 && ((number/j) < 1000) && ((number/j) > 99)) {
        std::cout << number << " " << number/j << " " << j << std::endl;
        return 0;
      }
    }
  }

  return 0;
}

