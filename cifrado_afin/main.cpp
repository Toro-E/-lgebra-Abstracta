#include <iostream>
#include <stdlib.h>
#include <string.h>

#include "afin.h"

using namespace std;

int main()
{
    afin afin(23);  // Clave que usé en la práctica grupal.
    string mensaje;
    string mensaje_cifrado;
    string mensaje_descifrado;
    cout << "Introduzca el mensaje a cifrar: " << endl;   // Escribir el mensaje en mayúsculas.
    getline(cin, mensaje);

    mensaje_cifrado = afin.cifrar(mensaje);
    cout << "Mensaje cifrado: " << endl;
    cout << mensaje_cifrado << endl;

    mensaje_descifrado = afin.descifrar(mensaje_cifrado);
    cout << "Mensaje descifrado: " << endl;
    cout << mensaje_descifrado << endl;
}
