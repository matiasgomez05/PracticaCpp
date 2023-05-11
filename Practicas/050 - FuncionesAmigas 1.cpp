/*
* El lenguaje C++ es compatible y hereda todas las características del lenguaje C. 
* El lenguaje C es un lenguaje estructurado y solo permite definir funciones (no existen las clases). En C++ seguimos pudiendo definir 
* funciones independientes fuera de una clase pero no es conveniente para una buena organización de nuestro código.
* En algunas situaciones puede ser conveniente definir una función independiente pero que tenga acceso a los 
+ atributos privados y protegidos de una clase, esto se logra con las funciones amiga (friend)
*/
#include<iostream>

using namespace std;

class Temperatura {
    int minima, maxima, actual;
public:
    Temperatura(int min, int max, int act) { minima = min; maxima = max; actual = act; }
    friend int temperaturaMedia(Temperatura t1, Temperatura t2);
};

int temperaturaMedia(Temperatura t1, Temperatura t2)
{
    int pro = (t1.actual + t2.actual) / 2;
    return pro;
}

/*
int main()
{
    Temperatura temperatura1(10, 20, 15);
    Temperatura temperatura2(12, 25, 17);
    cout << "La temperatura promedio de las temperaturas actuales es:";
    cout << temperaturaMedia(temperatura1, temperatura2);
    return 0;
}
*/