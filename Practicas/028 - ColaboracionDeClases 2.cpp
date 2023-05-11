/*
	Plantear un programa que permita jugar a los dados. 
	Las reglas de juego son: se tiran tres dados si los tres salen con el mismo valor mostrar un mensaje que "gano", sino "perdió".
*/
#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

class Dado {
    int valor;
public:
    void tirarDado();
    void resultado();
    int retornarValor();
};

class Juego {
    Dado dado1, dado2, dado3;
public:
    void jugar();
    void victoria();
};

void Dado::tirarDado()
{
    valor = rand() % 6 + 1;
}

void Dado::resultado()
{
    cout << "Valor del Dado: " << valor << endl;
}

int Dado::retornarValor()
{
    return valor;
}


void Juego::jugar()
{
    dado1.tirarDado();
    dado1.resultado();

    dado2.tirarDado();
    dado2.resultado();

    dado3.tirarDado();
    dado3.resultado();
}

void Juego::victoria() {
    if (dado1.retornarValor() == dado2.retornarValor() &&
        dado1.retornarValor() == dado3.retornarValor())
    {
        cout << "Gano";
    }
    else
    {
        cout << "Perdio";
    }
}
/*
int main()
{
    srand(time(NULL));
    Juego juego1;
    juego1.jugar();
    juego1.victoria();
    return 0;
}
*/