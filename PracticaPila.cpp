/* Este programa es una practica de Pilas
donde apilaremos informacion de un libro
para simular que se busca en una base de datos*/

#include <iostream>
#include <string>
using namespace std; 

/*varible global*/
struct NodoLibros *pila = NULL; 

/*creacion de la Pila*/
struct NodoLibros
{
    string nombreLibro; 
    double precioLibro; 
    struct NodoLibros *siguiente; 
}Libro;
/*Declaración de funciones.
IMPORTANTE EN FUNCIONES QUE LLEVAN MAS DE UN PARAMETRO
en un ejercicio anterior solo llevaban dos tipos de parametros 
los cuales eran el siguiente que apunta al siguiente nodo 
y el n que era el dato que nosotros ibamos a ingresar.
Ahora bien, esto se puede tomar como un registro, asi que 
tomamos nuevas variables que son tipo string y tipo duoble 
No hay de que alarmarse, solo se necesitan agregar a la función estos nuevos parametros */
void agregarLibro(NodoLibros *&, string, double); 
void imprimirLibro(NodoLibros *&, string &, double &);

int main()
{
    /*Variables locales*/
    int numDatos; /*Variable util para el ciclo for, nos ayuda a saber cuantas veces pediran los datos*/
    
    cout << "Bienvenido. Ingrese el numero de libros a colocar: ";
    cin>>numDatos; 

    for (int i = 0; i < numDatos; i++)
    {
        cout << "Coloque el nombre del libro sin espacios " << endl; 
        cout << endl; 
        cout << "nombre "; 
        cin >> Libro.nombreLibro;
        cout << "precio "; 
        cin >> Libro.precioLibro;
        agregarLibro(pila, Libro.nombreLibro, Libro.precioLibro); 
        /* La función debe de ser declarada hasta el final de 
        toda la recogida de datos. Esto porque la función 
        toma tres parametros, entonces si la declaramos cuando 
        solo se ha tomado 1 de las varibles le haran falta 
        las otras dos. Recordemos que "Pila" es una variable global */
    }


    /*Imprimiendo valores de la PilaLibros*/
    cout << "Imprimiendo libros de su compra: " << endl;
    while (pila != NULL) /*Mientras la pila no este vacia*/
    {
        imprimirLibro(pila, Libro.nombreLibro, Libro.precioLibro);
        if (pila != NULL)
        {
            cout << "Libros     Precio" << endl;
            cout << Libro.nombreLibro << " --- " << " $" << Libro.precioLibro << endl;
        }
        else
        {
            /*El punto nos indica que ya se han impresio todos los datos*/
            cout << Libro.nombreLibro << " --- " << Libro.precioLibro << "." << endl;
            cout << endl; 
            cout << "Muchas gracias por su compra " << endl; 
            cout << "Vuelva pronto :D " << endl; 
        }
    }


    return 0;
}
void agregarLibro(NodoLibros *&pila, string a, double x)
{
    struct NodoLibros *nuevo_nodo = new NodoLibros();
    nuevo_nodo->nombreLibro = a;
    nuevo_nodo->precioLibro = x;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;

    /*comentario de confirmación de que si se ha agregado a la pila, nos ayuda a saber que si se guardo*/
    cout << "Los elementos " << a <<" y $" << x << " agregado a la PILA correctamente" << endl;
    cout << endl; 
}
void imprimirLibro(NodoLibros *&pila, string &a, double &x)
{
    NodoLibros *aux = pila; 
    a = aux->nombreLibro;
    x = aux->precioLibro;
    pila = aux->siguiente;
    delete aux;
}