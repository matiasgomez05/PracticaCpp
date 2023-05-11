/*
	Las simulaciones permiten analizar situaciones de la realidad sin la necesidad de ejecutarlas realmente. 
	Tiene el beneficio que su costo es muy inferior a hacer pruebas en la realidad.

	Desarrollar un programa para la simulaci�n de un cajero autom�tico.
	Se cuenta con la siguiente informaci�n:
	- Llegan clientes a la puerta del cajero cada 2 � 3 minutos.
	- Cada cliente tarda entre 2 y 4 minutos para ser atendido.

	Obtener la siguiente informaci�n:
	1 - Cantidad de clientes que se atienden en 10 horas.
	2 - Cantidad de clientes que hay en cola despu�s de 10 horas.
	3 - Hora de llegada del primer cliente que no es atendido luego de 10 horas 
		(es decir la persona que est� primera en la cola cuando se cumplen 10 horas)
*/
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Cola2 {
private:
    class Nodo {
    public:
        int info;
        Nodo* sig;
    };

    Nodo* raiz;
    Nodo* fondo;
public:
    Cola2();
    ~Cola2();
    void insertar(int x);
    int extraer();
    bool vacia();
    int cantidad();
};


Cola2::Cola2()
{
    raiz = NULL;
    fondo = NULL;
}

Cola2::~Cola2()
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

void Cola2::insertar(int x)
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

int Cola2::extraer()
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

bool Cola2::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}

int Cola2::cantidad()
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


class CajeroAutomatico {
public:
    void simulacion();
};

void CajeroAutomatico::simulacion()
{
    srand(time(NULL));
    int estado = 0;
    int llegada = rand() % 2 + 2;
    int salida = -1;
    int cantAtendidas = 0;
    Cola2* cola = new Cola2();
    for (int minuto = 0; minuto < 600; minuto++)
    {
        if (llegada == minuto)
        {
            if (estado == 0)
            {
                estado = 1;
                salida = minuto + 2 + rand() % 3;
            }
            else
            {
                cola->insertar(minuto);
            }
            llegada = minuto + 2 + rand() % 2;
        }
        if (salida == minuto)
        {
            estado = 0;
            cantAtendidas++;
            if (!cola->vacia())
            {
                cola->extraer();
                estado = 1;
                salida = minuto + 2 + rand() % 3;
            }
        }
    }
    cout << "Atendidos:" << cantAtendidas << "\n";
    cout << "En cola:" << cola->cantidad() << "\n";
    cout << "Minuto llegada:" << cola->extraer();
}

/*
int main()
{
    CajeroAutomatico* cajero1 = new CajeroAutomatico();
    cajero1->simulacion();
    delete cajero1;
    return 0;
}
*/