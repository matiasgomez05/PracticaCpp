#include<iostream>

using namespace std;

/*
    Si tenemos dos vectores de 5 elementos cada uno. En uno se almacenan los nombres de personas en el otro las edades de dichas personas.
    Decimos que el vector nombres es paralelo al vector edades si en la componente 0 de cada vector se almacena información 
    relacionada a una persona (Juan - 12 años). Es decir hay una relación entre cada componente de los dos vectores.
*/
class PersonasEdades {
    private:
        char nombres[5][40];
        int edades[5];
    public:
        void cargar();
        void mayoresEdad();
};

void PersonasEdades::cargar()
{
    for (int f = 0;f < 5;f++)
    {
        cout << "Ingrese nombre: ";
        cin.getline(nombres[f], 40);
        cout << "Ingrese edad: ";
        cin >> edades[f];
        cin.get();
    }
}

void PersonasEdades::mayoresEdad()
{
    cout << "Personas mayores de edad: " << endl;
    for (int f = 0;f < 5;f++)
    {
        if (edades[f] >= 18)
        {
            cout << nombres[f] << endl;
        }
    }
    cin.get();
}
/*
int main()
{
    PersonasEdades pe;

    pe.cargar();
    pe.mayoresEdad();

    return 0;
}
*/