/*
* Un atributo estático de una clase se crea independientemente a que se definan objetos de la misma, y en el caso que se creen más de un 
* objeto de dicha clase dicho atributo es compartido por todas las instancias.
*/
#include<iostream>

using namespace std;

class Prueba {
    int x1;
    /*
    * Para declarar un atributo estático tenemos que agregar la palabra clave static y luego crearlo fuera de la clase 
    */
    static int x2;
public:
    Prueba(int v1, int v2) { x1 = v1; x2 = v2; };
    void imprimir();
};

//De esta manera 
int Prueba::x2;

void Prueba::imprimir()
{
    cout << x1 << "-" << x2 << "\n";
}

/*
int main()
{
    Prueba prueba1(1, 1);
    prueba1.imprimir(); //  1   1
    Prueba prueba2(20, 20);
    prueba1.imprimir(); //  1  20
    return 0;
}
*/