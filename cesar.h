#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class Cesar
{
public:
  string cifrado(string mensaje);
  string descifrado(string mensajecifrado);
  Cesar();
private:
  string alfabeto;
  int clave = 3;
  int indice;
};

Cesar::Cesar()
{

  alfabeto = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
 
}


string Cesar::cifrado(string mensaje)
{

  for (int i = 0; i < mensaje.length(); i++)
  {
    if (isalpha(mensaje[i]))
    {
      indice = alfabeto.find(mensaje[i]);
      if(islower(mensaje[i]))
      {
        if(indice + clave >= 26)
        {
          mensaje[i] = alfabeto[(indice + clave) - 26];
        }
        else
        {
          mensaje[i] = alfabeto[indice + clave];
        }
      }
      else
      {
        if(indice + clave >= alfabeto.length())
        {
          mensaje[i] = alfabeto[(indice + clave) - 26];
        }
        else
        {
          mensaje[i] = alfabeto[indice + clave];
        }

      }
    }
  }
  return mensaje;
}

string Cesar::descifrado(string mensajecifrado)
{
  for (int i = 0; i < mensajecifrado.length(); i++)
  {
    if (isalpha(mensajecifrado[i]))
    {
      indice = alfabeto.find(mensajecifrado[i]);
      if(islower(mensajecifrado[i]))
      {
        if(indice - clave < 0)
        {
          mensajecifrado[i] = alfabeto[(indice - clave) + 26];
        }
        else
        {
          mensajecifrado[i] = alfabeto[indice - clave];
        }
      }
      else
      {
        if(indice - clave < 26)
        {
          mensajecifrado[i] = alfabeto[(indice - clave) + 26];
        }
        else
        {
          mensajecifrado[i] = alfabeto[indice - clave];
        }

      }
    }
  }
return mensajecifrado;
}
