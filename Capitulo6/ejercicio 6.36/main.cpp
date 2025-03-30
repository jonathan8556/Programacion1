#include <iostream>
using namespace std;

// Función recursiva de exponenciación
long potencia(int base, int exponente) {
    // Caso base: exponente == 1
    if (exponente == 1) {
        return base;
    }
    // Paso recursivo: base * potencia(base, exponente-1)
    else {
        return base * potencia(base, exponente - 1);
    }
}

int main() {
    // Prueba de la función
    cout << "CALCULADORA DE POTENCIAS (RECURSIVA)\n";
    cout << "-----------------------------------\n";

    // Prueba con entrada del usuario
    int b, e;
    cout << "\nIngrese la base: ";
    cin >> b;
    cout << "Ingrese el exponente (entero ≥ 1): ";
    cin >> e;

    if (e < 1) {
        cout << "Error: El exponente debe ser ≥ 1\n";
    } else {
        cout << b << "^" << e << " = " << potencia(b, e) << endl;
    }

    return 0;
}
