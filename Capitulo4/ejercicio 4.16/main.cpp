#include <iostream>
using namespace std;

int main() {
    double horasTrabajadas, tarifaPorHora, sueldoBruto;

    while (true) {
        cout << "Introduzca las horas trabajadas (-1 para salir): ";
        cin >> horasTrabajadas;

        if (horasTrabajadas == -1) {
            break;
        }

        cout << "Introduzca la tarifa por horas del empleado ($00.00): ";
        cin >> tarifaPorHora;

        if (horasTrabajadas <= 40) {
            sueldoBruto = horasTrabajadas * tarifaPorHora;
        } else {
            sueldoBruto = 40 * tarifaPorHora + (horasTrabajadas - 40) * tarifaPorHora * 1.5;
        }

        cout << "El salario es $" << sueldoBruto << endl;
    }

    return 0;
}
