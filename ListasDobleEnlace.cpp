#include <iostream>

using namespace std;

struct Nodo
{
    int dato;
    struct Nodo *siguiente; // Apunta a nulo
    struct Nodo *anterior;  // Apunta al anterior de nulo
};

// Variable global,, donde se establece que la lista esta vacia
struct Nodo *lista = NULL;

// Declaración de funciones
void InsertarInicio(int n);
void InsertarFinal(int n);
void Imprimir();
void EliminarInicio();
void EliminarFinal();

int main()
{
    int Dato;
    int NumDatos;
    bool continuar = true;

    do
    {
        cout << "Cuantos datos desea ingresar. " << endl;
        cout << "Respuesta: ";
        cin >> NumDatos;
        int Opcion;
        cout << "Que desea hacer? " << endl;
        cout << "1. Insertar datos al Inicio" << endl;
        cout << "2. Insertar datos al final" << endl;
        cout << "3. Eliminar datos del Inicio" << endl;
        cout << "4. Eliminar datos del Final" << endl;
        cout << "5. Imprimir " << endl;
        cout << "6. Salir " << endl;
        cin >> Opcion;

        switch (Opcion)
        {
        case 1:
            for (int i = 0; i < NumDatos; i++)
            {
                cout << "Ingrese el dato: ";
                cin >> Dato;
                InsertarInicio(Dato);
            }

            break;

        case 2:
            for (int i = 0; i < NumDatos; i++)
            {
                cout << "Ingrese el dato: ";
                cin >> Dato;
                InsertarFinal(Dato);
            }

            break;

        case 3:
            EliminarInicio();

            break;
        case 4:
            EliminarFinal();

            break;

        case 5:
            Imprimir();

            break;

        case 6:
            continuar = false;

            break;

        default:
            cout << "Opcion invalida papi " << endl;
            break;
        }

    } while (continuar);

    return 0;
}

// Insertar nodos a la lista
void InsertarInicio(int n)
{
    struct Nodo *nuevoNodo = new Nodo();
    struct Nodo *temporal = lista;

    if (nuevoNodo != NULL)
    {
        nuevoNodo->dato = n;
        nuevoNodo->siguiente = NULL;
        nuevoNodo->anterior = NULL;
        // Si la lista esta vacia
        if (lista == NULL)
        {
            lista = nuevoNodo;
        }
        else
        {
            // Insertar al inicio
            nuevoNodo->siguiente = lista;
            lista->anterior = nuevoNodo;
            lista = nuevoNodo;
        }
    }
    else
    {
        cout << "No se pueden agregar mas nodos";
    }
}

void InsertarFinal(int n)
{
    struct Nodo *nuevoNodo = new Nodo();
    struct Nodo *temporal = lista;

    if (nuevoNodo != NULL)
    {
        nuevoNodo->dato = n;
        nuevoNodo->siguiente = NULL;
        nuevoNodo->anterior = NULL;
        // Si la lista esta vacia
        if (lista == NULL)
        {
            lista = nuevoNodo;
        }
        else
        {
            // Insertar al final
            while (temporal->siguiente != NULL)
            {
                temporal = temporal->siguiente;
            }
            temporal->siguiente = nuevoNodo;
            nuevoNodo->anterior = temporal;
        }
    }
    else
    {
        cout << "No se pueden agregar mas nodos";
    }
}

// Borrar el ultimo nodo de la lista
void EliminarFinal()
{
    struct Nodo *temporal = lista;
    struct Nodo *temporal2 = NULL;

    if (lista != NULL)
    {
        if (temporal->siguiente != NULL)
        {
            while (temporal->siguiente != NULL)
            {
                temporal = temporal->siguiente;
            }

            temporal2 = temporal->anterior;
            temporal2->siguiente = NULL;
            delete temporal;
        }
        else
        {
            delete lista;
            lista = NULL;
        }
    }
    else
    {
        cout << "Lista vacia";
    }
}

// Borrar el primer nodo de la lista
void EliminarInicio()
{
    struct Nodo *temporal = lista;

    if (lista != NULL)
    {
        if (temporal->siguiente != NULL)
        {
            lista = lista->siguiente;
            delete temporal;
            // temporal = NULL;
            lista->anterior = NULL;
        }
        else
        {
            delete lista;
            lista = NULL;
        }
    }
    else
    {
        cout << "Lista vacia";
    }
}

void Imprimir()
{
    struct Nodo *temporal = lista;
    if (temporal != NULL)
    {
        // Imprimir cuando se inserta al final de la lista
        while (temporal != NULL)
        {
            cout << "Lista " << temporal->dato << " Direccion " << temporal << " Dir siguiente " << temporal->siguiente << " Dir anterior " << temporal->anterior << endl;
            temporal = temporal->siguiente;
        }
    }
    else
    {
        cout << "Lista vacia";
    }
}