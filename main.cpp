#include <iostream>
#include <string.h>
#include "cesar.h"

using namespace std;

int main()
{
  Cesar emisor;
  Cesar receptor;
  string mensaje;
  getline(cin,mensaje);
  //cout<<receptor.descifrado(emisor.cifrado(mensaje));
  string mensajecifrado = emisor.cifrado(mensaje);
  string mensajedescifrado = receptor.descifrado(mensajecifrado);
  cout << "Mesnaje cifrado: " << mensajecifrado;
  cout << endl <<"Mensaje descifrado: " << mensajedescifrado;
}