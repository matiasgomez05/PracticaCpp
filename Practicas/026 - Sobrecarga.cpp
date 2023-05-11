/*
	Una característica de C++ con respecto a los métodos es que podemos definir varios con el mismo nombre.
	Cuando definimos dos o más métodos con el mismo nombre decimos que los estamos sobrecargando.
	La restricción para la sobrecarga de métodos es que los mismos deben diferir en cantidad o tipo de parámetros. 
	Es decir podemos definir dos métodos con el mismo nombre pero uno tenga por ejemplo 3 parámetros y otro tenga 2 parámetros:
		- void mayor(int x1,int x2,int x3)
		- void mayor(int x1,int x2)
    El constructor tambien es un metodo que podria sobrecargarse.
*/
#include<iostream>

using namespace std;

class Matematica {
public:
    //El mayor entero entre dos valores
    int mayor(int x1, int x2);
    //El mayor entero entre tres valores
    int mayor(int x1, int x2, int x3);
    //El mayor decimal entre dos valores
    float mayor(float x1, float x2);
    //El mayor decimal entre tres valores
    float mayor(float x1, float x2, float x3);
};

int Matematica::mayor(int x1, int x2)
{
    return (x1 > x2)? x1 : x2;
}

int Matematica::mayor(int x1, int x2, int x3)
{
    return (x1 > x2 && x1 > x3) ? x1 : (x2 > x3)? x2 : x3;
}

float Matematica::mayor(float x1, float x2)
{
    return (x1 > x2) ? x1 : x2;
}

float Matematica::mayor(float x1, float x2, float x3)
{
    return (x1 > x2 && x1 > x3) ? x1 : (x2 > x3) ? x2 : x3;
}
/*
int main()
{
    Matematica m1;
    cout << "Mayor entre 6 y 8 : ";
    cout << m1.mayor(6, 8) << endl;
    cout << "Mayor entre 10, 40 y 5 : ";
    cout << m1.mayor(10, 40, 5) << endl;
    cout << "Mayor entre 6.2  y  9.3 : ";
    cout << m1.mayor(6.2f, 9.3f) << endl;
    cout << "Mayor entre 7 , 12.5  y  4.2 : ";
    cout << m1.mayor(7.0f, 12.5f, 4.2f) << endl;
    return 0;
}
*/