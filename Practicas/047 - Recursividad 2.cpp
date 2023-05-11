/*
* Imprimir la información de una lista simplemente encadenada de atrás para adelante.
*/
#include <iostream>

using namespace std;

class ListaRecursiva {
    class Nodo {
    public:
        int info;
        Nodo* sig;
    };
    Nodo* raiz;
    void imprimir(Nodo* reco);
public:
    ListaRecursiva();
    ~ListaRecursiva();
    void insertarPrimero(int x);
    void imprimir();
};

ListaRecursiva::ListaRecursiva()
{
    raiz = NULL;
}

ListaRecursiva::~ListaRecursiva()
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


void ListaRecursiva::insertarPrimero(int x)
{
    Nodo* nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = raiz;
    raiz = nuevo;
}

void ListaRecursiva::imprimir()
{
    imprimir(raiz);
}

void ListaRecursiva::imprimir(Nodo* reco)
{
    if (reco != NULL)
    {
        imprimir(reco->sig);
        cout << reco->info << "-";
    }
}

/*
int main()
{
    ListaRecursiva* lr = new ListaRecursiva();
    lr->insertarPrimero(10);
    lr->insertarPrimero(4);
    lr->insertarPrimero(5);
    lr->imprimir();
    delete lr;
    return 0;
}
*/