#include <iostream>
#include <string.h>

using namespace std;

class inversa
{
public:
  int x, y;
  inversa(int numero, int base);
  int modulo(int a, int b);
  int MCD(int a, int b);
  int euclides_extendido(int a, int b);
  void _inversa();
};

inversa::inversa(int numero, int base)
{
  x = numero;
  y = base;
}

int inversa::modulo(int a, int b)
{
  int resto;
  resto = a - ((a / b) * b);
  return resto;
}

int inversa::MCD(int a, int b)
{
  int resto;
  resto = modulo(a, b);
  while (resto > 0)
  {
    a = b;
    b = resto;
    resto = modulo(a, b);
  }
  return b;
}

int inversa::euclides_extendido(int a, int b)
{
  int q, s, t, r;

  int r1 = x;
  int r2 = y;
  int s1 = 1;
  int s2 = 0;
  int t1 = 0;
  int t2 = 1;

  while(r2 > 0)
  {
    q = r1 / r2;
    r= r1 - q * r2;
    r1 = r2;
    r2 = r;

    s = s1 - q * s2;
    s1 = s2;
    s2 = s;

    t = t1 - q * t2;
    t1 = t2;
    t2 = t;
  }
  s = s1;
  t = t1;
  return s;
}

void inversa::_inversa()
{
  if(MCD(x, y) == 1)
  {
    int i = euclides_extendido(x, y);
    if(modulo((i * x), y) == 1)
    {
      cout << "Inversa del número " << x << " en base " << y << " es " << i;
    }
    else
    {
      cout << x << " no tiene inversa en base " << y;
    }
  }
  else
  {
    cout << x << " no tiene inversa en base " << y;
  }
}
