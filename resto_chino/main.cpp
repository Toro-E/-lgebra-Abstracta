#include <iostream>

#include "resto_chino.h"

using namespace std;

int main()
{
  int nro;
  cout << "Número de operaciones: ";
  cin >> nro;
  int mods[nro];
  int xs[nro];
  cout << "Ingrese las variables:" << endl;
  for(int i = 0; i < nro; i++)
  {
    cin >> xs[i];
    cin >> mods[i];
  }
  rc(mods, xs, nro);
}
