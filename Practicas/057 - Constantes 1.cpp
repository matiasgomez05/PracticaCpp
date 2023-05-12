/*
* Una constante es un identificador con un valor inmodificable, permanece fijo durante toda la ejecuci�n del programa. 
* Se las define antecedi�ndole la palabra reservada const. No existe una zona determinada para su declaraci�n. 
* Pueden ser globales o locales.
* Una constante a diferencia de una macro ocupa un espacio durante la ejecuci�n del programa.
*/
#include<iostream>

using namespace std;

//Constantes globales: si las definimos fuera de la main
const int inicio = 1;
const float altura = 1.92f;
const char mensaje1[] = "Bienvenido al programa";

/*
int main()
{
    cout << "Constante entera:" << inicio << "\n";
    cout << "Constante flotante:" << altura << "\n";
    cout << "Constante de tipo cadena de caracteres:" << mensaje1 << "\n";
    const int fin = 10;
    //Constantes locales: si las definimos dentro una funcion, por ej de la main
    cout << "Constante local:" << fin;

    // Si tratamos de asignar otro valor a una constante el compilador nos generar� un error sint�ctico:
    // fin = 0; daria error
    return 0;
}
*/