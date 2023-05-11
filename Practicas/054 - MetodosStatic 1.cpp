/*
* Las funciones o métodos de la clase pueden definirse de tipo estático.
* Un método estático solo puede acceder a los atributos estáticos declarados en la clase.
* No se pueden definir dos funciones con igual nombre y que una sea estática y la otra no.
* Un método estático se lo puede llamar sin la necesitad de crear un objeto de dicha clase. 
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