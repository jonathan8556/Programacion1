#include <iostream>

using namespace std;

// Funci�n para calcular la potencia de un n�mero entero
int enteroPotencia(int base, int exponente) {
    int resultado = 1;

    for (int i = 0; i < exponente; i++) {
        resultado *= base;
    }

    return resultado;
}

int main() {
    int base, exponente;

    // Entrada de datos
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente (mayor o igual a 1): ";
    cin >> exponente;

    // Validar que el exponente sea v�lido
    if (exponente < 1) {
        cout << "El exponente debe ser mayor o igual a 1." << endl;
        return 1;
    }

    // Calcular y mostrar el resultado
    cout << base << "^" << exponente << " = " << enteroPotencia(base, exponente) << endl;

    return 0;
}
