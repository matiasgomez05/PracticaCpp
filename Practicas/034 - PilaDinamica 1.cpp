/*
	Si definimos un vector con 10000 componentes de tipo entero en la función main 
	debemos tener en cuenta que 40 Kb (si cada entero ocupa 4 bytes) de la pila estática estará reservado para dicha estructura.
	Es común que en programas de mediano y gran tamaño la pila estática no nos alcance para almacenar los datos. 
	En estos casos debemos recurrir a la PILA DINAMICA.

	La PILA DINAMICA solo se puede acceder por medio de punteros.
	La pila dinámica solo esta limitada por la cantidad de memoria ram del equipo.

	Para acceder al espacio de memoria llamada Pila Dinámica debemos solicitarla al sistema operativo.
	Para solicitar espacio en la pila dinámica debemos utilizar el operador new y es fundamental devolverla mediante el operador
	delete (la no devolución del espacio solicitado hará que nuestra computadora en algún momento se bloquee por falta de 
	espacio en la memoria ram)
	La administración de la memoria dinámica ofrece una gran libertad al programador pero trae como contrapartida una gran 
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