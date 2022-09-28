#include <iostream>
using namespace std;
// Ejercicio: Escribir una función que reciba dos números enteros A y B, y retorne el resultado de elevar el número A a la potencia B.
double potencia(int x, int y)
{
    if (y == 0)
        return 1;
    else
        return x * (potencia(x, y - 1));
}
int main()
{
    int x, y;
    cout << "Buenos dias, y bienvenido :C " << endl;
    cout << "Este programa eleva un numero x a una potencia y " << endl;
    cout << "Introduzca base: ";
    cin >> x;
    do
    {
        cout << " Introduzca exponente, este no puede ser negativo: " << endl;
        cin >> y;
    } while (y < 0);
    cout << x << " elevado a " << y << " = " << potencia(x, y) << endl;
    system("PAUSE");
    return 0;
}
