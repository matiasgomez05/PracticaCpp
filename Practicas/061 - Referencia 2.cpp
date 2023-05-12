/*
* Plantear una clase VectorRef que permita definir y cargar un Vector de 5 elementos enteros. 
* Definir un método que retorne el mayor y menor elemento del Vector mediante dos parámetros por referencia.
*/
#include <iostream>

using namespace std;

class VectorRef {
    int vec[5];
public:
    void cargar();
    void imprimir();
    void mayorMenor(int& may, int& men);
};

void VectorRef::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese elemento:";
        cin >> vec[f];
    }
}

void VectorRef::imprimir()
{
    for (int f = 0; f < 5; f++)
    {
        cout << vec[f] << "-";
    }
    cout << "\n";
}

void VectorRef::mayorMenor(int& may, int& men)
{
    may = vec[0];
    men = vec[0];
    for (int f = 1; f < 5; f++)
    {
        if (vec[f] > may)
            may = vec[f];
        else
            if (vec[f] < men)
                men = vec[f];
    }
}

/*
int main()
{
    VectorRef VectorRef1;
    VectorRef1.cargar();
    VectorRef1.imprimir();
    int mayor, menor;
    VectorRef1.mayorMenor(mayor, menor);
    cout << "Mayor elemento del VectorRef:" << mayor << "\n";
    cout << "Menor elemento del VectorRef:" << menor << "\n";
    return 0;
}
*/