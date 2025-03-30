#include <iostream>

using namespace std;

int main() {
    double radio;

    // Solicitar al usuario que ingrese el radio
    cout << "Ingrese el radio del c�rculo: ";
    cin >> radio;

    // Definir pi
    const double PI = 3.14159;

    // Calcular di�metro, circunferencia y �rea
    double diametro = 2 * radio;
    double circunferencia = 2 * PI * radio;
    double area = PI * radio * radio;

    // Mostrar los resultados
    cout << "Di�metro: " << diametro << endl;
    cout << "Circunferencia: " << circunferencia << endl;
    cout << "�rea: " << area << endl;

    return 0;
}
