#include <iostream>

using namespace std;

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
    

    cout << "Bienvenido al servicio al cliente en linea de Movistar. Por favor, ingrese su nombre " << endl;
    cin >> nombre;
    cout << "Cuanto dinero tiene en su cuenta " << nombre << "?" << endl;
    cin >> saldo;
    cout << "Ingresa una opcion:  1: Estado de cuenta - 2: Abonar a cuota - 3: Deposito a cuenta, 4 - Pago de internet " << endl;
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
        // Deposito de cuenta 
        cout << "Que cantidad deseas depositar " << nombre << "?" << endl;
        cin >> deposito;
        saldoFinal = saldo + deposito;
        cout << "Su saldo actual es: " << saldoFinal;
        break;
    case 4:
        /* pagar servicios */
        cout << "Que servicios deseas pagar? Selecciona uno: 1 - Internet residencial, 2 - Internet movil " << endl; 
        cin >> servicio;

        switch (servicio)
        {
        case 1:
            // INTERNET RESIDENCIAL
            cout << "Usted ha elegido pagar el internet residencial " << endl;
            totalInterFijo = saldo - costoInterFijo;
            
           if (saldo >= costoInterFijo)
        {
            cout << "Su saldo actual " << nombre << " ,es: " << totalInterFijo << endl;
        }
        else if (costoInterFijo > saldo)
        {
            cout << "No es posible hacer la transferencia" << nombre << ", intentelo de nuevo" << endl;
        }

            break;
        case 2:
            // INTERNET MOVIL
            cout << "Usted ha elegido pagar su internet movil " << endl;
            totalMovil = saldo - costoMovil;
            
            if (saldo >= costoMovil)
            {
                cout << "Su saldo actual " << nombre << " es " << totalMovil << endl;
                cout << "Muchas gracias por su preferencia, feliz dia " << endl; 
            }
            else if (costoMovil > saldo)
            {
                cout << "No es posible hacer la transferencia " << nombre << " ,intentelo de nuevo" << endl;
            }

            break;
        default:
            cout << "Esa opcion no existe, intentelo de nuevo " << endl;
            break;
        }
    default:
        cout << "Esa opcion no esta disponible, intentelo de nuevo " << endl;
        break;
    }

    return 0;
}