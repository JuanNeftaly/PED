/* Lo primero que entra, es lo primero que sale */ 
#include <iostream>
using namespace std; 

/* Creación de punteros */
struct Nodo *frente = NULL; 
struct Nodo *fin = NULL; 

struct Nodo
{
    int dato; 
    Nodo *siguiente; 

}nodito;

void menu();

/* funciones */
bool vaciaCola();
void insertarCola(Nodo *&, Nodo *&, int);
int eliminarCola(int &);
void imprimirCola();
void imprimirFrente();
void imprimirFinal();
void suprimirCola(Nodo *&, Nodo *&, int &);

int main()
{
    int opcion; 
    int dato; 
    
    cout << "Bienvenido" << endl; 
    cout << "::: MENÚ :::" << endl; 
        cout << "1. Insertar un caracter a la cola " << endl; 
        cout << "2. Mostar los elementos de la cola " << endl; 
        cout << "3. SALIR " << endl; 
        cout << "Opción: ";
        cin >> opcion; 
    do{
        switch(opcion)
        {
            case 1: 
                cout << "Ingrese el dato a ingresar " << endl; 
                cin >> dato; 
                insertarCola(frente, fin, dato);

            break; 

            case 2: 
                cout << "Mostrando elementos en la cola " << endl; 
                while(frente != NULL)
                {
                    suprimirCola(frente, fin, dato); 
                    if(frente != NULL)
                    {
                        cout << dato << ",";
                    }
                    else
                    {
                        cout << dato << ".";
                    }
                }
            system("pause");
            break; 

            case 3: 

            break; 
        }
        system("cls");
    }while(opcion != 3);


    return 0; 
}
/* Cola vacia */
// Operación vacia
bool vaciaCola()
{
    // return (frente == NULL)? true : false; "Metodo corto operador ternario"
    if (frente == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
/*agregar elementos
1. Crear espacio en memoria para almacenar nodo
2. Asignar ese nuevo nodo al dato que queremos insertar 
3. Asignar los punteros frente y fin hacia el nuevo nodo */
void insertarCola(Nodo *&frente, Nodo *&fin, int n)
{
    Nodo *nuevo_nodo = new Nodo(); // Paso 1. 
    
    nuevo_nodo->dato = n; 
    nuevo_nodo->siguiente = NULL; // Paso 2. 

    if(vaciaCola())
    {
        frente = nuevo_nodo;
    }
    else 
    {
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo; // Paso 3. 

    cout << "Los elementos " << n << " agregados a la cola " <<endl; 
    cout << "::::::::::::::::::::::::::::::::::::::::::: " << endl; 
}
/*quitar elementos*/
// Desencolar -- inicio de la lista
int eliminarCola(int &n)
{
    if (!vaciaCola())
    {
        n = frente->dato;
        struct Nodo *temporal = frente;
        if (frente == fin)
        {
            frente = NULL;
            fin = NULL;
        }
        else
        {
            frente = frente->siguiente;
        }
        delete temporal;
        return n;
    }
    else
    {
        return -1;
    }
}

// Imprimir elementos de la cola
void imprimirCola()
{
    struct Nodo *temporal = frente;
    while (temporal != NULL)
    {
        cout << "Elementos de la cola" << temporal->dato << endl;
        temporal = temporal->siguiente;
    }
}

void suprimirCola(Nodo *&frente, Nodo *&fin, int &n)
{
    n = frente->dato; 
    Nodo *aux = frente; 

    if (frente == fin)
    {
        frente == NULL; 
        fin == NULL; 
    }
    else 
    {
        frente = frente->siguiente;
    }
    delete aux; 
}