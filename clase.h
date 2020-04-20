#include <iostream>
#include <string>
using namespace std;

class Vigenere
{
  private:
  string clave;
  public:
  string alfabeto;
  Vigenere();
  string cifrarabc(string mensaje);
  string descifrarabc(string mensaje);
  string cifrar_insertar(string mensaje);
  //string cifrarascii(string mensaje);
}; 

Vigenere::Vigenere()
{
  alfabeto = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ,.";
  clave = "pabloneruda";
}

string Vigenere::cifrarabc(string mensaje)
{
  int indice, indice2, indice3, tamaño;
  tamaño = alfabeto.length();

  for(int i = 0, j = 0; i < mensaje.length(); i++, j++)
  {
    indice = alfabeto.find(mensaje[i]);
    if(isalpha(mensaje[i]))
    {
      if(islower(mensaje[i]))
      {
        indice2 = alfabeto.find(clave[j % clave.length()]);
        indice3 = (indice + indice2) % 26;
        mensaje[i] = alfabeto[indice3];
      }
      else
      {
        indice2 = alfabeto.find(clave[j % clave.length()]);
        indice3 = (indice + indice2) % 53;
        mensaje[i] = alfabeto[indice3];
      }
    }
    else
    {
      j--;
    }
  }
  return mensaje;
}

string Vigenere::descifrarabc(string mensaje)
{
  int indice, indice2, indice3, tamaño;
  tamaño = alfabeto.length();
  
  for(int i = 0, j = 0; i < mensaje.length(); i++, j++)
  {
    indice = alfabeto.find(mensaje[i]);
    if(isalpha(mensaje[i]))
    {
      if(islower(mensaje[i]))
      {
        indice2 = alfabeto.find(clave[j % clave.length()]);
        indice3 = ((indice - indice2) + 26) % 26;
        mensaje[i] = alfabeto[indice3];
      }
      else
      {
        indice2 = alfabeto.find(clave[j % clave.length()]);
        indice3 = ((indice - indice2) + 53) % 53;
        mensaje[i] = alfabeto[indice3];
      }
    }
    else
    {
      j--;
    }
  }
  return mensaje;
}