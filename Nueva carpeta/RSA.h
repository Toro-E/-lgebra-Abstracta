#include <iostream>
#include <string.h>
#include <NTL/ZZ.h>
#include <sstream>
#include <cstdlib>
#include <vector>
#include <ctime>

using namespace std;
using namespace NTL;

class rsa
{
public:
  rsa();
  rsa(ZZ E, ZZ N, ZZ phi_N);
  // Retornar claves ---------------------
  ZZ return_n();
  ZZ return_phi_n();
  ZZ return_e();
  ZZ return_d();
  //--------------------------------------
  ZZ mod(ZZ x, ZZ y);
  ZZ MCD(ZZ x, ZZ y);
  int mod(int x, int y);
  ZZ exp_mod(ZZ x, ZZ y, ZZ z);
  ZZ inversa(ZZ x, ZZ y);
  string convertir(ZZ x);
  string cifrar(string mensaje);
  void claves_pq();
  //string descifrar(string mensaje_cifrado);

  string alfabeto = "ABCDEFGHIJKLMNOPQRSTUVWXYZ,.-( )abcdefghijklmnopqrstuvwxyz<>*1234567890";

private:
  ZZ n, phi_n;
  ZZ e, d;
};

rsa::rsa()
{
  n = 0;
  phi_n = 0;
  e = 0;
  d = 0;
  claves_pq();
}

int rsa::mod(int x, int y)
{
  int z;
  z = x - x / y * y;
  return z;
}

ZZ rsa::mod(ZZ x, ZZ y)
{
  ZZ z;
  z = x - x / y * y;
  return z;
}

ZZ rsa::MCD(ZZ x, ZZ y)
{
  if(y == 0)
  {
    return x;
  }
  return MCD(y, mod(x, y));
}

rsa::rsa(ZZ E, ZZ N, ZZ phi_N)
{
  n = N;
  phi_n = phi_N;
  e = E;
  d = inversa(E, phi_N);
}

void rsa::claves_pq()
{
  vector <long long> nros_primos;

  nros_primos.push_back(2);

  for(int i = 0; i <= 1000000; i++) // ------> Números primos de 5 cifras.
  {
    nros_primos.push_back(i);
  }

  int x = 1;
  int y = 2;

  while(y < nros_primos.size() && nros_primos[x] * nros_primos[x] < 1000000)
  {
    if(nros_primos[y] % nros_primos[x] == 0)
    {
      nros_primos.erase(nros_primos.begin() + y);
    }
    else
    {
      y = y + 1;
    }
    if(y == nros_primos.size())
    {
      x = x + 1;
      y = x + 1;
    }
  }
  srand(time(NULL));
  int indice1;
  int indice2;

  do
  {
    indice1 = mod(rand(), nros_primos.size());
  } while (indice1 < 9592);

  do
  {
    indice2 = mod(rand(), nros_primos.size());
  } while (indice2 < 9592);

  ZZ p, q;
  p = ZZ(nros_primos[indice1]);
  q = ZZ(nros_primos[indice2]);
  n = p * q;
  phi_n = (p - 1) * (q - 1);

  do
  {
    e = rand();
    e = mod(e, phi_n);
  } while(MCD(e, phi_n) != 1);
}

ZZ rsa::return_n()
{
  return n;
}

ZZ rsa::return_phi_n()
{
  return phi_n;
}

ZZ rsa::return_e()
{
  return e;
}

ZZ rsa:: return_d()
{
  return d;
}

string rsa::convertir(ZZ x)
{
  stringstream bufer;
  bufer << x;
  return bufer.str();
}

ZZ rsa::inversa(ZZ x, ZZ y)
{
  ZZ t;
  ZZ q;

  ZZ s1;
  s1 = conv<ZZ>(1);
  ZZ s2;
  s2 = conv<ZZ>(0);
  ZZ r = y;
  while(y > 0)
  {
    q = x / y;
    t = x - q * y;
    x = y;
    y = t;
    t = s1 - q * s2;
    s1 = s2;
    s2 = t;
  }
  if(s1 < 0)
  {
    s1 = s1 + r;
  }
  return s1;
}

string rsa::cifrar(string mensaje)
{
  string mensaje_cifrado;
  ZZ auxiliar;
  ZZ expo_mod;
  ZZ p;

  for(int i = 0; i < mensaje.length(); i++)
  {
    expo_mod = 1;
    p = alfabeto.find(mensaje[i]);
    auxiliar = e;

    while (auxiliar > 0)
    {
      if(mod(auxiliar, ZZ(2)) == 1)
      {
        expo_mod = mod(expo_mod * p, n);
      }
      p = mod(p * p, n);
      auxiliar = auxiliar / 2;
    }
    mensaje_cifrado = mensaje_cifrado + convertir(expo_mod);
  }
  return mensaje_cifrado;
}
