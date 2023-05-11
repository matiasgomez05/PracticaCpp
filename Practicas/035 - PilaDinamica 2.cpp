/*
    Plantear una clase que permita administrar un vector de enteros. 
    En el constructor solicitar al operador que ingrese la cantidad de componentes que tendrá el vector y lo cree y localice en 
    la pila dinámica. Hacer un método que lo imprima y finalmente en el destructor eliminar el espacio ocupado por el vector
    creado previamente.
*/
#include<iostream>

using namespace std;

class VectorDinamico {
    int* p;
    int tamano;
public:
    VectorDinamico();
    void cargar();
    void imprimir();
    ~VectorDinamico();
};

VectorDinamico::VectorDinamico()
{
    cout << "Cuantos elementos tendra el vector: ";
    cin >> tamano;
    p = new int[tamano];
}

void VectorDinamico::cargar()
{
    for (int f=0; f<tamano; f++)
    {
        cout << "Ingrese el elemento " << f+1 << ": ";
        cin >> p[f];
    }
}

void VectorDinamico::imprimir()
{
    for (int f=0; f<tamano; f++)
    {
        cout << p[f];
        cout << "-";
    }
}

VectorDinamico::~VectorDinamico()
{
    delete[]p;
}
/*
int main()
{
    VectorDinamico vector1;
    vector1.cargar();
    vector1.imprimir();
    return 0;
}
*/