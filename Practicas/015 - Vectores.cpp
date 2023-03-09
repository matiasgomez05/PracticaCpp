#include<iostream>

using namespace std;

class PruebaVector2 {
private:
    float alturas[5];
    float promedio;
public:
    void cargar();
    void calcularPromedio();
    void mayoresMenores();
};

void PruebaVector2::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese la altura de la persona:";
        cin >> alturas[f];
    }
}

void PruebaVector2::calcularPromedio()
{
    float suma;
    suma = 0;
    for (int f = 0; f < 5; f++)
    {
        suma = suma + alturas[f];
    }
    promedio = suma / 5;
    cout << "Promedio de alturas:";
    cout << promedio;
    cout << "\n";
}

void PruebaVector2::mayoresMenores()
{
    int may, men;
    may = 0;
    men = 0;
    for (int f = 0; f < 5; f++)
    {
        if (alturas[f] > promedio)
        {
            may++;
        }
        else
        {
            if (alturas[f] < promedio)
            {
                men++;
            }
        }
    }
    cout << "Cantidad de personas mayores al promedio:";
    cout << may;
    cout << "\n";
    cout << "Cantidad de personas menores al promedio:";
    cout << men;
    cin.get();
    cin.get();
}
/*
int main()
{
    PruebaVector2 pv2;
    pv2.cargar();
    pv2.calcularPromedio();
    pv2.mayoresMenores();
    return 0;
}
*/