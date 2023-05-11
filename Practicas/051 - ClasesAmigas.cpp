/* 
* Otra posibilidad en C++ es que una clase sea amiga. Esto hace que todos los métodos de la clase amiga tengan acceso a los atributos
* privados y protegidos.
*/

#include<iostream>

using namespace std;

class NodoF {
    int info;
    NodoF *ant, *sig;
public:
    NodoF(int x) { info = x; };
    friend class ListaGenericaF;
};


class ListaGenericaF {
    NodoF* raiz;
public:
    ListaGenericaF() { raiz = NULL; };
    ~ListaGenericaF();
    void insertarPrimero(int x);
    void imprimir();
};

ListaGenericaF::~ListaGenericaF()
{
    NodoF* reco = raiz;
    NodoF* bor;
    while (reco != NULL)
    {
        bor = reco;
        reco = reco->sig;
        delete bor;
    }
}

void ListaGenericaF::insertarPrimero(int x)
{
    NodoF* nuevo = new NodoF(x);
    nuevo->ant = NULL;
    if (raiz == NULL)
    {
        nuevo->sig = NULL;
        raiz = nuevo;
    }
    else
    {
        nuevo->sig = raiz;
        raiz->ant = raiz;
        raiz = nuevo;
    }
}

void ListaGenericaF::imprimir()
{
    NodoF* reco = raiz;
    while (reco != NULL)
    {
        cout << reco->info << "-";
        reco = reco->sig;
    }
    cout << "\n";
}

/*
int main()
{
    ListaGenerica* lista1 = new ListaGenerica();
    lista1->insertarPrimero(10);
    lista1->insertarPrimero(20);
    lista1->insertarPrimero(5);
    lista1->imprimir();
    delete lista1;
    return 0;
}
*/