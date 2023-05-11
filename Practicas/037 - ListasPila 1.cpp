/*
	Una lista es un conjunto de nodos, cada uno de los cuales tiene dos campos: uno de información y un apuntador al siguiente nodo 
	de la lista. Además un apuntador externo señala el primer nodo de la lista. 
	La información puede ser cualquier tipo de dato simple, estructura de datos o inclusive uno o más objetos.
	La dirección al siguiente nodo es un puntero y la lista se puede comportar como:
	una pila (último en entrar primero en salir o LIFO) 
	una cola (primero en entrar primero en salir o FIFO)
	una lista generica (entran y salen desde cualquier parte de la lista)
*/
#include <iostream>

using namespace std;

//Lista tipo Pila - LIFO (Last In First Out - último en entrar primero en salir)
class Pila {
private:
    class Nodo {
    public:
        int info;
        Nodo* sig;
    };

    Nodo* raiz;
public:
    Pila();
    ~Pila();
    void insertar(int x);
    int extraer();
    int retornar();
    void imprimir();
    int cantidad();
    bool vacia();
};

Pila::Pila()
{
    raiz = NULL;
}

void Pila::insertar(int x)
{
    Nodo* nuevo;
    nuevo = new Nodo();
    nuevo->info = x;
    if (raiz == NULL)
    {
        raiz = nuevo;
        nuevo->sig = NULL;
    }
    else
    {
        nuevo->sig = raiz;
        raiz = nuevo;
    }
}

void Pila::imprimir()
{
    Nodo* reco = raiz;
    cout << "Listado de todos los elementos de la pila.\n";
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
}

int Pila::extraer()
{
    if (raiz != NULL)
    {
        int informacion = raiz->info;
        Nodo* bor = raiz;
        raiz = raiz->sig;
        delete bor;
        return informacion;
    }
    else
    {
        return -1;
    }
}

int Pila::retornar()
{
    if (raiz != NULL)
    {
        return raiz->info;
    }
    else
        return -1;
}

Pila::~Pila()
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

int Pila::cantidad()
{
    Nodo* reco = raiz;
    int cant = 0;
    while (reco != NULL)
    {
        cant++;
        reco = reco->sig;
    }
    return cant;
}

bool Pila::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}
/*
int main()
{
    Pila* pila1;
    pila1 = new Pila();
    pila1->insertar(10);
    pila1->insertar(40);
    pila1->insertar(5);
    pila1->imprimir();
    cout << "El primer valor de la pila es:" << pila1->retornar() << "\n";
    cout << "La cantidad de nodos de la pila es:" << pila1->cantidad() << "\n";
    while (pila1->vacia() == false)
    {
        cout << "Extraemos de la pila:" << pila1->extraer() << "\n";
    }
    delete pila1;
    return 0;
}
*/