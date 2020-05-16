#include <iostream>
#include <string>

using namespace std;

class cesar
{
  private:
  int clave;
  int indice;
  public:
  cesar();
  string alfabeto;
  string cifrar(string mensaje);
  string descifrar(string mensaje);
};

cesar::cesar()
{
  alfabeto = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ ";
  clave = 3;
};

string cesar::cifrar(string mensaje)
{
  int tamano;
  tamano = alfabeto.length();
  int auxiliar;
  for(int i = 0; i < mensaje.length(); i++)
  {
    indice = alfabeto.find(mensaje[i]);
    auxiliar = indice + clave;
    if(mensaje[i] == ' ')
    {
      mensaje[i] = alfabeto[indice];
    }
    else
    {
      mensaje[i] = alfabeto[(auxiliar) % tamano]; 
    }
  }
  return mensaje;
}

string cesar::descifrar(string mensaje)
{
  int tamano;
  tamano = alfabeto.length();
  int auxiliar;
  for(int i = 0; i < mensaje.length(); i++)
  {
    indice = alfabeto.find(mensaje[i]);
    auxiliar = indice - clave;
    if(mensaje[i] == ' ')
    {
      mensaje[i] = alfabeto[indice];
    }
    else
    {
      mensaje[i] = alfabeto[(auxiliar) % tamano]; 
    }
  }
  return mensaje;
}