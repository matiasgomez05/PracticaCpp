/*
* Los par�metros de un m�todo pueden ser de tipo objeto y tambi�n los podemos hacer por valor o referencia.
* Cuando un par�metro de tipo objeto se hace por valor se hace una copia id�ntica de dicho objeto en otra parte de memoria.
* Si modific�ramos los atributos de dicho par�metro no se estar�an modificando los atributos del objeto 
* que le pasamos en la llamada.
*/
#include<iostream>

using namespace std;

class Reloj {
    int hora;
    int minuto;
    int segundo;
public:
    Reloj(int hora, int minuto, int segundo) { this->hora = hora; this->minuto = minuto; this->segundo = segundo; };
    void imprimir();
    void intentoCambiar(Reloj r);
    void cambiar(Reloj& r);
    bool iguales(const Reloj& r);
};

void Reloj::imprimir()
{
    cout << hora << ":" << minuto << ":" << segundo << "\n";
}

void Reloj::intentoCambiar(Reloj r)
{
    r.hora = 1;
    r.minuto = 0;
    r.segundo = 0;
}

void Reloj::cambiar(Reloj &r)
{
    r.hora = 10;
    r.minuto = 10;
    r.segundo = 10;
}

bool Reloj::iguales(const Reloj& r)
{
    if (hora == r.hora && minuto == r.minuto && segundo == r.segundo)
        return true;
    else
        return false;
}

/*
int main()
{
    Reloj reloj1(10, 10, 10);
    Reloj reloj2(20, 20, 20);
    reloj1.intentoCambiar(reloj2);
    reloj1.imprimir();  // imprime: 10:10:10
    reloj2.imprimir();  // imprime: 20:20:20
    reloj1.cambiar(reloj2);
    reloj2.imprimir(); // imprime: 1:0:0
    if (reloj1.iguales(reloj2))
        cout << "Tienen la misma hora los relojes";
    else
        cout << "No tienen la misma hora los relojes";
    return 0;
}
*/