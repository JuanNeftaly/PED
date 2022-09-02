#include <iostream>

using namespace std;


float costoInternetFijo(float saldo, float pagoPersonalizadoResidencial);
float costoInterMovil(float saldo, float pagoMovilPersonalizado);

int main()
{
    int opcion;
    float saldo;
    int abono;
    int deposito;
    float saldoFinal;
    int servicio;
    string nombre; 
    float costoInterFijo = 44.50;
    float totalInterFijo;
    float costoMovil = 15.99;
    float totalMovil;
    float abonoInterFijo;
    float abonoInterMovil; 
    float restaAbono;

    float Personal;
    float Residencial;

    cout << "Bienvenido al servicio al cliente en linea de Movistar. Por favor, ingrese su nombre " << endl;
    cin >> nombre;
    cout << "Cuanto dinero tiene en su cuenta " << nombre << "?" << endl;
    cin >> saldo;
    cout << "Ingresa una opcion:  1: Estado de cuenta - 2: Abonar a cuota - 3: Pago de internet " << endl;
    cin >> opcion;

    switch (opcion)
    {
    case 1:
        //Estado de cuenta 
        cout << "Su saldo disponible es " << saldo << endl;
        cout << "Tenga feliz dia :D " << nombre << endl;
        break;
    case 2:
        // Abono a deuda 
        cout<<"Cuanto desea abonar?"<<endl;
        cin>>abono;
        restaAbono = saldo - abono;
        cout << "Que servicio desea abonar ? 1.Abonar a Internet Residencial 2.Abonar a Internet Movil" << endl;
        cin>>servicio;  
        switch (servicio)
        {
        case 1:
            // INTERNET RESIDENCIAL
            cout << "Usted ha elegido abonar a el internet residencial " << endl;
            abonoInterFijo = costoInterFijo - abono;
            cout<<"Aun le falta pagar "<<abonoInterFijo << endl; 

            break;
        case 2:
            // INTERNET MOVIL
            cout << "Usted ha elegido pagar su internet movil " << endl;
            abonoInterMovil = abono - costoMovil;
            cout<<"Aun le falta pagar "<< abonoInterMovil << endl; 

            break;
        default:
            cout << "Esa opcion no existe, intentelo de nuevo " << endl;
            break;
        }
    case 3:
        /* pagar servicios */
        cout << "Que servicios deseas pagar? Selecciona uno: 1 - Internet residencial, 2 - Internet movil " << endl; 
        cin >> servicio;

        switch(servicio)
        {
            case 1:
            cout<<"Cuanto dinero va a pagar de Internet residencial "<<endl; 
            cin >> saldo;
            cout<<"Cuanto dinero pagas de internet residencial "<<endl; 
            cin >> Residencial;


            cout << " Su cuenta ha sido pagada " << endl; 

            break;

            case 2:
            cout<<"Cuanto dinero va a pagar de Internet Movil "<<endl;
            cin>>saldo; 
            cout<<"Cuanto dinero pagas de internet movil "<<endl; 
            cin>>Personal;


            cout << " Su cuenta ha sido pagada " << endl; 

            break; 
        }
    default:
        cout << "Esa opcion no esta disponible, intentelo de nuevo " << endl;
        break;
    }

    return 0;
}

float costoInternetFijo(float saldo, float pagoPersonalizadoResidencial)
{
    float costoTotalFijo;
    costoTotalFijo = saldo - pagoPersonalizadoResidencial;

    return costoTotalFijo;
}
float costoInterMovil(float saldo, float pagoMovilPersonalizado)
{
    float costoTotalInterMovil; 
    costoTotalInterMovil = saldo - pagoMovilPersonalizado;

    return costoTotalInterMovil; 
}