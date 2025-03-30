#include <iostream>
using namespace std;

int main() {
    int cantidad, numero, menor;

    cout << "Ingrese la cantidad de numeros: ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "La cantidad debe ser mayor que 0." << endl;
        return 1; // Termina el programa con error
    }

    cout << "Ingrese " << cantidad << " numeros:" << endl;
    cin >> menor; // Se toma el primer número como menor inicial

    for (int i = 1; i < cantidad; i++) {
        cin >> numero;
        if (numero < menor) {
            menor = numero; // Se actualiza el menor si se encuentra uno más pequeño
        }
    }

    cout << "El numero menor es: " << menor << endl;
    return 0;
}
