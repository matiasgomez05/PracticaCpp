/*
	Cuando un m�todo debe retornar un dato, al principio de su definici�n se asigna el tipo (int, float etc.) 
	y dentro del m�todo especificamos con la palabra return el valor que devuelve.
	�Qu� sucede si queremos retornar dos valores o m�s en un solo m�todo? Una forma de solucionar este problema es pasar la 
	direcci�n de dos variables y que las reciban dos par�metros de tipo puntero, luego por medio de estos punteros modificamos 
	las variables que les pasamos por ejemplo desde la main.
	Ejercicio: Confeccionar una clase que permita administrar un vector de 5 enteros. 
	Definir dos m�todos: uno que permita cargar el vector y otro que retorne el mayor y el menor valor del vector. 
	Emplear dos punteros para poder retornar dos datos en un �nico m�todo.
*/
#include<iostream>

using namespace std;

class Vector {
    int vec[5];
public:
    void cargar();
    void retornarMayorMenor(int* pmay, int* pmen);
};

void Vector::cargar()
{
    for (int f = 0; f < 5; f++)
    {
        cout << "Ingrese componente: ";
        cin >> vec[f];
    }
}

void Vector::retornarMayorMenor(int* pmay, int* pmen)
{
    *pmay = vec[0];
    *pmen = vec[0];
    for (int f = 1; f < 5; f++)
    {
        if (vec[f] > *pmay)
        {
            *pmay = vec[f];
        }
        else
        {
            if (vec[f] < *pmen)
            {
                *pmen = vec[f];
            }
        }
    }
}

/*
int main()
{
    Vector vector1;
    vector1.cargar();
    int ma, me;
    vector1.retornarMayorMenor(&ma, &me);
    cout << "El elemento mayor del vector es:" << ma << "\n";
    cout << "El elemento menor del vector es:" << me << "\n";
    return 0;
}
*/