#include <iostream>
#include <string>
// Incluimos nuestra libreria de colas
#include ".\queue.cpp"
using namespace std;

// Declarar cola a utilizar
Cola cola_carros;

// Funciones que contienen la logica del negocio
void agregarCarro();
void mostrarCarro(Carro carro);
void consultarCola(Cola *q);
void eliminarcarro(Cola *q);
void mostrarTamanoCola(Cola *q);
void consularInicioyFinal(Cola *q);
void mostrarMensajeColaVacia();

/*
void carrosmayorprecio(Cola *q, int n);
*/


int main()
{
    initialize(&cola_carros);

    bool continuar = true;
    do
    {
        int opcion = 0;
        cout << "\n1) Agregar un nuevo carro\n";
        cout << "2) Consultar carros de la fila\n";
        cout << "3) Eliminar carro\n";
        cout << "4) Consultar tamanioo de la fila\n";
        cout << "5) Consultar incio y final de la cola\n";

        /*
        cout << "6) Consultar carros mayores a 10,000 dolares\n";
        */

        cout << "6) Salir\n";
        cout << "Opcion elegida: ";
        cin >> opcion;
        cin.ignore();

        switch (opcion)
        {
        case 1:
            agregarCarro();
            break;
        case 2:
            consultarCola(&cola_carros);
            break;
        case 3:
            eliminarcarro(&cola_carros);
            break;
        case 4:
            mostrarTamanoCola(&cola_carros);
            break;
        case 5:
            consularInicioyFinal(&cola_carros);
            break;

            /*
        case 6:
            carrosmayorprecio(&cola_carros, 10000);
            break;
            */

        case 6:
            continuar = false;
            break;
        default:
            cout << "Opcion invalida!\n";
            break;
        }
    } while (continuar);

    return 0;
}

// Implementacion funciones que contienen la logica

void agregarCarro()
{
    // Creamos un nuevo carro para completar su informacion
    Carro nuevo_carro;

    cout << "--------------------------------\n";
    cout << "--- Agregando nuevo carro a la fila ---\n";
    cout << "Ingrese la placa del carro:\n";
    getline(cin, nuevo_carro.placa);
    cout << "Ingrese el color del carro:\n";
    cin >> nuevo_carro.color;
    cout << "Ingrese el precio del carro:\n";
    cin >> nuevo_carro.precio;
    cin.ignore();

    // Agregamos el nuevo carro a la cola de carro
    enqueue(&cola_carros, nuevo_carro);
}

void mostrarCarro(Carro carro)
{
    cout << "Placa: " << carro.placa << "\n";
    cout << "Color del carro: " << carro.color << "\n";
    cout << "Precio del carro: " << carro.precio << "\n";
}

void consultarCola(Cola *q)
{
    if (empty(q))
    {
        mostrarMensajeColaVacia();
        return;
    }

    Nodo *unNodo = q->frente;
    cout << "----------- INICIO -------------\n";
    cout << "--------------------------------\n";
    mostrarCarro(unNodo->elemento);

    while (unNodo->siguiente != NULL)
    {
        unNodo = unNodo->siguiente;
        cout << "--------------------------------\n";
        mostrarCarro(unNodo->elemento);
    }
    cout << "------------ FINAL -------------\n";
}

void mostrarTamanoCola(Cola *q)
{
    int tamano = size(q);
    cout << "\nNumero de carros: " << tamano << "\n";
}

void consularInicioyFinal(Cola *q)
{
    if (empty(q))
    {
        mostrarMensajeColaVacia();
        return;
    }

    // Traer el carro del frente de la cola
    Carro carroFrente = front(q);
    cout << "----------- INICIO -------------\n";
    mostrarCarro(carroFrente);

    // Traer el carro del final de la cola
    Carro carroFinal = back(q);
    cout << "------------ FINAL -------------\n";
    mostrarCarro(carroFinal);
}

void eliminarcarro(Cola *q)
{
    if (empty(q))
    {
        mostrarMensajeColaVacia();
        return;
    }

    // Traer el carro del frente de la cola
    // Y al mismo tiempo eliminarlo
    Carro carro = dequeue(q);
    cout << "------- Eliminando carro -------\n";
    mostrarCarro(carro);
}

void mostrarMensajeColaVacia()
{
    cout << "--------------------------------\n";
    cout << "Cola vacia!\n";
    cout << "--------------------------------\n";
}

/*
void carrosmayorprecio(Cola *q, int n)
{

    int cont = 0;
    Nodo unNodo = q->frente;
    while (unNodo->siguiente != NULL)
    {
          if (unNodo.elemento.precio>10000){
            cont=cont+1;
          }

        unNodo = (unNodo)->siguiente;
        cout << "--------------------------------\n";
      
    }
}

*/