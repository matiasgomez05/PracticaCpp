/*
* Recordatorio:
* Una lista se comporta como gen�rica cuando las inserciones y extracciones se realizan en cualquier parte de la lista.
*/
#include <iostream>

using namespace std;

class ListaGenerica {
private:
    class Nodo {
    public:
        int info;
        Nodo* sig;
    };

    Nodo* raiz;
public:
    ListaGenerica();
    ~ListaGenerica();
    int cantidad();
    void insertar(int pos, int x);
    int extraer(int pos);
    void borrar(int pos);
    void intercambiar(int pos1, int pos2);
    bool vacia();
    int mayor();
    void imprimir();
    int posMayor();
    bool ordenada();
    bool existe(int x);
};

ListaGenerica::ListaGenerica()
{
    raiz = NULL;
}

ListaGenerica::~ListaGenerica()
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

int ListaGenerica::cantidad()
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

void ListaGenerica::insertar(int pos, int x)
{
    if (pos <= cantidad() + 1)
    {
        Nodo* nuevo = new Nodo();
        nuevo->info = x;
        if (pos == 1)
        {
            nuevo->sig = raiz;
            raiz = nuevo;
        }
        else
            if (pos == cantidad() + 1)
            {
                Nodo* reco = raiz;
                while (reco->sig != NULL)
                {
                    reco = reco->sig;
                }
                reco->sig = nuevo;
                nuevo->sig = NULL;
            }
            else
            {
                Nodo* reco = raiz;
                for (int f = 1; f <= pos - 2; f++)
                {
                    reco = reco->sig;
                }
                Nodo* siguiente = reco->sig;
                reco->sig = nuevo;
                nuevo->sig = siguiente;
            }
    }
}


int ListaGenerica::extraer(int pos)
{
    if (pos <= cantidad())
    {
        int informacion;
        Nodo* bor;
        if (pos == 1)
        {
            informacion = raiz->info;
            bor = raiz;
            raiz = raiz->sig;
        }
        else
        {
            Nodo* reco;
            reco = raiz;
            for (int f = 1; f <= pos - 2; f++)
            {
                reco = reco->sig;
            }
            Nodo* prox = reco->sig;
            reco->sig = prox->sig;
            informacion = prox->info;
            bor = prox;
        }
        delete bor;
        return informacion;
    }
    else
        return -1;
}

void ListaGenerica::borrar(int pos)
{
    if (pos <= cantidad())
    {
        Nodo* bor;
        if (pos == 1)
        {
            bor = raiz;
            raiz = raiz->sig;
        }
        else {
            Nodo* reco;
            reco = raiz;
            for (int f = 1; f <= pos - 2; f++)
            {
                reco = reco->sig;
            }
            Nodo* prox = reco->sig;
            reco->sig = prox->sig;
            bor = prox;
        }
        delete bor;
    }
}

void ListaGenerica::intercambiar(int pos1, int pos2)
{
    if (pos1 <= cantidad() && pos2 <= cantidad())
    {
        Nodo* reco1 = raiz;
        for (int f = 1; f < pos1; f++)
        {
            reco1 = reco1->sig;
        }
        Nodo* reco2 = raiz;
        for (int f = 1; f < pos2; f++)
        {
            reco2 = reco2->sig;
        }
        int aux = reco1->info;
        reco1->info = reco2->info;
        reco2->info = aux;
    }
}

bool ListaGenerica::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}


int ListaGenerica::mayor()
{
    if (!vacia())
    {
        int may = raiz->info;
        Nodo* reco = raiz->sig;
        while (reco != NULL)
        {
            if (reco->info > may)
            {
                may = reco->info;
            }
            reco = reco->sig;
        }
        return may;
    }
    else
        return -1;
}

void ListaGenerica::imprimir()
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


int ListaGenerica::posMayor()
{
    if (!vacia())
    {
        int may = raiz->info;
        int x = 1;
        int pos = x;
        Nodo* reco = raiz->sig;
        while (reco != NULL)
        {
            if (reco->info > may)
            {
                may = reco->info;
                pos = x;
            }
            reco = reco->sig;
            x++;
        }
        return pos;
    }
    else
        return -1;
}

bool ListaGenerica::ordenada()
{
    if (cantidad() > 1)
    {
        Nodo* reco1 = raiz;
        Nodo* reco2 = raiz->sig;
        while (reco2 != NULL)
        {
            if (reco2->info < reco1->info)
            {
                return false;
            }
            reco2 = reco2->sig;
            reco1 = reco1->sig;
        }
    }
    return true;
}

bool ListaGenerica::existe(int x)
{
    Nodo* reco = raiz;
    while (reco != NULL)
    {
        if (reco->info == x)
            return true;
        reco = reco->sig;
    }
    return false;
}
/*
int main()
{
    ListaGenerica* lg = new ListaGenerica();
    lg->insertar(1, 10);
    lg->insertar(2, 20);
    lg->insertar(3, 30);
    lg->insertar(2, 15);
    lg->insertar(1, 115);
    lg->imprimir();
    cout << "Luego de Borrar el primero\n";
    lg->borrar(1);
    lg->imprimir();
    cout << "Luego de Extraer el segundo\n";
    lg->extraer(2);
    lg->imprimir();
    cout << "Luego de Intercambiar el primero con el tercero\n";
    lg->intercambiar(1, 3);
    lg->imprimir();
    if (lg->existe(20))
        cout << "Se encuentra el 20 en la lista\n";
    else
        cout << "No se encuentra el 20 en la lista\n";
    cout << "La posici�n del mayor es:" << lg->posMayor() << "\n";
    if (lg->ordenada())
        cout << "La lista esta ordenada de menor a mayor\n";
    else
        cout << "La lista no esta ordenada de menor a mayor\n";
    delete lg;
    return 0;
}
*/