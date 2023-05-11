/*
   Se tiene la siguiente información:
       - Nombres de 4 empleados.
       - Ingresos en concepto de sueldo, cobrado por cada empleado, en los últimos 3 meses.
    
    Confeccionar el programa para:

    a) Realizar la carga de la información mencionada.
    b) Generar un vector que contenga el ingreso acumulado en sueldos en los últimos 3 meses para cada empleado.
    c) Mostrar por pantalla el total pagado en sueldos a todos los empleados en los últimos 3 meses
    d) Obtener el nombre del empleado que tuvo el mayor ingreso acumulado
*/
#include<iostream>

using namespace std;

class Empleados {
private:
    char nombres[4][40];
    int sueldos[4][3];
    int sueldosTotales[4];
public:
    void cargar();
    void calcularSumaSueldos();
    void imprimirTotalPagado();
    void empleadoMayorSueldo();
};


void Empleados::cargar()
{
    for (int f = 0; f < 4; f++)
    {
        cout << "Ingrese el nombre del empleado: ";
        cin.get(nombres[f], 40);
        for (int c = 0; c < 3; c++)
        {
            cout << "Ingrese sueldo: ";
            cin >> sueldos[f][c];
            cin.get();
        }
    }
}

void Empleados::calcularSumaSueldos()
{
    for (int f = 0; f < 4; f++)
    {
        int suma = 0;
        for (int c = 0; c < 3; c++)
        {
            suma += sueldos[f][c];
        }
        sueldosTotales[f] = suma;
    }
}

void Empleados::imprimirTotalPagado()
{
    cout << "Total de sueldos pagados por empleado." << "\n";
    for (int f = 0; f < 4; f++)
    {
        cout << nombres[f] << " - " << sueldosTotales[f] << "\n";
    }
}

void Empleados::empleadoMayorSueldo()
{
    int mayorSueldo = 0;
    char mayorNombre[40] = "";
    for (int f = 0; f < 4; f++)
    {
        if (sueldosTotales[f] > mayorSueldo)
        {
            mayorSueldo = sueldosTotales[f];
            strcpy_s(mayorNombre, 40, nombres[f]);
        }
    }
    cout << "El empleado con mayor sueldo es " << mayorNombre << " que tiene un sueldo acumulado de " << mayorSueldo;
    cin.get();
}
/*
int main()
{
    Empleados emp;
    emp.cargar();
    emp.calcularSumaSueldos();
    emp.imprimirTotalPagado();
    emp.empleadoMayorSueldo();
    return 0;
}
*/