#include <iostream>

#include "NTL/ZZ.h"
#include "expo.h"

using namespace std;
using namespace NTL;

int main()
{
  ZZ a;
  ZZ b;
  ZZ c;

  cout << "Ingresa la base: ";
  cin >> a;

  cout << "Ingresa el exponente: ";
  cin >> b;

  cout << "Ingresa el módulo: ";
  cin >> c;

  ZZ respuesta = exp_mod(a, b, c);
  cout << "Resultado: " << respuesta;
}
