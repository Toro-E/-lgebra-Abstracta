#include <iostream>
#include <math.h>

using namespace std;

void eratostenes(int a)
{
  bool nros_primos[a];

  for(int i = 0; i < a; i++)
  {
    nros_primos[a] = false;
  }

  for(int i = 2; i*i <= a; i++)
  {
    if(!(nros_primos[i]))
    {
      for(int j = i*i; j <= a; j += i)
      {
        nros_primos[j] = true;
      }
    }
  }

  for(int i = 2; i <= a; i++)
  {
    if(!nros_primos[i])
    {
      cout << i << " - ";
    }
  }
}

int main()
{
    cout << "Ingrese el límite: ";
    int a;
    cin >> a;
    cout << endl << "Números primos; " << endl;
    eratostenes(a);
}
