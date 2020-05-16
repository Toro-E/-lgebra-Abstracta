#include <iostream>
#include <string>

#include "cesar.h"

using namespace std;

int main() {
  cesar emisor;
  cesar receptor;
  string msg;
  string msg_cifrado;
  string msg_descifrado;
  msg = "Todo lo que existe nace sin razon, se prolonga por debilidad, y muere por casualidad.";
  msg_cifrado = emisor.cifrar(msg);
  msg_descifrado = receptor.descifrar(msg_cifrado);

  cout << "Mensaje cifrado:" << endl;
  cout << msg_cifrado;
  cout << endl << "Mensaje descifrado: " << endl;
  cout << msg_descifrado;
}