#include <iostream>
#include <string>

using namespace std;

class polybius
{
public:
  string chart;
  string alphabet;
  int chart_length;
  polybius();
  string cifrar(string mensaje);
  string descifrar(string mensaje_cifrado);
};

polybius::polybius()
{
  chart = "ABCDE";
  alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  chart_length = chart.length();
}

string polybius::cifrar(string mensaje)
{
  int auxiliar_1;
  int auxiliar_2;
  int auxiliar_3;
  string mensaje_cifrado;
  for(int i = 0; i < mensaje.length(); i++)
  {
    auxiliar_1 = alphabet.find(mensaje[i]);
    auxiliar_2 = auxiliar_1 % chart_length;
    auxiliar_3 = auxiliar_1 / chart_length;
    mensaje_cifrado += chart[auxiliar_3];
    mensaje_cifrado += chart[auxiliar_2];
  }
  return mensaje_cifrado;
}

string polybius::descifrar(string mensaje_cifrado)
{
  int auxiliar_1;
  int auxiliar_2;
  string mensaje_descifrado;
  for(int i = 0; i < mensaje_cifrado.length(); i = i + 2)
  {
    auxiliar_1 = chart.find(mensaje_cifrado[i]);
    auxiliar_2 = chart.find(mensaje_cifrado[i + 1]);
    mensaje_descifrado = mensaje_descifrado + alphabet[auxiliar_1 * chart_length + auxiliar_2];
  }
  return mensaje_descifrado;
}
