#include <iostream>
#include "inversa.h"

using namespace std;

int main()
{
    int x, y;
    cout << "N�mero: ";
    cin >> x;
    cout << "Base: ";
    cin >> y;
    if(x > y)
    {
      cout << "Error, el n�mero no puede ser mayor que la base";
    }
    else
    {
      inversa in(x, y);
      in._inversa();
    }
}
