#include <iostream>
#include <string>

#include "vigenere.h"

using namespace std;

int main() 
{
 string msg;
 string msg_cifrado;
 string msg_descifrado;

 vigenere vigenere;


msg = "La vida de un critico es sencilla en muchos aspectos, arriesgamos poco, y tenemos poder sobre aquellos que ofrecen su trabajo y su servicio a nuestro juicio. Esperamos con las criticas negativas - divertidas de escribir y leer - pero la triste verdad que debemos afrontar, es que en el gran orden de las cosas, cualquier basura tiene mas significado que lo que deja ver nuestra critica. Pero en ocasiones el critico si se arriesga cada vez que descubre y defiende algo nuevo... el mundo suele ser cruel con el nuevo talento, las nuevas creaciones... lo nuevo, necesita amigos. Anoche experimente algo nuevo, una extraordinaria cena de una fuente singular e inesperada, decir solo que la comida y su creador han desafiado mis prejuicios sobre la buena cocina subestimaria la realidad. Me han tocado en lo mas profundo. En el pasado, jamas oculte mi desden por el famoso lema del chef Gusteau. Cualquiera puede cocinar. Pero al fin me doy cuenta de lo que quiso decir en realidad. No cualquiera puede convertirse en un gran artista, pero un gran artista puede provenir de cualquier lado. Es dificil imaginar un origen mas humilde que el del genio que ahora cocina en el restaurante Gusteau, y quien, en opinion de este critico, es nada menos que el mejor chef de Francia. Pronto volvere a Gusteau... hambriento";

 msg_cifrado = vigenere.cifrar(msg);
 msg_descifrado = vigenere.descifrar(msg_cifrado);

 cout << endl <<  "Mensaje cifrado:" << endl << msg_cifrado << endl;
 cout << endl << "Mensaje descifrado:" << endl << msg_descifrado << endl;  
}