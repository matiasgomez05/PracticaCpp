#include<iostream>

using namespace std;
/*
int main() {
    // 1) Se cargan por teclado tres números distintos. Mostrar por pantalla el mayor de ellos.
    int num1, num2, num3;

    cout << "Ingrese primer valor: ";
    cin >> num1;
    cout << "Ingrese segunda valor: ";
    cin >> num2;
    cout << "Ingrese tercer valor: ";
    cin >> num3;

    cout << "El mayor de los numeros ingresados es: ";
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            cout << num1;
        }
        else
        {
            cout << num3;
        }
    }
    else
    {
        if (num2 > num3)
        {
            cout << num2;
        }
        else
        {
            cout << num3;
        }
    }

    return 0;

    // 2) Se ingresa por teclado un valor entero, mostrar una leyenda que indique si el número es positivo, negativo o nulo(es decir cero)
    int num;

    cout << "Ingrese un valor: ";
    cin >> num;

    cout << "El valor ingresado es ";
    if (num == 0)
        cout << "cero";
    else
        (num > 0) ? cout << "un valor positivo" : cout << "un valor negativo";

    return 0;

    // 3) Confeccionar un programa que permita cargar un número entero positivo de hasta tres cifras y muestre un mensaje indicando 
    // si tiene 1, 2 o 3 cifras. Mostrar un mensaje de error si el número de cifras es mayor.
    int num;

    cout << "Ingrese un valor de hasta tres digitos mayor a cero: ";
    cin >> num;
    cout << "El numero ingresado ";
    if (num < 10)
    {
        cout << "tiene un digito";
    }
    else
    {
        if (num < 100)
        {
            cout << "tiene dos digitos";
        }
        else
        {
            if (num < 1000)
            {
                cout << "tiene tres digitos";
            }
            else
            {
                cout << "es incorrecto.";
            }
        }
    }

    return 0;
    // Un postulante a un empleo, realiza un test de capacitación, se obtuvo la siguiente información: cantidad total de 
    // preguntas que se le realizaron y la cantidad de preguntas que contestó correctamente. Se pide confeccionar un programa 
    // que ingrese los dos datos por teclado e informe el nivel del mismo según el porcentaje de respuestas correctas 
    // que ha obtenido, y sabiendo que:
    //      Nivel máximo:	Porcentaje>=90%.
    //      Nivel medio:	Porcentaje>=75% y <90%.
    //      Nivel regular:	Porcentaje>=50% y <75%.
    //      Fuera de nivel:	Porcentaje<50%.
    int totalPreguntas, totalCorrectas, porcentaje;

    cout << "Ingrese la cantidad total de preguntas del examen: ";
    cin >> totalPreguntas;
    cout << "Ingrese la cantidad total de preguntas contestadas correctamente: ";
    cin >> totalCorrectas;

    porcentaje = totalCorrectas * 100 / totalPreguntas;
    if (porcentaje >= 90)
    {
        cout << "Nivel máximo";
    }
    else
    {
        if (porcentaje >= 75)
        {
            cout << "Nivel medio";
        }
        else
        {
            if (porcentaje >= 50)
            {
                cout << "Nivel regular";
            }
            else
            {
                cout << "Fuera de nivel";
            }
        }
    }

    return 0;
}
*/