//Jonathan Samuel Gonzalez
#include <iostream>
#include <iomanip>

using namespace std;

double calcularCargos(double horas) {
    double cargo;

    if (horas <= 3.0) {
        cargo = 2.0;
    } else {
        cargo = 2.0 + 0.5 * (horas - 3.0);
    }

    if (cargo > 10.0) {
        cargo = 10.0;
    }

    return cargo;
}

int main() {
    double horas[3], cargos[3], totalHoras = 0, totalCargos = 0;

    // Entrada de datos
    for (int i = 0; i < 3; i++) {
        cout << "Ingrese las horas de estacionamiento para el automóvil " << i + 1 << ": ";
        cin >> horas[i];
        cargos[i] = calcularCargos(horas[i]);
        totalHoras += horas[i];
        totalCargos += cargos[i];
    }

    cout << "\nAutomóvil   Horas   Cargo" << endl;
    cout << "-------------------------" << endl;
    for (int i = 0; i < 3; i++) {
        cout << setw(9) << i + 1 << setw(8) << fixed << setprecision(1) << horas[i] << setw(8) << "$" << fixed << setprecision(2) << cargos[i] << endl;
    }

    // Mostrar totales
    cout << "-------------------------" << endl;
    cout << setw(9) << "TOTAL" << setw(8) << fixed << setprecision(1) << totalHoras << setw(8) << "$" << fixed << setprecision(2) << totalCargos << endl;

    return 0;
}
