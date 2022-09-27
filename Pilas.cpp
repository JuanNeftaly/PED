#include <iostream>
using namespace std;
/*Crear un programa que pida al usuario el numero de datos a ingresar y que estos se almacenen en una pila
Luego que los datos se muestren /*

/*Variable Global*/
struct Nodo *pila = NULL;

/*Un nodo tiene dos elementos: 1. El elemento 2. El otro nodo al que apunta*/
struct Nodo
{
    int dato;
    struct Nodo *siguiente;
};

/*Funciones*/
/*Declaracion de funciones*/
void agregarElementoPila(Nodo *&, int);
void ImprimirElementoPila(Nodo *&, int &);

int main()
{
    int dato;
    int numDatos; /*Esta variable nos ayuda a saber cuantas veces pediremos el dato al usuario (ciclo for)*/

    /*Solicitando datos*/
    cout << "Cuantos numeros deseas agregar a la pila " << endl;
    cin >> numDatos;

    for (int i = 0; i < numDatos; i++)
    {
        cout << "Ingresa un numero " << endl;
        cin >> dato;
        agregarElementoPila(pila, dato);
    }

    /*Imprimiendo valores en base a funciones de la pila*/
    cout << "Imprimiendo valores de la pila: ";
    while (pila != NULL) /*Mientras la pila no este vacia*/
    {
        ImprimirElementoPila(pila, dato);
        if (pila != NULL)
        {
            /*La coma separa los datos*/
            cout << dato << " , ";
        }
        else
        {
            /*El punto nos indica que ya se han impresio todos los datos*/
            cout << dato << "." << endl;
        }
    }

    return 0;
}
/*Definiciones de las varibles que utilzaremos*/
void agregarElementoPila(Nodo *&pila, int n)
{
    struct Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    /*comentario de confirmación de que si se ha agregado a la pila, nos ayuda a saber que si se guardo*/
    cout << "El elemento " << n << " agregado a la PILA correctamente" << endl;
}
void ImprimirElementoPila(Nodo *&pila, int &n)
{
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}