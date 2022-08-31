#include <iostream>


/*ACTIVIDAD NO EVALUADA
Agregar el metodo sizeof() en la condición del ciclo for 
Hacer uso del método getline para los valores string o char
*/

using namespace std;
//Declaración de estructura
struct Alumno
{
    string nombre;
    string codigo;
    int anioNac;

} alumno1[5];  //VARIABLES TIPO STRUCT

int main()
{
//otra forma de declarar variables tipo struct
//Alumno alumno2;

//Acceder un miembro de la estructura 
//alumno1.codigo = "UCA4578";

//Imprimiendo informacion del miembro 
//cout<<alumno1[].codigo;

//Asignar valores a todos los miembros 
/* alumno1 = {
    "Rodolfo",
    "UCA78944",
    1995
}; */


//SOLICITAR LA INFORMACION

for (int i = 0; i < 5; i++)
{
    cout<<"Ingresa tu nombre";
    //cin>>alumno1[i].nombre;
    getline(cin,alumno1[i].nombre);
    cout<<"Ingresa tu codigo";
    cin>>alumno1[i].codigo;
    getline(cin,alumno1[i].codigo);
    cout<<"Ingresa tu año de nacimiento";
    cin>>alumno1[i].anioNac;
}

//IMPRIMIR LA INFORMACION 

  for (int i = 0; i < 5; i++)
  {
    cout<<alumno1[i].nombre;
    cout<<alumno1[i].codigo;
    cout<<alumno1[i].anioNac;
  }
  

    return 0;
}