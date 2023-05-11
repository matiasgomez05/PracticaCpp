/*
* Las funciones o m�todos de la clase pueden definirse de tipo est�tico.
* Un m�todo est�tico solo puede acceder a los atributos est�ticos declarados en la clase.
* No se pueden definir dos funciones con igual nombre y que una sea est�tica y la otra no.
* Un m�todo est�tico se lo puede llamar sin la necesitad de crear un objeto de dicha clase. 
* Para poder llamarlo debemos anteceder el nombre de la clase y el modificador :: (dos veces dos puntos).
*/

#include <iostream>

using namespace std;

class Prueba {
    static int x1;
public:
    static int retornarX();
};

int Prueba::x1 = 20;

int Prueba::retornarX()
{
    return x1;
}

/*
int main()
{
    cout << Prueba::retornarX(); // 20
    return 0;
}
*/