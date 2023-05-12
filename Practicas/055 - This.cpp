/*
* El puntero "this" almacena la dirección de memoria donde se guardan los atributos del objeto respectivo
* Cuando se ejecuta este código, this tiene la dirección del objeto temperatura1 o temperatura2 según el caso
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