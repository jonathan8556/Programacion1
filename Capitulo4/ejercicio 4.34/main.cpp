#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Ingrese un número entero no negativo: ";
    cin >> n;

    if (n < 0) {
        cout << "El número debe ser no negativo." << endl;
        return 1;
    }

    long long factorial = 1;
    int i = n;

    while (i > 1) {
        factorial *= i;
        i--;
    }

    cout << "El factorial de " << n << " es: " << factorial << endl;

    return 0;
}
