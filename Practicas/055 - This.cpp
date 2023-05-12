/*
* El puntero "this" almacena la direcci�n de memoria donde se guardan los atributos del objeto respectivo
* Cuando se ejecuta este c�digo, this tiene la direcci�n del objeto temperatura1 o temperatura2 seg�n el caso
*/
#include<iostream>

using namespace std;

class TemperaturaT {
    int minima;
    int maxima;
    int actual;
    void imprimir();
public:
    TemperaturaT(int min, int max, int actual);
};

TemperaturaT::TemperaturaT(int minima, int maxima, int actual)
{
    this->minima = minima;
    this->maxima = maxima;
    this->actual = actual;
    imprimir();
}

void TemperaturaT::imprimir()
{
    cout << minima << " " << actual << " " << maxima << "\n";
}

/*
int main()
{
    TemperaturaT TemperaturaT1(10, 20, 15);
    TemperaturaT TemperaturaT2(25, 35, 29);
    return 0;
}
*/