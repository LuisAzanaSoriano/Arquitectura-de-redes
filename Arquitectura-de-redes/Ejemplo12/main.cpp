#include <iostream>
using namespace std;

int cuadrado(int x)
{
    return x * x;
}
void cuadrado(char c)
{
    cout << c << c << endl;
    cout << c << c << endl;
    return;
}
{
    cout << "Usamos la funcion para elevar al cuadrado" << endl;
    cout << cuadrado(67) << endl;
    cout << "Ahora la usamos para pintar un caracter formando un cuadrado" << endl;
    cuadrado('*');
    return 0;
}
