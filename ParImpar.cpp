#include <iostream>
using namespace std;
int par(int);
int impar(int);

int main()
{

    if (par(8))
    {
        cout << "Número es par";
    }
    else
    {
        cout << "Número es impar";
    }
    return 0;
}

// Recursividad indirecta
int par(int n)
{
    if (n == 0)
    {
        return true;
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
        return false;
    }
    else
    {
        return par(n - 1);
    }
}