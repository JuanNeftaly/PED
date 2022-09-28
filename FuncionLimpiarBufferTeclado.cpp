// Se ha solicitado al programador crear un programa que:
// 1. solicite al usuario su nombre y edad (puede ser en struct si lo desea)
// 2. Que contenga una función que limpie el buffer del teclado
#include <iostream>
// Inclui esta libreria para que copile el fflush
#include <stdio.h>
using namespace std;

// Variables globales
string nombre;
int edad;
int aux;

// Declaracion de funcion
int LimpiarBuffer(int);

int main()
{

    cout << "Buenos dias :D" << endl;

    cout << "Digite su edad: ";
    cin >> edad;
    // Llamado de la funcion
    LimpiarBuffer(aux);

    cout << "Digite su nombre: ";
    getline(cin, nombre);

    cout << "Tu nombre: " << nombre << "y su edad es: " << edad << endl;
    return 0;
}
// La Funcion
int LimpiarBuffer(int aux)
{
    fflush(stdin);
    return aux;
}