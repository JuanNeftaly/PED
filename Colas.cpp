#include <iostream> 
using namespace std; 

struct Nodo *frente = NULL; 
struct Nodo *fin = NULL; 

struct Nodo
{
    int dato; 
    Nodo *siguiente; 

}nodito;

bool vaciaCola();
void insertarCola(Nodo *&, Nodo *&, int);
int eliminarCola(int &);
void suprimirCola(Nodo *&, Nodo *&, int &);
void imprimirCola();

int main()
{
    int datos, datoIngresar; 
    cout << "Cuantos datos desea agregar a la cola? "; 
    cin >> datos; 

    for(int i = 0; i <= datos; i++)
    {
        cout << "Ingresa un numero " << endl;
        cin >> datoIngresar;
        insertarCola(frente, fin, datoIngresar);
    }
        cout << "Imprimiendo valores de la pila: ";
    while (frente != NULL) 
    {   
        void imprimirCola();
        if (frente != NULL)
        {
            /*La coma separa los datos*/
            cout << datoIngresar << " , ";
        }
        else
        {
            /*El punto nos indica que ya se han impresio todos los datos*/
            cout << datoIngresar << "." << endl;
        }
    }
    
}
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
void imprimirCola()
{
    struct Nodo *temporal = frente;
    while (temporal != NULL)
    {
        cout << "Elementos de la cola" << temporal->dato << endl;
        temporal = temporal->siguiente;
    }
}