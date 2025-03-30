#include <iostream>

using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número de 5 dígitos
    cout << "Ingrese un numero de cinco digitos: ";
    cin >> numero;

    // Verificar que el número tiene exactamente 5 dígitos
    if (numero < 10000 || numero > 99999) {
        cout << "Error: El numero debe tener exactamente 5 digitos." << endl;
        return 1;
    }

    // Separar los dígitos individuales
    int digito1 = numero / 10000;         // Primer dígito
    int digito2 = (numero / 1000) % 10;   // Segundo dígito
    int digito4 = (numero / 10) % 10;     // Cuarto dígito
    int digito5 = numero % 10;            // Quinto dígito

    // Verificar si el número es un palíndromo
    if (digito1 == digito5 && digito2 == digito4) {
        cout << "El numero " << numero << " es un palindromo." << endl;
    } else {
        cout << "El numero " << numero << " NO es un palindromo." << endl;
    }

    return 0;
}
