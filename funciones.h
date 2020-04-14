#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;
 
//Ejercicios del libro

//Ejercicio 18.7 a
void rot13 (string x, string y)
{
  for (int i = 0; i < x.length(); i++)
  {
    y[i] = x[i] + 13; 
    if (!(isalpha(y[i])))
    {
      y[i] = y[i] - 26;
    }
  }
  cout << "Original: " << x << endl;
  cout << "Cifrado: " << y << endl;
}

//Ejercicio 18.7 b
void descifrar_rot13 (string x, string y)
{
  for (int i = 0; i < x.length(); i++)
  {
    if(isupper(x[i]))
    {
      x[i] = tolower(x[i]);
    }
    y[i] = y[i] + 13;
    if (!(isalpha(y[i])))
    {
      y[i] = y[i] - 26;
    }
  }
  cout << "Original: " << x << endl;
  cout << "Descifrado: " << y << endl;
}

//Ejercicio 18.11

void unir_palabras (string x, string y)
{
  string z (x + " " + y);
  cout << "Nombre completo: " << z << endl;
}

//Ejercicio 18.12

/*
void errores(int x)
{
  cout << endl;
  if(x == 0)
  {
    return;
  }
  else if(x == 1)
  {
    cout << "O" << endl;
  }
  else if(x == 2)
  {
    cout << "O" << endl;
    cout << "|" << endl;
  }
  else if(x == 3)
  {
    cout << " O" << endl;
    cout << "/|" << endl;
  }
  else if(x == 4)
  {
    cout << " O" << endl;;
    cout << "/|\";
  }
  else if(x == 5)
  {
    cout << " O" << endl;
    cout << "/|\" << endl;
    cout << " |" << endl;
  }
  else if(x == 6)
  {
    cout << " O" << endl;
    cout << "/|\" << endl;
    cout << " |" << endl;
    cout << "/" << endl;
  }
  else
  {
    cout << " O" << endl;
    cout << "/|\" << endl;
    cout << " |" << endl;
    cout << "/ \" << endl;
    cout << "Perdiste";
  }
}
*/

void letra(char x, string y, string &z)
{
  for(int i = 0; i < y.length(); i++)
  {
    if(x == y[i])
    {
      z[i] = x;
    } 
  }  
  cout << z << endl;        
}

void ahorcado(string x)
{
  char y;
  string z = x;
  for(int i = 0; i < z.length(); i ++)
  {
    z[i] = 'X';
  }
  for(int j = 0; j < z.length(); j++)
  {
    cout << "Elija una letra: ";
    cin >> y;
    letra(y,x,z);
  }
}

//Ejercicio 18.19

void insertar(string x)
{
  string y("******");
  x.insert((x.length()/2),y);
  cout << x << endl;
}

//Ejercicio 18.21
/*
void reemplazar(string a)
{
  for(int i = 0; i < a.size(); i++)
    {
        if(ispunct(a[i]))
        {
            a.replace(i,1," ");
        }
    }
    string b = strtok(const_cast<char  *>(a.c_str())," ");
    while (b.back() != '\0') 
    {
        cout << b << endl; 
        b = strtok(NULL, " ");
    } 
}
*/

//Ejercicio 18.22

void invertir(string x)
{
  cout << "Original: " << x << endl;
  string::const_iterator iterator= x.end();
  while(iterator != x.begin()-1)
  {
    cout<<*iterator;
    iterator--;
  }
  cout<<endl;
}


//Ejercicios de la práctica

//Ejercicio 1
void convertir(string x)
{
  char y[x.length()];
  for(int i = 0; i < x.length(); i++)
  {
    y[i] = x[i];
  }
  cout << "Arreglo de chars: "<< y << endl;
}

//Ejercicio 2
/*
Capacity es la cantidad máxima de caracteres que un string puede almacenar, size es la cantidad de caracteres que hay en un string
*/

//Ejercicio 3
void invertir_Mm(string x)
{
cout << "Original: " << x << endl;
for(int i = 0; i < x.length(); i++)
{
  if(islower(x[i]))
  {
    x[i]=toupper(x[i]);
  }
  else if(isupper(x[i]))
  {
    x[i]=tolower(x[i]);
  }
}
cout<< "Invertido: " << x << endl;
}

//Ejercicio 4
void unir_numeros()
{
  int x, y;
  cout << "Introduzca el primer número: ";
  cin >> x;
  cout << "Introduzca el segundo número: ";
  cin >> y;
  string z(to_string(x)+to_string(y));
  cout << z << endl;
  cout << stoi(z)*2 << endl;
}


//Ejercicio 5
void mil_caracteres()
{
  string x(1000,'a');
  cout<< x << endl;
}

//Ejercicio 6
void convertir_frase()
{
  string a("Yo desaprobé el curso de álgebra abstracta");;
  cout << a << endl;
  a.erase(3, 3);
  cout << a << endl;
}

//Ejercicio 7
void contar(string x, string y)
{
  int z = 0;
  for(int i = x.find(y); i != string::npos; i = x.find(y, i + 1))
  {
  z++;
  }
  cout << "La palabra aparece " << z << " veces." << endl;
}

//Ejercicio 8

void imprimir_elementos()
{
  string x;
  cout << "Introduce una palabra: ";
  cin >> x;
  cout << endl;
  for(int i = 0; i < x.length(); i++)
  {
    cout << x[i] << endl;
  }
}

//Ejercicio 9
void insertar()
{
  string x, y;
  cout << "Introduzca una palabra: ";
  cin >> x;
  cout << "Introduce otra palabra: ";
  cin >> y;
  x.insert((x.length()/2),y);
  cout << x << endl;
}

//Ejercicio 10
void buscar_y_reemplazar(string x, string y, string z)
{
cout << x << endl << endl;
for(int i = x.find(y); i != string::npos; i = x.find(y, i + 1))
{        
  x.replace(x.find(y), y.size(), z);
}
cout << x << endl;
}