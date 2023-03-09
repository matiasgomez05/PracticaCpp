#include<iostream>

using namespace std;

class NotaAlumnos {
    private:
        char nombres[5][40];
        int notas[5];
    public:
        void cargar();
        void ordenar();
        void imprimir();
};


void NotaAlumnos::cargar()
{
    cout << "Carga de nombres y notas." << endl;
    for (int f = 0;f < 5;f++)
    {
        cout << "Ingrese el nombre del alumno ";
        cout << f + 1;
        cout << ": ";
        cin.getline(nombres[f], 40);

        cout << "Ingrese la nota del alumno ";
        cout << f + 1;
        cout << ": ";
        cin >> notas[f];
        cin.get();
    }
}

void NotaAlumnos::ordenar()
{
    for (int k = 0; k < 5; k++)
    {
        for (int f = 0; f < 4 - k; f++)
        {
            if (notas[f] < notas[f + 1])
            {
                int auxnota;
                auxnota = notas[f];
                notas[f] = notas[f + 1];
                notas[f + 1] = auxnota;

                char auxnombre[40];
                strcpy_s(auxnombre, 40, nombres[f]);
                strcpy_s(nombres[f], 40, nombres[f + 1]);
                strcpy_s(nombres[f + 1], 40, auxnombre);
            }
        }
    }
}

void NotaAlumnos::imprimir()
{
    cout << "Nombres de alumnos y notas de mayor a menor" << endl;
    for (int f = 0; f < 5; f++)
    {
        cout << nombres[f] << " - " << notas[f] << endl;
    }
    cin.get();
}

int main()
{
    NotaAlumnos na;
    na.cargar();
    na.ordenar();
    na.imprimir();
    return 0;
}