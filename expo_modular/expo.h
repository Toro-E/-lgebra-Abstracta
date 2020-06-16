#include <iostream>
#include "NTL/ZZ.h"

using namespace std;
using namespace NTL;

ZZ mod(ZZ x, ZZ y)
{
  ZZ z;
  z = x - x / y * y;
  return z;
}

ZZ exp_mod(ZZ x, ZZ y, ZZ z)
{
  ZZ ans(1);

  while(y != 0)
  {
    if((y & 1) == 1)
    {
      ans = mod(x * ans, z);
    }

    x = mod(x * x, z);

    y >>= 1;
  }
  return ans;
}
