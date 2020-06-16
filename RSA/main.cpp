#include <iostream>
#include <string.h>
#include <NTL/ZZ.h>
#include <sstream>
#include <cstdlib>
#include <vector>
#include <ctime>

#include "RSA.h"

int main()
{
  string mensaje;
  string mensaje_cifrado;
  rsa cypher;
  rsa rsa(cypher.return_e(), cypher.return_n(), cypher.return_phi_n());
  return 0;

  cout << "Ingrese el mensaje: ";
  getline(cin, mensaje);

  cout << "n: " << cypher.return_n() << endl;
  cout << "phi n: " << cypher.return_phi_n() << endl;
  cout << "e: " << cypher.return_e() << endl;
  cout << "d: " << rsa.return_d() << endl;

  mensaje_cifrado = rsa.cifrar(mensaje);

  cout << "Mensaje cifrado:" << endl;
  cout << mensaje_cifrado;
}
