#include <iostream>
#include <string>

using namespace std;

class vigenere
{
  private:
  string clave;

  public:
  string alfabeto;

  vigenere();
  
  string cifrar(string mensaje);

  string descifrar(string mensaje);
};

vigenere::vigenere()
{
  clave = "Jose Nicolas Palo Zuniga 191-10-44905";
  alfabeto = "abcdefghijklmnopqrstuvwxyz -ABCDEFGHIJKLMNOPQRSTUVWXYZ,.0123456789";
};

string vigenere::cifrar(string mensaje)
{
  int indice1, indice2, indice3;
  int tamano;
  tamano = alfabeto.length();
  
  for(int i = 0, j = 0; i < mensaje.length(); i++, j++)
  {
    indice1 = alfabeto.find(mensaje[i]);
    indice2 = alfabeto.find(clave[j % clave.length()]);
    indice3 = (indice1 + indice2) % tamano;
    mensaje[i] = alfabeto[indice3];
  }
  return mensaje;
}

string vigenere::descifrar(string mensaje)
{
  int indice1, indice2, indice3;
  int tamano;
  tamano = alfabeto.length();
  
  for(int i = 0, j = 0; i < mensaje.length(); i++, j++)
  {
    indice1 = alfabeto.find(mensaje[i]);
    indice2 = alfabeto.find(clave[j % clave.length()]);
    indice3 = (indice1 - indice2 + tamano) % tamano;
    mensaje[i] = alfabeto[indice3];
  }
  return mensaje;
}