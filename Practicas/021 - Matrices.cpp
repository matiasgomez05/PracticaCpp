// Una matriz es una estructura de datos que permite almacenar un CONJUNTO de datos del MISMO tipo (Por ej, una matriz de INT).
// Para definir una matriz debemos disponer como primer subíndice la cantidad de filas y como segundo subíndice la cantidad de columnas.
// Ejercicio: 
// 1) Crear una matriz que imprima una diagonal en pantalla:
// x    -    -    -
// -    x    -    -
// -    -    x    -
// -    -    -    x
#include<iostream>

using namespace std;

class Matriz1 {
    private:
        int mat[4][4];
    public:
        void cargar();
        void imprimir();
        void imprimirDiagonal();
};

void Matriz1::cargar()
{
    for (int f = 0;f < 4;f++)
    {
        for (int c = 0;c < 4;c++)
        {
            cout << "Ingrese componente:";
            cin >> mat[f][c];
        }
    }
}

void Matriz1::imprimir()
{
    for (int f = 0;f < 4;f++)
    {
        for (int c = 0;c < 4;c++)
        {
            cout << mat[f][c] << " ";
        }
        cout << "\n";;
    }
    cin.get();
    cin.get();
}

void Matriz1::imprimirDiagonal(){
    for (int f = 0;f < 4;f++)
    {
        for (int c = 0;c < 4;c++)
        {
            cout << " ";
            (f == c) ? cout << mat[f][c] : cout << 0;
            cout << " ";
        }
        cout << endl;
    }
    cin.get();
    cin.get();
}
/*
int main()
{
    Matriz1 m;
    m.cargar();
    m.imprimir();
    m.imprimirDiagonal();
    return 0;
}
*/