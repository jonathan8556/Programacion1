#include <iostream>

using namespace std;

int main() {
    int precision;
    cout << "Ingrese el n�mero de t�rminos para la aproximaci�n de e: ";
    cin >> precision;

    double e = 1.0;
    double factorial = 1.0;
    int i = 1;

    while (i < precision) {
        factorial *= i;
        e += 1.0 / factorial;
        i++;
    }

    cout << "Aproximaci�n de e con " << precision << " t�rminos: " << e << endl;

    return 0;
}
