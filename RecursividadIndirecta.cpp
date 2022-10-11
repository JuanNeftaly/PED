#include <iostream>
using namespace std;
int par(int);
int impar(int);
int main()
{
    int numero;

    /*cout << "Hola, bienvenido. Ingresa un numero: ";
    cin >> numero;*/
    if (par(5))
    {
        cout << "Es un numero par " << endl;
    }
    else
    {
        cout << "Es un numero impar " << endl;
    }

    return 0;
}
int par(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return impar(n - 1);
    }
}
int impar(int n)
{
    if (n == 0)
    {
        return 0;
    }
}