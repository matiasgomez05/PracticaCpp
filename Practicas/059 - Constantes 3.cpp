/*
* Cuando indicamos que un par�metro es de tipo const significa que el cuerpo del m�todo no puede modificarlo, 
* pero si consultar la informaci�n del mismo.
* El no definir un par�metro de tipo const no hace que nuestro programa no funcione. 
* El objetivo de definir un par�metro de tipo const es evitar por descuido modificar con dicho par�metro el dato que llega.
* Otra parte m�s donde podemos utilizar la palabra clave "const" es al final de la declaraci�n de un m�todo.
* Cuando implementamos un m�todo y sabemos que no modificar� en ning�n momento atributos de la clase lo m�s conveniente 
* es hacerlo expl�cito agregando la palabra "const" luego del nombre del m�todo.
* Es importante hacer notar que el constructor y el destructor no pueden ser constantes. 
* Casi siempre en un constructor inicializamos atributos y en el destructor liberamos espacio.
*/
#include <iostream>

using namespace std;

class ListaGenericaC {
private:
    class Nodo {
    public:
        int info;
        Nodo* sig;
    };
    Nodo* raiz;
public:
    ListaGenericaC();
    ~ListaGenericaC();
    void insertarPrimero(int x);
    void imprimir() const;
    bool iguales(const ListaGenericaC* lista2);
};

ListaGenericaC::ListaGenericaC()
{
    raiz = NULL;
}

ListaGenericaC::~ListaGenericaC()
{
    Nodo* reco = raiz;
    Nodo* bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

void ListaGenericaC::insertarPrimero(int x)
{
    Nodo* nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = raiz;
    raiz = nuevo;
}

void ListaGenericaC::imprimir() const
{
    Nodo* reco = raiz;
    cout << "Listado completo.\n";
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
}

bool ListaGenericaC::iguales(const ListaGenericaC* lista2)
{
    bool iguales = true;
    Nodo* reco1 = raiz;
    Nodo* reco2 = lista2->raiz;
    while (reco1 != NULL && reco2 != NULL)
    {
        if (reco1->info != reco2->info)
        {
            iguales = false;
            break; //salimos del while
        }
        reco1 = reco1->sig;
        reco2 = reco2->sig;
    }

    // La siguiente linea seria informado por el compilador como error
    // lista2->raiz = NULL;

    if (iguales == true && reco1 == NULL && reco2 == NULL)
        return true;
    else
        return false;
}

/*
int main()
{
    ListaGenericaC* lg1 = new ListaGenericaC();
    lg1->insertarPrimero(10);
    lg1->insertarPrimero(20);
    lg1->insertarPrimero(30);
    lg1->imprimir();

    ListaGenericaC* lg2 = new ListaGenericaC();
    lg2->insertarPrimero(10);
    lg2->insertarPrimero(20);
    lg2->insertarPrimero(30);
    lg2->imprimir();

    if (lg1->iguales(lg2))
        cout << "Las dos listas son iguales\n";
    else
        cout << "Las dos listas no son iguales\n";

    delete lg1;
    delete lg2;
    return 0;
}
*/