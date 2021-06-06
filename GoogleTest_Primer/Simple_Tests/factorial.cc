#include "factorial.h"

int Factorial(int n)
{
  int fac = 1;
  for(int i = n; i > 0; i --)
    {
      fac *= i;
    }
  return fac;
}
