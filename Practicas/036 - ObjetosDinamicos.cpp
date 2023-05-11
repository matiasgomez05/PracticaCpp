/*
	Tener objetos en la pila dinámica nos provee como ventaja tener más espacio y poderlo crear y destruir según la necesidad 
	de nuestro programa. La sintaxis cambia cuando trabajamos con objetos dinámicos.
*/
#include <iostream>;

using namespace std;

class PersonaDin {
private:
    char nombre[40];
    int edad;
public:
    void inicializar();
    void imprimir();
    void esMayorEdad();
};

void PersonaDin::inicializar()
{
    cout << "Ingrese nombre: ";
    cin.getline(nombre, 40);
    cout << "Ingrese edad: ";
    cin >> edad;
}

void PersonaDin::imprimir()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

void PersonaDin::esMayorEdad()
{
    (edad >= 18)? cout << "Es mayor de edad." : cout << "No es mayor de edad.";
    cout << endl;
}
/*
int main()
{
    PersonaDin* persona1;
    persona1 = new PersonaDin();
    persona1->inicializar();
    persona1->imprimir();
    persona1->esMayorEdad();
    delete persona1;
    return 0;
}
*/