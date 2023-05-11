/*
	En C++ los m�todos pueden llamarse a s� mismos. 
	Si dentro de un m�todo existe la llamada a s� mismo decimos que el m�todo es recursivo.
*/
#include <iostream>

using namespace std;

class Recursividad {
    int vec[5];
public:
    void imprimir(int x);
    int factorial(int fact);
};

/*
* Se imprime por pantalla de forma descendente hasta llegar a 0
*/
void Recursividad::imprimir(int x)
{
    if (x > 0)
    {
        cout << x << "-";
        imprimir(x - 1);
    }
}

/* 
* El factorial de un n�mero es el resultado que se obtiene de multiplicar dicho n�mero por el anterior y as� sucesivamente,
* hasta llegar a uno. Ej. el factorial de 4 es 4 * 3 * 2 * 1 es decir 24.
*/
int Recursividad::factorial(int x)
{
    if (x > 0) {
        int valor = x * factorial(x - 1);
        return valor;
    }
    else
        return 1;
}
/*
int main()
{
    Recursividad* recu = new Recursividad();
    //recu->imprimir(5);
    cout << "El factorial de 5 es " << recu->factorial(5);
    delete recu;
    return 0;
}
*/