/*
* El lenguaje C++ puede utilizar el manejo de cadenas de caracteres heredado de C y además 
* implementa una clase estándar string que encapsula la administración de cadenas de caracteres.
* El manejo de cadenas de caracteres con la clase string simplifica en gran medida la implementación 
* de algoritmos y reduce la cantidad de errores que podemos cometer.
* Como se trata de una clase dispone de un conjunto de métodos que permite acceder a su contenido para manipularla.
*/
#include<string>
#include<iostream>

using namespace std;

int main()
{
    string cadena1 = "Bienvenido";
    string cadena2;

    //Cuando ingresamos una cadena con el objeto cin no podemos ingresar espacios, sino se corta el string 
    //cout << "Ingrese una cadena de caracteres sin espacios en blanco:";
    //cin >> cadena2;
    //cin.get();

    //empty() devuelve true o false en caso de string vacio
    while (cadena2.empty()) {
        cout << "Ingrese su nombre:";
        getline(cin, cadena2);
        cout << cadena1 + " " + cadena2 << endl;
    }

    // size() o length() funcionan de igual manera
    cout << "Su nombre tiene " << cadena2.size() << " letras";

    return 0;
}