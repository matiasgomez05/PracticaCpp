/*
    Los punteros pueden incrementarse o decrementarse con ++ o --, pero lo que se modificará será su ubicacion en memoria.
    Por ej, incrementar un float o int aumentará o restará 4 bytes, y hacerlo sobre un char será de 1 byte.
*/
#include<iostream>

using namespace std;
/*
int main()
{
    char cadena[5];
    strcpy_s(cadena, 5, "Sol");
    char* punteroCadena;                //No hace falta anteponer & por ser una cadena
    punteroCadena = cadena;             //No hace falta anteponer * por ser una cadena

    cout << punteroCadena << endl;      //imprime Sol (Cadena completa, apunta a cadena[0]).
    punteroCadena++;
    cout << punteroCadena << endl;      //imprime ol (Incrementa en 1 la posicion, cadena[1] e imprime desde ahi).
    punteroCadena++;
    cout << punteroCadena << endl;      //imprime l (Incrementa en 1 la posicion, cadena[2] e imprime desde ahi).
    punteroCadena--;
    cout << punteroCadena << endl;      //imprime ol

    int x[5] = { 10, 50, 100, 99, 33 };
    int* punteroEntero;
    punteroEntero = &x[3];
    cout << *punteroEntero << endl;     //imprime 99
    punteroEntero--;
    cout << *punteroEntero << endl;     //imprime 100
    return 0;
}
*/
