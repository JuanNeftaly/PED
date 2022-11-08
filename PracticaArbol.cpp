#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

// Variable struct
struct Nodo
{
    int dato;
    Nodo *der;
    Nodo *izq;
};

// Prototipos funciones
void Menusito();
Nodo *crearNodo(int);
void Insertar(Nodo *&arbol, int);
void mostrarArbol(Nodo *arbol, int);
void inOrden(Nodo *arbol);
void preOrden(Nodo *arbol);
void postOrden(Nodo *arbol);
// Busqueda Arboles
int buscarmayor(Nodo *arbol);
int buscarmenor(Nodo *arbol);

// asignacion de valor de arbol
Nodo *arbol = NULL;

int main()
{
    Menusito();
    return 0;
}
void Menusito()
{
    int dato, opcion;
    int cont = 0;
    do
    {
        cout << "[1] Insertar un nuevo nodo" << endl;
        cout << "[2] Mostrar el arbol" << endl;
        cout << "[3] Recorrer el arbol en Inorden" << endl;
        cout << "[4] Recorrer el arbol en PreOrden" << endl;
        cout << "[5] Recorrer el arbol en PostOrden" << endl;
        cout << "[6] Buscar Mayor" << endl;
        cout << "[7] Buscar Menor" << endl;
        cout << "[8] Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Digite un numero: ";
            cin >> dato;
            Insertar(arbol, dato); // Insertamos un nuevo nodo
            cout << "\n";
            system("pause");
            break;
        case 2:
            cout << "\nMostrando el arbol completo:\n\n";
            mostrarArbol(arbol, cont);
            cout << "\n";
            system("pause");
            break;
        case 3:
            cout << "El recorrido en Inorden es: " << endl;
            inOrden(arbol);
            cout << "\n";
            system("pause");
            break;
        case 4:
            cout << "El recorrido en PreOrden es" << endl;
            preOrden(arbol);
            cout << "\n";
            system("pause");
            break;
        case 5:
            cout << "El recorrido en PostOrden es" << endl;
            postOrden(arbol);
            cout << "\n";
            system("pause");
            break;
        case 6:
            cout << "El Mayor es: " << buscarmayor(arbol) << endl;
            system("pause");
            break;

        case 7:
            cout << "El Menor es: " << buscarmenor(arbol) << endl;
            system("pause");
            break;
        case 8:
            break;
        }
        system("cls");
    } while (opcion != 6);
}
// Creación de arbol
Nodo *crearNodo(int n)
{
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->der = NULL;
    nuevo_nodo->izq = NULL;

    return nuevo_nodo;
}
// Insetar dato al arbol
void Insertar(Nodo *&arbol, int n)
{
    // Si el arbol esta vacio
    if (arbol == NULL)
    {
        Nodo *nuevo_nodo = crearNodo(n);
        arbol = nuevo_nodo;
    }
    else
    {
        // Usamos el valor de la raiz
        int valorRaiz = arbol->dato;
        // Para saber si pertenecera a izquierda o derecha
        if (n < valorRaiz)
        {
            // Si es menor insertamos a la izquierda
            Insertar(arbol->izq, n);
        }
        else
        {
            // Si el elemento es mayor a la raiz, insertamos al derecho
            Insertar(arbol->der, n);
        }
    }
}
// Mostrar el arbol
void mostrarArbol(Nodo *arbol, int contador)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        mostrarArbol(arbol->der, contador + 1);
        for (int i = 0; i < contador; i++)
        {
            cout << " ";
        }
        cout << arbol->dato << endl;
        mostrarArbol(arbol->izq, contador + 1);
    }
}
// Mostrar InOrder
void inOrden(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        inOrden(arbol->izq);
        cout << arbol->dato << " - ";
        inOrden(arbol->der);
    }
}
// Mostrar PreOrden
void preOrden(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        cout << arbol->dato << "-";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}
// Mostrar PostOrden
void postOrden(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        postOrden(arbol->izq);
        postOrden(arbol->der);
        cout << arbol->dato << "-";
    }
}
// Busqueda en Nodos
int buscarmenor(Nodo *arbol)
{
    int menor;
    while (arbol->izq != NULL)
        arbol = arbol->izq;
    menor = arbol->dato;
    return menor;
}
int buscarmayor(Nodo *arbol)
{
    int mayor;
    while (arbol->der != NULL)
        arbol = arbol->der;
    mayor = arbol->dato;
    return mayor;
}