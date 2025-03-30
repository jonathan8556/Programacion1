#include <iostream>
using namespace std;

// Función que calcula los puntos de calidad basados en el promedio
int puntosCalidad(double promedio) {
    if (promedio >= 90.0) {
        return 4;
    } else if (promedio >= 80.0) {
        return 3;
    } else if (promedio >= 70.0) {
        return 2;
    } else if (promedio >= 60.0) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    double promedio;

    cout << "SISTEMA DE CALCULO DE PUNTOS DE CALIDAD\n";
    cout << "--------------------------------------\n";
    cout << "Ingrese el promedio del estudiante (0-100): ";
    cin >> promedio;

    // Validación de entrada
    if (promedio < 0 || promedio > 100) {
        cout << "Error: El promedio debe estar entre 0 y 100\n";
        return 1;
    }

    int puntos = puntosCalidad(promedio);

    cout << "\nResultado:\n";
    cout << "Promedio ingresado: " << promedio << endl;
    cout << "Puntos de calidad: " << puntos << endl;

    // Información adicional sobre la escala
    cout << "\nEscala de puntos:\n";
    cout << "90-100: 4 puntos\n";
    cout << "80-89: 3 puntos\n";
    cout << "70-79: 2 puntos\n";
    cout << "60-69: 1 punto\n";
    cout << "<60: 0 puntos\n";

    return 0;
}
