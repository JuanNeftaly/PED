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
        int Opcion;
        cout << endl;
        cout << "Bienvenido. Que desea hacer? " << endl;
        cout << "::::::::::::::::::::::::::::::::::" << endl;
        cout << ":: 1. Insertar datos al Inicio  ::" << endl;
        cout << ":: 2. Insertar datos al final   ::" << endl;
        cout << ":: 3. Eliminar datos del Inicio ::" << endl;
        cout << ":: 4. Eliminar datos del Final  ::" << endl;
        cout << ":: 5. Imprimir                  ::" << endl;
        cout << ":: 6. Salir                     ::" << endl;
        cout << "::::::::::::::::::::::::::::::::::" << endl;
        cout << endl;
        cout << "Option: ";
        cin >> Opcion;

        switch (Opcion)
        {
        case 1:
            cout << "Ingrese el dato: ";
            cin >> Dato;
            InsertarInicio(Dato);

            break;

        case 2:
            cout << "Ingrese el dato: ";
            cin >> Dato;
            InsertarFinal(Dato);

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

            cout << "Elemento agregado al inicio " << endl;
        }
        else
        {
            // Insertar al inicio
            nuevoNodo->siguiente = lista;
            lista->anterior = nuevoNodo;
            lista = nuevoNodo;

            cout << "Elemento agregado al inicio " << endl;
        }
    }
    else
    {
        cout << "No se pueden agregar mas nodos" << endl;
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

            cout << "Elemento agregado al final " << endl;
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

            cout << "Elemento agregado al final " << endl;
        }
    }
    else
    {
        cout << "No se pueden agregar mas nodos" << endl;
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

            cout << "Elemento eliminado del final " << endl;
        }
        else
        {
            delete lista;
            lista = NULL;

            cout << "Elemento eliminado de final " << endl;
        }
    }
    else
    {
        cout << "Lista vacia" << endl;
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

            cout << "Elemento eliminado de el inicio " << endl;
        }
        else
        {
            delete lista;
            lista = NULL;

            cout << "Elemento eliminado de inicio " << endl;
        }
    }
    else
    {
        cout << "Lista vacia" << endl;
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
            cout << endl;
            cout << "Lista " << temporal->dato << " Direccion " << temporal << " Direccion siguiente " << temporal->siguiente << " Direccion anterior " << temporal->anterior << endl;
            temporal = temporal->siguiente;
        }
    }
    else
    {
        cout << "Lista vacia" << endl;
    }
}