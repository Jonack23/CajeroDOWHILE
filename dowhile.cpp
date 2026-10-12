#include <iostream>
using namespace std;
int main (){
    float saldo = 100.0;
    float Insaldo = 0.0, Rsaldo= 0.0;
    int opcion= 0.0;
        do {
            cout << " OPCIONES " << endl;
            cout << "1. consultar saldo " << endl;
            cout << "2. Retirar saldo " << endl;
            cout << "3. Ingresar saldo " << endl;
            cout << "4. Salir " << endl;
            cin >>opcion;

            switch(opcion){
                case 1:
                    cout << " SU SAlDO ES DE: $" << saldo << endl;
                    break;
                case 2:
                    cout << "Ingrese cuanto deasea retirar " << endl;
                    cin >> Rsaldo;
                        if (Rsaldo < saldo && Rsaldo > 0){
                            cout << "usted retiro $" << Rsaldo << endl;
                            saldo = saldo - Rsaldo;
                            cout << "Ahora su saldo actual de su cuenta es: " << saldo;
                } else {
                         cout << " saldo insuficiente o Numero negativo invalido" << endl;}
                    break;
                case 3:
                        cout << " ingrese el monto que desea depositar " << endl;
                        cin >> Insaldo;
                        if (Insaldo > 0){
                        saldo = saldo + Insaldo;
                        cout << " Su nuevo saldo es de $" << saldo << endl;
                        }
                        else {
                            cout << " Numero negativo invalido, INTENTE DENUEVO" << endl;
                        }
                        break;
                default:
                cout << "opcion invalida, Intente denuevo " << endl;
                    break;
            }
        } while (opcion != 4);
        cout <<" GRACIAS POR USAR NUESTRO CAJERO!! QUE TENGA BUEN DIA!!" << endl;
        return 0;
}