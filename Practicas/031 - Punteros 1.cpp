/*
	Los punteros son variables que almacenan direcciones de memoria de otra variable.
	Un puntero se definen de la siguiente manera: <tipo de dato al que apunta> * <nombre del puntero>;
*/
#include <iostream>

using namespace std;

/*
int main()
{
    int x = 10;
    int* pe;                // Definicion de un puntero, con *
    pe = &x;                // Asignacion del puntero, con &. En este caso la posicion de x
    cout << x << endl;      // 10 
    cout << *pe << endl;    // imprime lo apuntado por pe: 10
    *pe = 5;                // asignamos 5 a lo apuntado por pe
    cout << x << endl;      // 5
    float valor = 10.9;
    float* pf;
    pf = &valor;
    cout << *pf;            //imprimime lo apuntado por pf: 10.9
    return 0;
}
*/