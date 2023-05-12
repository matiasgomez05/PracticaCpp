/*
* Algunos m�todos que nos provee la clase string para modificar el contenido:
* append: Para a�adir al final otra cadena de caracteres.
* insert: Para a�adir otra cadena en cualquier parte de la cadena indicando la posici�n inicial.
* erase: Borrar desde una determinada posici�n una determinada cantidad de caracteres del string.
*/
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string cad = "uno tres";
    cout << "Cadena original:" << cad << "\n";
    cad.append(" cuatro");
    cout << "Cadena despues de llamar a append:" << cad << "\n";
    cad.insert(3, " dos");
    cout << "Cadena despues de llamar a insert:" << cad << "\n";
    cad.erase(0, 4);
    cout << "Cadena despues de llamar a erase:" << cad << "\n";
    return 0;
}