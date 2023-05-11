/*
    Se debe desarrollar una clase que tenga las siguientes responsabilidades (clase Formula):
    - Ingresar una fórmula que contenga paréntesis, corchetes y llaves.
    - Validar que los ( ) [] y {} estén correctamente balanceados.
*/
#include <iostream>
#include <cstring>
using namespace std;

class Pila2 {
private:
    class Nodo {
    public:
        char simbolo;
        Nodo* sig;
    };

    Nodo* raiz;
public:
    Pila2();
    ~Pila2();
    void insertar(char x);
    char extraer();
    bool vacia();
};

Pila2::Pila2()
{
    raiz = NULL;
}

void Pila2::insertar(char x)
{
    Nodo* nuevo;
    nuevo = new Nodo();
    nuevo->simbolo = x;
    if (raiz == NULL)
    {
        raiz = nuevo;
        nuevo->sig = NULL;
    }
    else
    {
        nuevo->sig = raiz;
        raiz = nuevo;
    }
}

char Pila2::extraer()
{
    if (raiz != NULL)
    {
        char informacion = raiz->simbolo;
        Nodo* bor = raiz;
        raiz = raiz->sig;
        delete bor;
        return informacion;
    }
    else
    {
        return ' ';
    }
}

bool Pila2::vacia()
{
    if (raiz == NULL)
        return true;
    else
        return false;
}

Pila2::~Pila2()
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



class Formula {
    char cadena[100];
public:
    Formula();
    bool balanceada();
};

Formula::Formula()
{
    cout << "Ingrese una formula con parentesis, corchetes y llaves:";
    cin.getline(cadena, 100);
}

bool Formula::balanceada()
{
    Pila2* pila2;
    pila2 = new Pila2();
    for (int f = 0; f < strlen(cadena); f++)
    {
        if (cadena[f] == '(' || cadena[f] == '[' || cadena[f] == '{')
        {
            pila2->insertar(cadena[f]);
        }
        else
        {
            if (cadena[f] == ')')
            {
                if (pila2->extraer() != '(')
                {
                    return false;
                }
            }
            else
            {
                if (cadena[f] == ']')
                {
                    if (pila2->extraer() != '[')
                    {
                        return false;
                    }
                }
                else
                {
                    if (cadena[f] == '}')
                    {
                        if (pila2->extraer() != '{')
                        {
                            return false;
                        }
                    }
                }
            }
        }
    }
    if (pila2->vacia())
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*
int main()
{
    Formula* formula1;
    formula1 = new Formula();
    if (formula1->balanceada() == true)
    {
        cout << "La formula esta correctamente balanceada";
    }
    else
    {
        cout << "La formula no esta correctamente balanceada";
    }
    delete formula1;
    return 0;
}
*/