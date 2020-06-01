#include <iostream>
#include <string.h>
#include "polybius.h"

using namespace std;

int main()
{
  polybius polybius;
  string mensaje;
  cout << "Introduce un mensaje: " << endl;
  cin >> mensaje;
  string mensaje_cifrado;
  mensaje_cifrado = polybius.cifrar(mensaje);
  cout << "Mensaje cifrado: " << mensaje_cifrado << endl;
  string mensaje_descifrado;
  mensaje_descifrado = polybius.descifrar(mensaje_cifrado);
  cout << "Mensaje descifrado: " << mensaje_descifrado << endl;
}