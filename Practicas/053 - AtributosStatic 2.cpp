/*
* Planteamos una clase Cuenta con dos atributos, uno que almacena el importe de la misma y otro atributo estático 
* llamado cantidad que se incrementa en uno cada vez que se crea un objeto de dicha clase. Por otro lado una clase Banco 
* que define tres objetos de la clase Cuenta. 
* Se busca imprimir la cantidad de cuentas accediendo al atributo cantidad de la clase Cuenta.
*/
#include<iostream>

using namespace std;

class Cuenta {
    float saldo;
    static int cantidad;
public:
    Cuenta(float sal) { saldo = sal; cantidad++; };
    int retornarCantidad() { return cantidad; };
};

int Cuenta::cantidad = 0;

class BancoS {
    Cuenta *cuenta1, *cuenta2, *cuenta3;
public:
    BancoS();
    ~BancoS();
    void cantidadClientes();
};

BancoS::BancoS()
{
    cuenta1 = new Cuenta(1000);
    cuenta2 = new Cuenta(3000);
    cuenta3 = new Cuenta(5000);
}

BancoS::~BancoS()
{
    delete cuenta1;
    delete cuenta2;
    delete cuenta3;
}

void BancoS::cantidadClientes()
{
    cout << cuenta1->retornarCantidad();
}

/*
int main()
{
    Banco* banco1 = new Banco();
    banco1->cantidadClientes();
    delete banco1;
    return 0;
}
*/