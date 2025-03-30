#include <iostream>
#include <iomanip>

using namespace std;

// Función para convertir Fahrenheit a Celsius
float centigrados(float fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32);
}

// Función para convertir Celsius a Fahrenheit
float fahrenheit(float celsius) {
    return (9.0 / 5.0) * celsius + 32;
}

int main() {
    // Tabla 1: Conversión de Celsius a Fahrenheit
    cout << "TABLA DE CONVERSIONES" << endl;
    cout << "----------------------------" << endl;
    cout << "Celsius  | Fahrenheit" << endl;
    cout << "----------------------------" << endl;
    for (int celsius = 0; celsius <= 100; celsius += 10) {
        cout << setw(3) << celsius << "°C    | " << fixed << setprecision(1) << fahrenheit(celsius) << "°F" << endl;
    }
    cout << "----------------------------" << endl;

    // Tabla 2: Conversión de Fahrenheit a Celsius
    cout << "Fahrenheit | Celsius" << endl;
    cout << "----------------------------" << endl;
    for (int fahren = 32; fahren <= 212; fahren += 20) {
        cout << setw(3) << fahren << "°F    | " << fixed << setprecision(1) << centigrados(fahren) << "°C" << endl;
    }
    cout << "----------------------------" << endl;

    return 0;
}
