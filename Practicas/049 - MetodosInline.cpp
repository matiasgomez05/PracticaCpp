/*
    Los metodos inline se definen al momento de ser declarados, sea un constructor, destructor o metodo.
    Es conveniente utilizar m�todos inline solo para algoritmos peque�as ya que si bien hacen el c�digo m�s eficiente 
    por otro lado generan un c�digo compilado m�s grande.
    En el ejemplo se utiliza la palabra reservada inline aun que los programadores suelen omitirla.
*/
#include<iostream>

using namespace std;

class Temperatura {
    int minima;
    int maxima;
    int actual;
public:
    inline Temperatura(int min, int max, int act) { minima = min; maxima = max; actual = act; }
    inline int rango() { int valor = maxima - minima; return valor; }
    void imprimir();
};

void Temperatura::imprimir()
{
    cout << "Minima:" << minima << "\n";
    cout << "Maxima:" << maxima << "\n";
    cout << "Actual:" << actual << "\n";
}

/*
int main()
{
    Temperatura temperatura1(5, 25, 17);
    cout << "Rango de variacion de temperaturas:" << temperatura1.rango() << "\n\n";
    temperatura1.imprimir();
    return 0;
}
*/
