#include<iostream>

using namespace std;

/*
    Es una actividad común la búsqueda del mayor y menor elemento de un vector, lo mismo que su posición.
    En el siguiente ejercicio se busca el mayor sueldo de un operario.
*/
class SueldoOperarios {
    private:
        char nombres[5][40];
        float sueldos[5];
    public:
        void cargar();
        void mayorSueldo();
};

void SueldoOperarios::cargar()
{
    for (int f=0; f<5; f++)
    {
        cout << "Ingrese el nombre del empleado "; cout << f + 1; cout << ": ";
        cin.getline(nombres[f], 40);
        cout << "Ingrese el sueldo del empleado "; cout << f + 1; cout << ": ";
        cin >> sueldos[f];
        cin.get();
    }
}

void SueldoOperarios::mayorSueldo()
{
    float mayor;
    int pos;

    mayor = sueldos[0];
    pos = 0;
    for (int f = 1;f < 5;f++)
    {
        if (sueldos[f] > mayor)
        {
            mayor = sueldos[f];
            pos = f;
        }
    }

    cout << "El empleado con sueldo mayor es ";
    cout << nombres[pos];
    cout << " con un sueldo de: $";
    cout << mayor; 
    cin.get();
}
/*
int main()
{
    SueldoOperarios so;
    so.cargar();
    so.mayorSueldo();
    return 0;
}
*/