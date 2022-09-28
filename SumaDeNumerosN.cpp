#include <iostream>
using namespace std;
// Ejercicio: Escribir una función que reciba un número entero N, y sume todos los números que están de 1 a N y retorne el resultado.
int sumaRecursiva(int n, int suma, int count)
{
    if (++count <= n)
        return sumaRecursiva(n, suma + count, count);
    else
        return suma;
}
int main()
{
    int n;
    cout << "Buenos dias, y bienvenido :D " << endl;
    cout << "Este programa suma los numeros hasta un valor n que usted asigne " << endl;
    cout << "Asi que asigne un valor a n porfavor: ";
    cin >> n;

    cout << "\nLa suma es: " << sumaRecursiva(n, 0, 0) << endl;

    system("PAUSE");
    return 0;
}
