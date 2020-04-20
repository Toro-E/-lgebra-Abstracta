#include <iostream>
#include <string>
#include "clase.h"
using namespace std;

int main() 
{
  Vigenere vigenere;
  string mensaje,mensaje_cifrado,mensaje_descifrado;
  //getline(cin,mensaje);
  mensaje = "Puedo escribir los versos mas tristes esta noche. Escribir, por ejemplo La noche esta estrellada, y tiritan, azules, los astros, a lo lejos. El viento de la noche gira en el cielo y canta.";
  mensaje_cifrado = vigenere.cifrarabc(mensaje);
  mensaje_descifrado = vigenere.descifrarabc(mensaje_cifrado);

  cout<< "Mensaje cifrado:" << endl <<mensaje_cifrado<<endl << endl;
  cout<< "Mensaje descifrado:" << endl << mensaje_descifrado<<endl;
}