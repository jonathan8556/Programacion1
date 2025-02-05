#include <iostream>
using namespace std;

int main() {
    double numero1, numero2;
    char signos;

    cout << "Calculadora" << endl;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;

    cout << "Ingrese la operación (+, -, *, /): ";
    cin >> signos;

    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    switch (signos) {
        case '+':
            cout << "Resultado: " << numero1 + numero2 << endl;
            break;
        case '-':
            cout << "Resultado: " << numero1 - numero2 << endl;
            break;
        case '*':
            cout << "Resultado: " << numero1 * numero2 << endl;
            break;
        case '/':
            if (numero2 != 0) {
                cout << "Resultado: " << numero1 / numero2 << endl;
            } else {
                cout << "Error: No se puede dividir entre cero." << endl;
            }
            break;
        default:
            cout << "Operación inválida." << endl;
    }

    return 0;
}

