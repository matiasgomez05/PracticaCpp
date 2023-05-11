/*
	En C++ podemos definir un m�todo que se ejecute cuando se elimine el objeto y en forma autom�tica. Este m�todo se lo llama destructor.

	El destructor tiene las siguientes caracter�sticas:

	Tiene el mismo nombre de la clase m�s el caracter ~ (alt + 124) al principio.
	Es el �ltimo m�todo que se ejecuta.
	Se ejecuta en forma autom�tica.
	No puede retornar datos.
	Se ejecuta una �nica vez.
	No es obligatorio.

    Ejercicio: Mostrar la tabla de multiplicar de un valor que se ingresa por teclado. En el constructor pedir el entero. Al finalizar el programa mostrar un mensaje de despedida (este mensaje mostrarlo en el destructor).
*/
#include<iostream>

using namespace std;

class Tabla {
    private:
        int valor;
    public:
        Tabla(); //Constructor
        void imprimir();
        ~Tabla(); //Destructor
};


Tabla::Tabla()
{
    cout << "Ingrese un valor: ";
    cin >> valor;
}

void Tabla::imprimir()
{
    for (int f = valor; f <= valor * 10; f += valor)
    {
        cout << f << " - ";
    }
    cout << endl;
}

Tabla::~Tabla()
{
    cout << "Gracias por utilizar este programa.";
    cin.get();
    cin.get();
}
/*
int main()
{
    Tabla tabla1;
    tabla1.imprimir();
    return 0;
}
*/