#include <iostream>
#include <string>
#include <ctype.h>

#include "funciones.h"

using namespace std;

int main() 
{
  //Ejercicio 18.7 a
  string a("cifrado");
  string b((a));
  //rot13(a, b);
  
  //Ejercicio 18.7 b
  string c("pvsenqb");
  string d((c));
  //descifrar_rot13(c, d);

  //Ejercicio 18.11
  string e("José");
  string f("Palo");
  //unir_palabras(e, f);

  //Ejercicio 18.12
  string g("ahorcado");
  //ahorcado(g); //ya miss

  //Ejercicio 18.19
  string h("Lorem ipsum dolor sit amet, consectetur adipiscing elit. Phasellus hendrerit arcu ac libero fringilla, ac porta elit tincidunt.");
  //reemplazar(h);

  //Ejercicio 18.21
  string i("insertar");
  //insertar(i);

  //Ejercicio 18.22
  string j("invertir");
  //invertir(j);

  //Ejercicio práctica 1
  string k("convertir");
  //convertir(k);

  //Ejercicio práctica 2
  /*
  Capacity es la cantidad máxima de caracteres que un string puede almacenar, size es la cantidad de caracteres que hay en un string
  */

  //Ejerciciop práctica 3
  string l("ArRaY");
  //invertir_Mm(l);

  //Ejercicio práctica 4
  //unir_numeros();

  //Ejercicio práctica 5
  //mil_caracteres();

  //Ejercicio práctica 6
  //convertir_frase();

  //Ejercicio práctica 7
  string o("Como poco coco como, poco coco compro.");
  string p("coco");
  //contar(o,p);

  //Ejercicio práctica 8
  //imprimir_elementos();

  //Ejercicio práctica 9
  //insertar();

  //Ejercicio práctica 10
  string q("Cuando te diga que te creo, no me creas, porque ya no creo lo que creo.");
  string r("creo");
  string s("temo");
  //buscar_y_reemplazar(q, r, s);
  
  return 0;
}