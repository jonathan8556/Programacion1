#include <iostream>

using namespace std;

// Función para mostrar un cuadrado de asteriscos
void mostrarCuadrado(int lado) {
    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++) {
            cout << "*";
        }
        cout << "\n";
    }
}

int main() {
    int lado;

    // Entrada de datos
    cout << "Ingrese el tamaño del lado del cuadrado: ";
    cin >> lado;

    // Mostrar el cuadrado
    mostrarCuadrado(lado);

    return 0;
}
