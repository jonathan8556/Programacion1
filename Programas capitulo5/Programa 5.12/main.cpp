#include <iostream>
using namespace std;

int main() {
    int size = 10; // Tamaño de los patrones

    for (int i = 1; i <= size; i++) {
        // Patrón (a)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = i; j < size; j++) {
            cout << " "; // Espacios para alineación
        }
        cout << "   "; // Separación entre patrones

        // Patrón (b)
        for (int j = i; j <= size; j++) {
            cout << "*";
        }
        cout << "   "; // Separación entre patrones

        // Patrón (c)
        for (int j = 1; j < i; j++) {
            cout << " "; // Espacios en blanco a la izquierda
        }
        for (int j = i; j <= size; j++) {
            cout << "*";
        }
        cout << "   "; // Separación entre patrones

        // Patrón (d)
        for (int j = i; j < size; j++) {
            cout << " "; // Espacios en blanco a la izquierda
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl; // Salto de línea para la siguiente fila
    }

    return 0;
}
