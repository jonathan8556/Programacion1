#include <iostream>
#include "calculadora.h"
#include <iostream>

using namespace std;

int main() {
    Calculadora calc;
    int opcion;
    double num1, num2;

    do {
        cout << "\nCalculadora - Seleccione una opci�n:" << endl;
        cout << "1. Sumar" << endl;
        cout << "2. Restar" << endl;
        cout << "3. Multiplicar" << endl;
        cout << "4. Dividir" << endl;
        cout << "5. Salir" << endl;
        cout << "Opci�n: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 4) {
            cout << "Ingrese el primer n�mero: ";
            cin >> num1;
            cout << "Ingrese el segundo n�mero: ";
            cin >> num2;
        }

        switch (opcion) {
            case 1:
                cout << "Resultado: " << calc.sumar(num1, num2) << endl;
                break;
            case 2:
                cout << "Resultado: " << calc.restar(num1, num2) << endl;
                break;
            case 3:
                cout << "Resultado: " << calc.multiplicar(num1, num2) << endl;
                break;
            case 4:
                cout << "Resultado: " << calc.dividir(num1, num2) << endl;
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opci�n no v�lida, intente de nuevo." << endl;
        }
    } while (opcion != 5);

    return 0;
}
