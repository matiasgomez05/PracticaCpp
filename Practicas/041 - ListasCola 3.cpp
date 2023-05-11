/*
    Problema:
    Un supermercado tiene tres cajas para la atención de los clientes.
    Las cajeras tardan entre 7 y 11 minutos para la atención de cada cliente.
    Los clientes llegan a la zona de cajas cada 2 ó 3 minutos. 
    (Cuando el cliente llega, si todas las cajas tienen 6 personas, el cliente se marcha del supermercado)
    Cuando el cliente llega a la zona de cajas elige la caja con una Cola3 menor.

    Realizar una simulación durante 8 horas y obtener la siguiente información:
    a - Cantidad de clientes atendidos por cada caja.
    b - Cantidad de clientes que se marcharon sin hacer compras.
    c - Tiempo promedio en Cola3.
*/
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Cola3 {
private:
    class Nodo {
    public:
        int info;
        Nodo* sig;
    };

    Nodo* raiz;
    Nodo* fondo;
public:
    Cola3();
    ~Cola3();
    void insertar(int x);
    int extraer();
    bool vacia();
    int cantidad();
};


Cola3::Cola3()
{
    raiz = NULL;
    fondo = NULL;
}

Cola3::~Cola3()
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

void Cola3::insertar(int x)
{
    Nodo* nuevo;
    nuevo = new Nodo();
    nuevo->info = x;
    nuevo->sig = NULL;
    if (vacia())
    {
        raiz = nuevo;
        fondo = nuevo;
    }
    else
    {
        fondo->sig = nuevo;
        fondo = nuevo;
    }
}

int Cola3::extraer()
{
    if (!vacia())
    {
        int informacion = raiz->info;
        Nodo* bor = raiz;
        if (raiz == fondo)
        {
            raiz = NULL;
            fondo = NULL;
        }
        else
        {
            raiz = raiz->sig;
        }
        delete bor;
        return informacion;
    }
    else
        return -1;
}

bool Cola3::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}

int Cola3::cantidad()
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


class Supermercado {
public:
    void simulacion();
};

void Supermercado::simulacion()
{
    int estado1 = 0, estado2 = 0, estado3 = 0;
    int marchan = 0;
    int llegada = 2 + rand() % 2;
    int salida1 = -1, salida2 = -1, salida3 = -1;
    int cantAte1 = 0, cantAte2 = 0, cantAte3 = 0;
    int tiempoEnCola3 = 0;
    int cantidadEnCola3 = 0;
    Cola3* Cola31 = new Cola3();
    Cola3* Cola32 = new Cola3();
    Cola3* Cola33 = new Cola3();
    srand(time(NULL));
    for (int minuto = 0; minuto < 480; minuto++)
    {
        if (llegada == minuto)
        {
            if (estado1 == 0)
            {
                estado1 = 1;
                salida1 = minuto + 7 + rand() % 5;
            }
            else
            {
                if (estado2 == 0)
                {
                    estado2 = 1;
                    salida2 = minuto + 7 + rand() % 5;
                }
                else
                {
                    if (estado3 == 0)
                    {
                        estado3 = 1;
                        salida3 = minuto + 7 + rand() % 5;
                    }
                    else
                    {
                        if (Cola31->cantidad() == 6 && Cola32->cantidad() == 6 && Cola33->cantidad() == 6)
                        {
                            marchan++;
                        }
                        else
                        {
                            if (Cola31->cantidad() <= Cola32->cantidad() && Cola31->cantidad() <= Cola33->cantidad())
                            {
                                Cola31->insertar(minuto);
                            }
                            else
                            {
                                if (Cola32->cantidad() <= Cola33->cantidad())
                                {
                                    Cola32->insertar(minuto);
                                }
                                else
                                {
                                    Cola33->insertar(minuto);
                                }
                            }
                        }
                    }
                }
            }
            llegada = minuto + 2 + rand() % 2;
        }
        if (salida1 == minuto)
        {
            cantAte1++;
            estado1 = 0;
            if (!Cola31->vacia())
            {
                estado1 = 1;
                int m = Cola31->extraer();
                salida1 = minuto + 7 + rand() % 5;
                tiempoEnCola3 = tiempoEnCola3 + (minuto - m);
                cantidadEnCola3++;
            }
        }
        if (salida2 == minuto)
        {
            cantAte2++;
            estado2 = 0;
            if (!Cola32->vacia())
            {
                estado2 = 1;
                int m = Cola32->extraer();
                salida2 = minuto + 7 + rand() % 5;
                tiempoEnCola3 = tiempoEnCola3 + (minuto - m);
                cantidadEnCola3++;
            }
        }
        if (salida3 == minuto)
        {
            cantAte3++;
            estado3 = 0;
            if (!Cola33->vacia())
            {
                estado3 = 1;
                int m = Cola33->extraer();
                salida3 = minuto + 7 + rand() % 5;
                tiempoEnCola3 = tiempoEnCola3 + (minuto - m);
                cantidadEnCola3++;
            }
        }
    }
    cout << "Clientes atendidos por caja: caja1=" << cantAte1 << "  caja2=" << cantAte2 << "  caja3=" << cantAte3 << "\n";
    cout << "Clientes totales: " << cantAte1 + cantAte2 + cantAte3 << endl;
    cout << "Se marchan sin hacer compras:" << marchan << "\n";
    if (cantidadEnCola3 > 0)
    {
        int tiempoPromedio = tiempoEnCola3 / cantidadEnCola3;
        cout << "Tiempo promedio en Cola:" << tiempoPromedio << "\n";
    }
}

/*
int main()
{
    Supermercado* super1;
    super1 = new Supermercado();
    super1->simulacion();
    delete super1;
    return 0;
}
*/