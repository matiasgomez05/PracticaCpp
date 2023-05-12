/*
* La directiva #define especifica un nombre que ser� reemplazado por un cierto valor en todos los lugares del programa 
* donde se haga referencia.
* Se crean fuera de cualquier funci�n o clase normalmente en la parte inicial del archivo. 
* La sintaxis es la siguiente: #define [nombre de la macro]  [valor de la macro]
* El nombre de la macro es com�n que se la escriba con caracteres may�sculas 
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