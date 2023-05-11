/*
    La función srand define una semilla inicial para la generación de números aleatorios y le pasamos como parámetro la hora y 
    fecha actual (que la retorna la función time). 
    Luego la función rand() retorna un valor entero entre 0 y RAND_MAX y luego mediante el operador 
    matemático % (resto de una división) podemos acotar los valores enteros a obtener. Le sumamos 1 ya que queremos valores 
    comprendidos entre 1 y 6.
    Las librerias que se utilizan son <cstdlib> y <ctime>.
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Dado {
private:
    int valor;
    void separador();
public:
    void tirar();
    void imprimir();
};

void Dado::separador()
{
    cout << "********************" << endl;
}

void Dado::tirar()
{
    srand(time(NULL));
    valor = rand() % 6 + 1;
}

void Dado::imprimir()
{
    separador();
    cout << valor;
    cout << "\n";
    separador();
}
/*
int main()
{
    Dado d;
    d.tirar();
    d.imprimir();
    return 0;
}
*/