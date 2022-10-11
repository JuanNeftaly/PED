#include <iostream>
using namespace std;
// Ejercicio: Escribir una función que reciba un número entero N, y multiplique todos los números que están de 1 a N y retorne el resultado.
long double factorial(int n)
{
    long double fact;
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
int main()
{
    int n;
    cout << "Buenos dias, y bienvenido :O " << endl;
    cout << "Este programa multiplica los numeros hasta un numero n que usted asigne " << endl;
    cout << "Asi que porfavor asigne un valor a n: ";
    cin >> n;
    cout << "Los numeros multiplicados del 1 hacia: " << n << " es: " << factorial(n) << endl;
    system("PAUSE");
    return 0;
}
