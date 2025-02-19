#include <iostream>
using namespace std;

int main() {
    int cuenta;
    double saldoInicial, cargos, creditos, limiteCredito, nuevoSaldo;

    while (true) {
        cout << "Introduzca el numero de cuenta (o -1 para salir): ";
        cin >> cuenta;

        if (cuenta == -1) {
            break;
        }

        cout << "Introduzca el saldo inicial: ";
        cin >> saldoInicial;

        cout << "Introduzca los cargos totales: ";
        cin >> cargos;

        cout << "Introduzca los creditos totales: ";
        cin >> creditos;

        cout << "Introduzca el limite de credito: ";
        cin >> limiteCredito;

        nuevoSaldo = saldoInicial + cargos - creditos;
        cout << "El nuevo saldo es $" << nuevoSaldo << endl;

        if (nuevoSaldo > limiteCredito) {
            cout << "Cuenta: " << cuenta << endl;
            cout << "Limite de credito: $" << limiteCredito << endl;
            cout << "Saldo: $" << nuevoSaldo << endl;
            cout << "Se excedio el limite de su credito." << endl;
        }
    }

    return 0;
}
