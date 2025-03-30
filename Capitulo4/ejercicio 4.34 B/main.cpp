#include <iostream>

using namespace std;

int main() {
    int precision;
    cout << "Ingrese el número de términos para la aproximación de e: ";
    cin >> precision;

    double e = 1.0;
    double factorial = 1.0;
    int i = 1;

    while (i < precision) {
        factorial *= i;
        e += 1.0 / factorial;
        i++;
    }

    cout << "Aproximación de e con " << precision << " términos: " << e << endl;

    return 0;
}
