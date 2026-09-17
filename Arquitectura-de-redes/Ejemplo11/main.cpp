#include <iostream>
using namespace std;

int cuadrado(int x)
{
    return x * x;
}
void cuadrado(char c)
{
    cout << c << c ;
    cout << c << c ;
    cout << c << c ;
    return;
}
int main(int argc, char** argv)
{
    cout << "Usamos la funcion para elevar al cuadrado" << endl;
    cout << cuadrado(99) << endl;
    cout << "Ahora la usamos para pintar un caracter formando un cuadrado" << endl;
    cuadrado('*');
    return 0;
}
