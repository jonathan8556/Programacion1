#include <iostream>

using namespace std;

// a) Calcular la parte entera del cociente
int calcularCociente(int a, int b) {
    return a / b;
}

// b) Calcular el residuo entero
int calcularResiduo(int a, int b) {
    return a % b;
}

// c) Funci�n para separar los d�gitos de un n�mero y mostrarlos con espacios
void separarDigitos(int numero) {
    int digitos[5]; // M�ximo 5 d�gitos para el rango 1 - 32767
    int contador = 0;

    while (numero > 0) {
        digitos[contador++] = numero % 10;
        numero /= 10;
    }

    // Imprimir los d�gitos en orden correcto
    for (int i = contador - 1; i >= 0; i--) {
        cout << digitos[i] << "  ";
    }
    cout << endl;
}

int main() {
    int a, b, numero;

    // Entrada para calcular cociente y residuo
    cout << "Ingrese dos n�meros enteros (a y b): ";
    cin >> a >> b;

    cout << "Cociente de " << a << " / " << b << " = " << calcularCociente(a, b) << endl;
    cout << "Residuo de " << a << " % " << b << " = " << calcularResiduo(a, b) << endl;

    // Entrada para separar d�gitos
    cout << "Ingrese un n�mero entre 1 y 32767: ";
    cin >> numero;

    if (numero < 1 || numero > 32767) {
        cout << "N�mero fuera de rango." << endl;
    } else {
        separarDigitos(numero);
    }

    return 0;
}
