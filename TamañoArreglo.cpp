// Escribir un programa que solicite al usuario el numero de elementos de un arreglo y una función que determine el tamaño de elementos que tiene un arreglo. 
#include <iostream>
using namespace std; 

int numeros[] = {}, tam; 
int numerosEspacioMem; 
int enteroEspacioMem; 
int totalDeElementos; 

/*int Tamaño(int tam)
{
    numerosEspacioMem = sizeof(numeros);
    enteroEspacioMem = sizeof(int);
    totalDeElementos = numerosEspacioMem / enteroEspacioMem; 
}
*/
int main()
{

    cout << "Digite el Arreglo " << endl; 
    cin >> tam; 

    for (int i = 0; i < tam; i++)
    {
        cout << i+1 << ".- valor "; 
        cin >> numeros[i]; 
    }
    cout<<'\n';

    for(int j = 0; j < tam; j++)
    {
        cout << numeros[j] << endl; 
    }
    int getArrayLength = sizeof(numeros)/sizeof(int);
    cout << "El numero de arreglos es "<< getArrayLength << endl; 
    return 0; 
}