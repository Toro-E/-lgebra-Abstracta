#include <iostream>
#include <cmath>

using namespace std;

int mod(int a, int b)
{
  return a % b;
}

int algoritmo1(int a, int b)
{
  int r = mod(a, b);
  cout << "Número 1: " << a << " " << "Número 2: " << b << " " << "Residuo: " << r << endl;
  if(r == 0)
  {
    return b;
  } 
  else
  {
    a = b;
    b = r;
    return algoritmo1(a, b);
  }
}

int algoritmo2(int a, int b)
{ 
  int r = mod(a, b);cout << "Número 1: " << a << " " << "Número 2: " << b << " " << "Residuo: " << r << endl;
  if(r == 0)
  {
    return b;
  }
  else if(r > (b / 2))
  {
    r = b - r;
  }
  a = b;
  b = r;
  return algoritmo2(a, b);
}

int algoritmo3(int a, int b)
{
  cout << "Número 1: " << a << " " << "Número 2: " << b << endl;
  if(b == 0)
  {
    return a;
  }
  return algoritmo3(b, mod(a, b));
}

int algoritmo4(int a, int b)
{
  cout << "Número 1: " << a << " " << "Número 2: " << b << endl;
  if(b > a)
  {
    return algoritmo4(b, a);
  }
  else if(b == 0)
  {
    return a;
  }
  else if((mod(a, 2) == 0) && (mod(b, 2) == 0))
  {
    return algoritmo4((a / 2), (b / 2))*2;
  }
  else if((mod(a, 2) == 0) && (mod(b, 2) != 0))
  {
    return algoritmo4((a / 2),b);
  }
  else if((mod(a, 2) != 0) && (mod(b, 2) == 0))
  {
    return algoritmo4(a, (b / 2));
  }
  else 
  {
    return algoritmo4(((abs(a) - abs(b)) / 2), b);
  }
}

int algoritmo5(int a, int b)
{
  int c = 1;
  while((mod(a, 2) == 0) && (mod(b, 2) == 0))
  {
    cout << "Número 1: " << a << " " << "Número 2: " << b << " " << "Índice: " << c << endl;
    a = a / 2;
    b = b / 2;
    c = 2 * c;
    cout << "Número 1: " << a << " " << "Número 2: " << b << " " << "Índice: " << c << endl;
  }
  while(a != 0)
  {
    while(mod(a, 2) == 0)
    {
      a = a / 2;
      cout << "Número 1: " << a << " " << "Número 2: " << b << " " << "Índice: " << c << endl;
    }
    while(mod(b, 2) == 0)
    {
      b = b / 2;
      cout << "Número 1: " << a << " " << "Número 2: " << b << " " << "Índice: " << c << endl;
    }
    int d = abs((a - b)) / 2;
    if(a >= b)
    {
      a = d;
    }
    else
    {
      b = d;
      cout << "Número 1: " << a << " " << "Número 2: " << b << " " << "Índice: " << c << endl;
    }
  }
  return c * b;
}

int algoritmo6(int a, int b)
{
  while(a != b)
  {
    cout << "Número 1: " << a << " " << "Número 2: " << b << endl;
    if(a > b)
    {
      a = a - b;
    }
    else
    {
      b = b - a;
    }
  }
  cout << "Número 1: " << a << " " << "Número 2: " << b << endl;
  return a;
}

int algoritmo7(int a, int b)
{
  int c;
  c = mod(a, b);
  cout << "Número 1: " << a << " " << "Número 2: " << b << endl;
  while(c > 0)
  {
    cout << "Número 2: " << b << " " << "Residuo: " << c << endl;
    a = b;
    b = c;
    c = mod(a, b);
  }
  cout << "Número 2: " << b << " " << "Residuo: " << c << endl;
  return b; 
}

void seleccion()
{
  clock_t start,endt;
  double time;
  int a, b, c;
  cout << "Número 1: ";
  cin >> a ;
  cout << endl;
  cout << "Número 2: ";
  cin >> b;
  cout << endl;
  cout << "Número de algoritmo: ";
  cin >> c;
  cout << endl;
  int res;
  if(c == 1)
  {
    start = clock();
    res = algoritmo1(a, b);
    cout <<"MCD = " << res ;
    endt = clock();
    time = (endt - start) / (double)CLOCKS_PER_SEC;
    cout << endl << "Tiempo: " << time << endl;
  }
  else if(c == 2)
  {
    start = clock();
    res = algoritmo2(a, b);
    cout <<"MCD = " << res ;
    endt = clock();
    time = (endt - start) / (double)CLOCKS_PER_SEC;
    cout << endl << "Tiempo: " << time << endl;
  }
  else if(c == 3)
  {
    start = clock();
    res = algoritmo3(a, b);
    cout <<"MCD = " << res ;
    endt = clock();
    time = (endt - start) / (double)CLOCKS_PER_SEC;
    cout << endl << "Tiempo: " << time << endl;
  }
  else if(c == 4)
  {
    start = clock();
    res = algoritmo4(a, b);
    cout <<"MCD = " << res ;
    endt = clock();
    time = (endt - start) / (double)CLOCKS_PER_SEC;
    cout << endl << "Tiempo: " << time << endl;
  }
  else if(c == 5)
  {
    start = clock();
    res = algoritmo5(a, b);
    cout <<"MCD = " << res ;
    endt = clock();
    time = (endt - start) / (double)CLOCKS_PER_SEC;
    cout << endl << "Tiempo: " << time << endl;
  }
  else if(c == 6)
  {
    start = clock();
    res = algoritmo6(a, b);
    cout <<"MCD = " << res ;
    endt = clock();
    time = (endt - start) / (double)CLOCKS_PER_SEC;
    cout << endl << "Tiempo: " << time << endl;
  }
  else if(c == 7)
  {
    start = clock();
    res = algoritmo7(a, b);
    cout <<"MCD = " << res ;
    endt = clock();
    time = (endt - start) / (double)CLOCKS_PER_SEC;
    cout << endl << "Tiempo: " << time << endl;
  }
  else
  {
    cout << "Selección inválida.";
  }
  return;
}