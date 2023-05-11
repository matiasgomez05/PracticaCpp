/*
	La herencia significa que se pueden crear nuevas clases partiendo de clases existentes, que tendrá todas los 
	atributos y los métodos de su 'superclase' o 'clase padre' y además se le podrán añadir otros atributos y métodos propios.
	Cuando la relación entre dos clases es del tipo "...tiene un..." o "...es parte de...", no debemos implementar herencia. 
	Estamos frente a una relación de colaboración de clases, no de herencia.
	Luego si vemos que dos clase responden a la pregunta ClaseA "..es un.." ClaseB es posible que haya una relación de herencia.
	Ejemplos:
	Auto "...tiene 4..." Rueda (Colaboracion)
	Volante "...es parte de..." Auto (Colaboracion)
	Auto "es un" Vehiculo (Herencia)
	Circulo "es una" Figura (Herencia)
	Mouse "es un" DispositivoEntrada (Herencia)
	Suma "es una" Operacion (Herencia)
*/
#include<iostream>

using namespace std;

class Operacion { //"Protected" para que la subclase tenga acceso a dichos atributos
protected:
    int valor1, valor2, resultado;
public:
    void cargar1();
    void cargar2();
    void mostrarResultado();
};


class Suma : public Operacion {
public:
    void operar();
};


class Resta : public Operacion {
public:
    void operar();
};


void Operacion::cargar1()
{
    cout << "Ingrese primer valor: ";
    cin >> valor1;
}

void Operacion::cargar2()
{
    cout << "Ingrese segundo valor: ";
    cin >> valor2;
}

void  Operacion::mostrarResultado()
{
    cout << resultado << endl;
}

void Suma::operar()
{
    resultado = valor1 + valor2;
}

void Resta::operar()
{
    resultado = valor1 - valor2;
}

/*
int main()
{
    Suma suma1;
    suma1.cargar1();
    suma1.cargar2();
    suma1.operar();
    cout << "La suma de los dos valores es:";
    suma1.mostrarResultado();

    Resta resta1;
    resta1.cargar1();
    resta1.cargar2();
    resta1.operar();
    cout << "La diferencia de los dos valores es:";
    resta1.mostrarResultado();

    return 0;
}
*/