#include <iostream>
using namespace std;

// Funci�n que determina si el segundo n�mero es m�ltiplo del primero
bool esMultiplo(int primero, int segundo) {
    // Manejo especial para cuando el primer n�mero es cero
    if (primero == 0) {
        return segundo == 0; // Solo 0 es "m�ltiplo" de 0
    }
    return segundo % primero == 0;
}

int main() {
    int num1, num2;
    char continuar;

    cout << "PROGRAMA PARA DETERMINAR SI UN NUMERO ES MULTIPLO DE OTRO\n";
    cout << "--------------------------------------------------------\n";

    do {
        // Solicitar los dos n�meros al usuario
        cout << "\nIngrese el primer numero (base): ";
        cin >> num1;
        cout << "Ingrese el segundo numero (a verificar): ";
        cin >> num2;

        // Verificar y mostrar el resultado
        if (esMultiplo(num1, num2)) {
            cout << num2 << " SI es multiplo de " << num1 << endl;
        } else {
            cout << num2 << " NO es multiplo de " << num1 << endl;
        }

        // Preguntar si desea continuar
        cout << "\nDesea verificar otro par de numeros? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    cout << "\nPrograma terminado. Gracias por usarlo!\n";
    return 0;
}
