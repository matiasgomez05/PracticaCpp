/*
* Cuando definimos constantes podemos anteceder los modificadores static. 
* Es importante tener en cuenta que solo podemos definir constantes est�ticas si se trata de valores enteros.
* Para definir atributos de una clase que sean constantes debemos inicializarlos por �nica vez en 
* la zona de inicializaci�n del constructor
*/
#include<iostream>

using namespace std;

class TemperaturaC {
    const int media;
    int minima, maxima;
public:
    TemperaturaC(int min, int max, int me);
    void imprimir();
};

// Si la clase tiene que inicializar m�s de una constante no est�tica la sintaxis en el constructor quedar�a separado con coma:
// TemperaturaC::TemperaturaC(int min, int max, int me, int valor2) :media(me), constante2(valor2)
TemperaturaC::TemperaturaC(int min, int max, int me) :media(me)
{
    minima = min;
    maxima = max;
}

void TemperaturaC::imprimir()
{
    cout << minima << " " << maxima << " " << media << "\n";
}

/*
int main()
{
    TemperaturaC t1(10, 20, 14);
    t1.imprimir();
    TemperaturaC t2(5, 9, 7);
    t2.imprimir();
    return 0;
}
*/