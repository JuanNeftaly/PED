#include <iostream>

using namespace std;
void cuentaRegresiva(int);

int main(){
    int a; 
    cout << "Ingresa un numero"<<endl; 
    cin>>a; 
    cuentaRegresiva(a);
    
    return 0;
}

//Recursividad directa 
void cuentaRegresiva(int n){
    //Caso base
    if(n>0)
    {
        cout<<n<<endl; 
        cuentaRegresiva(n-1);
    }else if(n<0)
    {
        cout<<"El numero es menor que 0"<<endl; 
    }
}