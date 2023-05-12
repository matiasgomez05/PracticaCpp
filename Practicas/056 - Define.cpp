/*
* La directiva #define especifica un nombre que será reemplazado por un cierto valor en todos los lugares del programa 
* donde se haga referencia.
* Se crean fuera de cualquier función o clase normalmente en la parte inicial del archivo. 
* La sintaxis es la siguiente: #define [nombre de la macro]  [valor de la macro]
* El nombre de la macro es común que se la escriba con caracteres mayúsculas 
* (es una regla que utilizan muchos programadores pero no es obligatoria)
*/
#include<iostream>

#define TAMANO 5
#define MENSAJEFIN "Presione una tecla para finalizar\n"
#define DETENER cin.get();cin.get();

using namespace std;

/*
int main()
{
    int vec[TAMANO];
    for (int f = 0;f < TAMANO;f++)
    {
        cout << "Ingrese elemento:";
        cin >> vec[f];
    }
    for (int f = 0;f < TAMANO;f++)
    {
        cout << vec[f] << "-";
    }
    cout << "\n";
    cout << MENSAJEFIN;
    DETENER
        return 0;
}
*/