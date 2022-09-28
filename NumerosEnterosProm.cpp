#include <iostream>
using namespace std;
// Ejercicio: Escribir una función que reciba un arreglo de números enteros y retorne el promedio
// Declaración e Inicialización de la función
float promedio(float vector[], int i, int n, float resultado)
{
    if (i < n)
    {
        resultado = resultado + vector[i];
        return promedio(vector, i + 1, n, resultado);
    }
    else
    {
        return resultado / n;
    }
}
int main()
{

    int n;

    cout << "Buenos dias, y bienvenido :3 " << endl;
    cout << "Este programa promedia un arreglo de numeros enteros " << endl;
    cout << "Ingrese el total de numeros a promediar porfavor :D ";
    cin >> n;
    float *vector = new float[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Ingrese [" << (i + 1) << "] :";
        cin >> vector[i];
    }

    float resultado = promedio(vector, 0, n, 0);
    cout << "El promedio es:" << resultado << endl;

    system("PAUSE");
    return 0;
}