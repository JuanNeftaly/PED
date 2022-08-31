#include <iostream>
using namespace std;
int main()
{
    // Método burbuja

    // Declaración de un arreglo
    int arreglo[] = {7, 5, 1, 1, 4};
    // Declarar una variable que almacene el valor de intercambio
    int aux;

    // Recorrer el arreglo
    for (int i = 0; i < 5; i++)
    {
        // Comparación entre elementos actual y siguiente
        for (int j = 0; j < 5; j++)
        {
            // Comparacion del valor actual es mayor al siguiente
            if (arreglo[j] > arreglo[j + 1])
            {
                // Intercambio de valores
                aux = arreglo[j];
                // Numero actual es igual al numero siguiente
                arreglo[j] = arreglo[j + 1];
                arreglo[j + 1] = aux;
            }
        }
    }

    // Imprimir resultados de el ciclo
    for (int i = 0; i < 5; i++)
    {
        cout << arreglo[i] << endl;
    }

    return 0;
}