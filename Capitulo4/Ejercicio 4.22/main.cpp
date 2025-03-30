#include <iostream>
using namespace std;

int main() {
    unsigned int fila = 10; // Inicializa fila

    while (fila >= 1) { // Itera hasta que fila < 1
        unsigned int columna = 1; // Establece columna a 1 cuando empieza la iteración

        while (columna <= 10) { // Itera 10 veces
            cout << (fila % 2 == 0 ? ">" : ""); // Imprime ">" solo si fila es par
            ++columna; // Incrementa columna
        } // Fin del while interior

        --fila; // Decrementa fila
        cout << endl; // Empieza una nueva línea
    } // Fin del while exterior

    return 0;
}
