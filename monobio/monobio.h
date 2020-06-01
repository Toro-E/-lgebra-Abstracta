#include <iostream>
#include <string>

using namespace std;

class monobio
{
public:
  string alphabet;
  monobio();
  string cifrar(string mensaje);
  string descifrar(string mensaje_cifrado);
};

monobio::monobio()
{
  alphabet = "D-ENAR-IOSBCFGHJKLMÑPQTUVWXYZ.";
}

string monobio::cifrar(string mensaje)
{
  int auxiliar;
  string mensaje_cifrado;
  for(int i = 0; i < mensaje.length(); i++)
  {
    auxiliar = alphabet.find(mensaje[i]);
    auxiliar = auxiliar + 1;
    if(auxiliar > 20)
    {
      mensaje_cifrado = mensaje_cifrado + "7";
    }
    if(auxiliar > 10 && auxiliar < 21)
    {
      mensaje_cifrado = mensaje_cifrado + "2";
    }
    mensaje_cifrado = mensaje_cifrado + to_string(auxiliar % 10);
  }
  return mensaje_cifrado;
}

string monobio::descifrar(string mensaje_cifrado)
{
  string mensaje_descifrado;
  string auxiliar_1;
  int auxiliar_2;
  int alphabet_length = alphabet.length();
  for(int i = 0; i < mensaje_cifrado.length(); i++)
  {
    if(mensaje_cifrado[i] == '7')
    {
      auxiliar_1 = mensaje_cifrado[i + 1];
      auxiliar_2 = stoi(auxiliar_1);
      mensaje_descifrado = mensaje_descifrado + alphabet[(auxiliar_2 + 20 % alphabet_length) - 1];
      i = i + 1;
    }
    else if(mensaje_cifrado[i] == '2')
    {
      auxiliar_1 = mensaje_cifrado[i + 1];
      auxiliar_2 = stoi(auxiliar_1);
      mensaje_descifrado = mensaje_descifrado + alphabet[(auxiliar_2 + 10 % alphabet_length) - 1];
      i = i + 1;
    }
    else
    {
      auxiliar_1 = mensaje_cifrado[i];
      auxiliar_2 = stoi(auxiliar_1);
      mensaje_descifrado = mensaje_descifrado + alphabet[(auxiliar_2 % alphabet_length) - 1];
    }
  }
  return mensaje_descifrado;
}
