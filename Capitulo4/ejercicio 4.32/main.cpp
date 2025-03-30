#include <iostream>

using namespace std;

int main() {
    double a, b, c;

    // Solicitar al usuario que ingrese los tres lados
    cout << "Ingrese tres valores positivos distintos de cero: ";
    cin >> a >> b >> c;

    // Verificar si los valores pueden formar un tri�ngulo
    if (a > 0 && b > 0 && c > 0 &&
        (a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "Los valores ingresados pueden formar un tri�ngulo." << endl;
    } else {
        cout << "Los valores ingresados NO pueden formar un tri�ngulo." << endl;
    }

    return 0;
}
