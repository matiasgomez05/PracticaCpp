#include <iostream>

using namespace std;

class Triangulo {
    private:
        int lado1, lado2, lado3;
    public:
        void inicializar();
        void ladoMayor();
        void esEquilatero();
};

void Triangulo::inicializar()
{
    cout << "Ingrese primer lado: ";
    cin >> lado1;
    cout << "Ingrese segundo lado: ";
    cin >> lado2;
    cout << "Ingrese tercer lado: ";
    cin >> lado3;
}

void Triangulo::ladoMayor()
{
    cout << "El lado mayor es: ";
    if (lado1 > lado2 && lado1 > lado3)
    {
        cout << lado1;
    }
    else
    {
        (lado2 > lado3)? cout << lado2 : cout << lado3;
    }
    cout << endl;
}

void Triangulo::esEquilatero()
{
    (lado1 == lado2 && lado1 == lado3)? cout << "Es un triangulo equilatero" : cout << "No es un triangulo equilatero";
    cin.get();
    cin.get();
}
/*
int main()
{
    Triangulo triangulo1;
    triangulo1.inicializar();
    triangulo1.ladoMayor();
    triangulo1.esEquilatero();
    return 0;
}
*/