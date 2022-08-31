#include <iostream>
using namespace std;
int main()
{
    // Declarar un arreglo
    int arreglo[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};

    // Almacenar la posicion
    int pos;

    // Almacenar el valor temporal o valor de cambio/intercambio
    int aux;

    // Estructura de repeticion Metodo de insersion
    // Recorrido de arreglo

    for (int i = 0; i < 9; i++)
    {
        // Posicion actual
        pos = i;
        // Numero del arreglo
        aux = arreglo[i];

        // Comparacion del numero de la izquierda
        while ((pos > 0) && (arreglo[pos - 1] > aux))
        {
            // Cambio con el numero de la izquierda
            arreglo[pos] = arreglo[pos - 1];
            // Interaciones hacia atras
            pos--;
        }
        // Refrescar cada iteración
        arreglo[pos] = aux;
    }
    // Imprimir
    for (int i = 0; i < 9; i++)
    {
        cout << arreglo[i] << endl;
    }

    return 0;
}