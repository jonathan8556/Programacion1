#include <iostream>
using namespace std;

int main() {
    int size = 10; // Tama�o de los patrones

    for (int i = 1; i <= size; i++) {
        // Patr�n (a)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        for (int j = i; j < size; j++) {
            cout << " "; // Espacios para alineaci�n
        }
        cout << "   "; // Separaci�n entre patrones

        // Patr�n (b)
        for (int j = i; j <= size; j++) {
            cout << "*";
        }
        cout << "   "; // Separaci�n entre patrones

        // Patr�n (c)
        for (int j = 1; j < i; j++) {
            cout << " "; // Espacios en blanco a la izquierda
        }
        for (int j = i; j <= size; j++) {
            cout << "*";
        }
        cout << "   "; // Separaci�n entre patrones

        // Patr�n (d)
        for (int j = i; j < size; j++) {
            cout << " "; // Espacios en blanco a la izquierda
        }
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl; // Salto de l�nea para la siguiente fila
    }

    return 0;
}
