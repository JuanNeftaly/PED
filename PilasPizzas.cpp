/*Este programa muestra en base a pilas, los datos de pizzas compradas (tipo de pizza y precio)*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct pizza
{
    string name;
    string tipo;
};

int main()
{

    stack<pizza> pilaDePizzas;
    pizza unPizza;
    int n;

    cout << "Ingrese la cantidad de pizzas que desea apilar :" << endl;
    cin >> n;
    cin.ignore();

    cout << " Ingrese los datos de " << n << " pizzas" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << " Clase de pizza : " ;
        getline(cin, unPizza.name);
        cout << " precio : " << endl;
        getline(cin, unPizza.tipo);

        pilaDePizzas.push(unPizza);
    }

    while (!pilaDePizzas.empty())
    {

        pizza PizzaEncima = pilaDePizzas.top();
        cout << "------------------------" << endl;

        cout << " Clase de pizza :" << PizzaEncima.name << endl;
        cout << " precio : " << PizzaEncima.tipo << endl;
        pilaDePizzas.pop();
    }
    return 0;
}