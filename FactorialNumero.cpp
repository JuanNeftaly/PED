#include <iostream>
using namespace std;

int FactorialRecursiva(int);

int main()
{
    cout << FactorialRecursiva(5) << endl;
    // Torres de Hanói. Juego de lógica
    return 0;
}

int FactorialRecursiva(int n)
{
    // Condicion de salida outpu
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        // Llamada directa a la funcion recursiva
        return n * FactorialRecursiva(n - 1);
    }
}