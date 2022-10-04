#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std; 

struct Nodo 
{ 
    string modeloAuto; 
    int placaAuto; 
    string colorAuto; 
    Nodo *siguiente; 
}nodito; 

Nodo *frente = NULL; 
Nodo *fin = NULL; 

//Funciones 
void insertarCola(Nodo *&, Nodo *&, string, int, string);
bool colaVacia(Nodo *);
void suprimirCola(Nodo *&, Nodo *&, string &, int &, string &);


int main()
{
    int opcion; 
    
    do{
        cout << " \t. ::MENU:: ." << endl; 
        cout << "¿ Que desea hacer ? "<<endl; 
        cout << "1. Insertar datos a la cola " << endl; 
        cout << "2. Mostrar los elementos de la cola " << endl;
        cout << "3. Salir " << endl; 
        cout << endl; 
        cout << "Opcion: " << endl; 
        cin >> opcion; 

        switch (opcion)
        {
        case 1:
            cout<<"Ingrese los datos del auto a agregar al registo "<<endl; 
            cout<<"Modelo del Auto: "; 
            cin>>nodito.modeloAuto;
            cout<<"Placa del Auto: ";
            cin>>nodito.placaAuto;
            cout<<"Color del Auto: ";
            cin>>nodito.colorAuto;
            insertarCola(frente, fin, nodito.modeloAuto, nodito.placaAuto, nodito.colorAuto);
            
            break;

        case 2: 
            cout<<"Mostrando datos del registro "<<endl; 
            while(frente != NULL){
                suprimirCola(frente, fin, nodito.modeloAuto, nodito.placaAuto, nodito.colorAuto);

                if(frente != NULL){
                    cout<<nodito.modeloAuto<<endl; 
                    cout<<nodito.placaAuto<<endl; 
                    cout<<nodito.colorAuto<<endl; 
                }else{
                    cout<<nodito.modeloAuto<<endl; 
                    cout<<nodito.placaAuto<<endl; 
                    cout<<nodito.colorAuto<<endl; 
                    cout<<"."<<endl; 
                }
            }
            system("pause");
            break; 

        case 3: 
            cout<<"Gracias por su preferencia "<<endl; 

            break; 

        
        default:
            break;
        }
    system("cls");
    }while(opcion != 3);
    getch();
    return 0; 
}
void insertarCola(Nodo *&frente, Nodo *&fin, string nombreAuto, int placaAuto, string Color){
    Nodo *nuevoNodo = new Nodo();

    nuevoNodo->modeloAuto = nombreAuto; 
    nuevoNodo->placaAuto = placaAuto; 
    nuevoNodo->colorAuto = Color; 
    nuevoNodo->siguiente = NULL; 

    if(colaVacia(frente)){
        frente = nuevoNodo; 
    }else{
        fin->siguiente = nuevoNodo; 
    }
    fin = nuevoNodo; 
}
void suprimirCola(Nodo *&frente, Nodo *&fin, string &nombreAuto, int &placaAuto, string &Color){
    nombreAuto = frente->modeloAuto;
    placaAuto = frente->placaAuto;
    Color = frente->colorAuto;

    Nodo *aux = frente; 
    
    if(frente == fin){
        frente = NULL; 
        fin = NULL; 
    }else{
        frente = frente->siguiente;
    }
    delete aux; 
}
bool colaVacia(Nodo *frente){
    return (frente == NULL)? true : false; 
}