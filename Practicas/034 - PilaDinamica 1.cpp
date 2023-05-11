/*
	Si definimos un vector con 10000 componentes de tipo entero en la funci�n main 
	debemos tener en cuenta que 40 Kb (si cada entero ocupa 4 bytes) de la pila est�tica estar� reservado para dicha estructura.
	Es com�n que en programas de mediano y gran tama�o la pila est�tica no nos alcance para almacenar los datos. 
	En estos casos debemos recurrir a la PILA DINAMICA.

	La PILA DINAMICA solo se puede acceder por medio de punteros.
	La pila din�mica solo esta limitada por la cantidad de memoria ram del equipo.

	Para acceder al espacio de memoria llamada Pila Din�mica debemos solicitarla al sistema operativo.
	Para solicitar espacio en la pila din�mica debemos utilizar el operador new y es fundamental devolverla mediante el operador
	delete (la no devoluci�n del espacio solicitado har� que nuestra computadora en alg�n momento se bloquee por falta de 
	espacio en la memoria ram)
	La administraci�n de la memoria din�mica ofrece una gran libertad al programador pero trae como contrapartida una gran 
	responsabilidad para administrarla correctamente.
*/
#include<iostream>

using namespace std;
/*
int main()
{
	int* p;
	p = new int[5];
	for (int f = 0;f < 5;f++)
	{
		cout << "Ingrese elemento: ";
		cin >> p[f];
	}
	cout << "contenido del vector: ";
	for (int f = 0;f < 5;f++)
	{
		cout << p[f] << "-";
	}

	delete[]p;
	return 0;
}
*/