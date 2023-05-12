/*
* En C++ hay dos formas de pasar parámetros a un método: por valor o por referencia.
* Hasta ahora siempre hemos pasado los parámetros por valor, cuando pasamos un tipo de dato simple (int, float etc.) 
* se hace una copia del dato en otra parte de la memoria. 
* Podemos pasar una variable y que el parámetro pueda acceder y modificar directamente la variable que le pasamos.
*/
#include<iostream>

using namespace std;

class Prueba {
public:
    void cambiar1(int z);
    void cambiar2(int& z);
};

void Prueba::cambiar1(int z)
{
    z = 0;
}

void Prueba::cambiar2(int& z)
{
    z = 0;
}

/*
int main()
{
    Prueba prueba1;
    int num = 10;
    cout << "Valor de la variable num:" << num << "\n";
    prueba1.cambiar1(num);
    cout << "Valor de la variable num luego de enviarla por valor:" << num << "\n";
    prueba1.cambiar2(num);
    cout << "Valor de la variable num luego de enviarla por referencia:" << num << "\n";
    return 0;
}
*/