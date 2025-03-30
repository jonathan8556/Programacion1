#include <iostream>

using namespace std;

int main() {
    for (int i = 0; i < 8; i++) { // 8 filas
        for (int j = 0; j < 8; j++) { // 8 columnas
            if ((i + j) % 2 == 0)
                cout << "* "; // Imprime un asterisco seguido de un espacio
            else
                cout << " "; // Imprime solo un espacio
        }
        cout << endl; // Salto de línea al final de cada fila
    }

    return 0;
}
