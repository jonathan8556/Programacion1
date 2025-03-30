#include <iostream>
using namespace std;

int main() {
    int numero, suma = 0, contador = 0;

    cout << "Ingrese numeros enteros (9999 para terminar): ";

    for (; cin >> numero && numero != 9999; ) {
        suma += numero;
        contador++;
    }

    if (contador > 0) {
        double promedio = static_cast<double>(suma) / contador;
        cout << "El promedio de los numeros ingresados es: " << promedio << endl;
    } else {
        cout << "No se ingresaron numeros válidos." << endl;
    }

    return 0;
}
