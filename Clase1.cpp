#include <iostream>
using namespace std;

int main()
{
    // Solicitar al usuario el tamaño del arreglo y los valores que va a contener el arreglo, convertir a funcion el recorrido y la suma de el arreglo
    // Arreglos, declaracion, asignacion, cambio de valor a traves del indice, recorrido
    // DECLARACION Y ASIGNACION
    int lista[] = {4, 8, 9, 1, 6, 2, 7, 8, 1, 5, 3, 2, 1};
    int suma = 0;

    cout << lista[4] << endl;
    // ACCEDER A UNA POSICION Y CAMBIAR VALOR
    lista[4] = 3;
    cout << lista[4] << endl;

    // Sizeof Determina el numero de elementos del arreglo
    int tamanoArreglo = sizeof(lista) / sizeof(int);
    cout << tamanoArreglo << endl;

    // RECORRER EL ARREGLO
    for (int i = 0; i < tamanoArreglo; i++)
    {
        cout << lista[i] << endl;
        suma += lista[i];
    }
    cout << "total de la suma " << suma << endl;

    return 0;
}