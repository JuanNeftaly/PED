#include <iostream>
using namespace std; 

int main()
{
    int lista[5]={10,20,30,40,50};
    
    cout<<lista[2];

    cout <<"Direccion de memoria" << &lista[1]<<endl;
    cout <<"Direccion de memoria" << &lista [2]<< endl;

    


    return 0; 
}