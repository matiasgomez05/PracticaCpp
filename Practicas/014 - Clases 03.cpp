#include<iostream>

using namespace std;

class MayorMenor {
    private:
        int calcularMayor(int v1, int v2, int v3);
        int calcularMenor(int v1, int v2, int v3);
    public:
        void cargarValores();
};

int MayorMenor::calcularMayor(int v1, int v2, int v3)
{
    int mayor;
    (v1 > v2 && v1 > v3)? mayor = v1 : (v2 > v3)? mayor = v2 : mayor = v3;
    
    return mayor;
}

int MayorMenor::calcularMenor(int v1, int v2, int v3)
{
    int menor;
    (v1 < v2 && v1 < v3)? menor = v1 : (v2 < v3)? menor = v2 : menor = v3;

    return menor;
}

void MayorMenor::cargarValores()
{
    int valor1, valor2, valor3;

    cout << "Ingrese primer valor: ";
    cin >> valor1;
    cout << "Ingrese segundo valor: ";
    cin >> valor2;
    cout << "Ingrese tercer valor: ";
    cin >> valor3;

    cout << "El mayor valor de los tres es: ";
    cout << calcularMayor(valor1, valor2, valor3) << endl;
    cout << "El menor valor de los tres es: ";
    cout << calcularMenor(valor1, valor2, valor3) << endl;
    cin.get();
    cin.get();
}
/*
int main()
{
    MayorMenor mayormenor1;
    mayormenor1.cargarValores();
    return 0;
}
*/