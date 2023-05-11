/*
	Ejercicio: Un banco tiene 3 clientes que pueden hacer depósitos y extracciones. 
	También el banco requiere que al final del día calcule la cantidad de dinero que hay depositada.
	Clases identificadas: Cliente y Banco. Luego se definen atributos y métodos de cada clase.
*/
#include<iostream>

using namespace std;

/*
* Clases
*/

class Cliente {
	char nombre[40];
	float monto;
public:
	Cliente(const char nom[40]); //const define una cadena fija.
	void depositar(int m);
	void extraer(int m);
	float retornarMonto();
	void imprimir();
};

//Colaboracion de clase Cliente con Banco (Tiene 3 Clientes que se instancian como parámetro)
class Banco {
	Cliente cliente1, cliente2, cliente3;
public:
	Banco();
	void operar();
	void depositosTotales();
};

/*
* Metodos
*/
Cliente::Cliente(const char nom[40])
{
	strcpy_s(nombre, nom);
	monto = 0;
}

void Cliente::depositar(int m)
{
	monto = monto + m;
}
// Para simplificar el problema no hemos validado que cuando se extrae dinero el atributo monto quede con un valor negativo.
void Cliente::extraer(int m)
{
	monto = monto - m;
}

float Cliente::retornarMonto()
{
	return monto;
}

void Cliente::imprimir()
{
	cout << "Nombre:" << nombre << "  Monto:" << monto << "\n\n";
}

// Se llama a los constructores de Cliente despues de " : " para inicializarlos. 
// Aun que el método esté vacio, la cabecera tiene esta funcion
Banco::Banco() : cliente1("juan"), cliente2("pedro"), cliente3("luis")
{
}

void Banco::operar()
{
	cliente1.depositar(100);
	cliente2.depositar(150);
	cliente3.depositar(200);
	cliente3.extraer(150);
}

void Banco::depositosTotales()
{
	float t = cliente1.retornarMonto() + cliente2.retornarMonto() + cliente3.retornarMonto();
	cout << "El total de dinero en el banco es: $" << t << "\n\n";
	cliente1.imprimir();
	cliente2.imprimir();
	cliente3.imprimir();
}

/*
int main()
{
	Banco banco1;
	banco1.operar();
	banco1.depositosTotales();
	return 0;
}
*/