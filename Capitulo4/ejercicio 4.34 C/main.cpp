#include <iostream>

using namespace std;

int main() {
    double x;
    int precision;
    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el n�mero de t�rminos para la aproximaci�n de e^x: ";
    cin >> precision;

    double resultado = 1.0;
    double factorial = 1.0;
    double potencia = 1.0;
    int i = 1;

    while (i < precision) {
        potencia *= x;
        factorial *= i;
        resultado += potencia / factorial;
        i++;
    }

    cout << "Aproximaci�n de e^" << x << " con " << precision << " t�rminos: " << resultado << endl;

    return 0;
}
