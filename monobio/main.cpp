#include <iostream>
#include <string.h>
#include "monobio.h"

using namespace std;

int main()
{
  monobio monobio;
  string mensaje;
  cout << "Introduce un mensaje: " << endl;
  cin >> mensaje;
  string mensaje_cifrado;
  mensaje_cifrado = monobio.cifrar(mensaje);
  cout << "Mensaje cifrado: " << mensaje_cifrado << endl;
  string mensaje_descifrado;
  mensaje_descifrado = monobio.descifrar(mensaje_cifrado);
  cout << "Mensaje descifrado: " << mensaje_descifrado << endl;
}
