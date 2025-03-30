#include <iostream>

using namespace std;

int main() {
    double radio;

    // Solicitar al usuario que ingrese el radio
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    // Definir pi
    const double PI = 3.14159;

    // Calcular diámetro, circunferencia y área
    double diametro = 2 * radio;
    double circunferencia = 2 * PI * radio;
    double area = PI * radio * radio;

    // Mostrar los resultados
    cout << "Diámetro: " << diametro << endl;
    cout << "Circunferencia: " << circunferencia << endl;
    cout << "Área: " << area << endl;

    return 0;
}
