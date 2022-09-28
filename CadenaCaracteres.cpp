#include <iostream>
#include <string.h>

using namespace std;

// Función transformadora de Minusculas a Mayusculas
void mayusculas(char tex[])
{
    int i = 0;
    while (tex[i] != '\0')
    { // En el if dice "si la letra es mayor o igual a 'a' y menor o igual a 'z' "
        if (tex[i] >= 'a' and tex[i] <= 'z')
        {
            // El nuevo valor del texto, sera el valor actual menos la diferencia (que sera una constante) de un valor entre otro valor
            tex[i] = tex[i] - ('a' - 'A');
        }
        i++;
    }
}

int main()
{
    char texto[] = " ";

    cout << "Escribe una palabra en minusculas :D " << endl;
    cin >> texto;
    cout << "Texto ingresado sin modificar " << endl;
    cout << texto << endl;
    cout << endl;

    // call funtion en ingles para que suene cool
    mayusculas(texto);

    // Imprimimos los datos ya alterados
    cout << "Texto ingresado modificado " << endl;
    cout << texto << endl;

    return 0;
}
