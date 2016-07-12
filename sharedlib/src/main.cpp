#include <iostream>

#include "alg.h"

#define NUM 10;

int main()
{
  int a = 10, b = 125, sum = 0;

  sum = Add(a, b);

  std::cout << a << "+" << b << "=" << sum << std::endl;  

  return 0;
}
