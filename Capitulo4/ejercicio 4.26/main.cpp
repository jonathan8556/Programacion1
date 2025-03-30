#include <iostream>

using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese un n�mero de 5 d�gitos
    cout << "Ingrese un numero de cinco digitos: ";
    cin >> numero;

    // Verificar que el n�mero tiene exactamente 5 d�gitos
    if (numero < 10000 || numero > 99999) {
        cout << "Error: El numero debe tener exactamente 5 digitos." << endl;
        return 1;
    }

    // Separar los d�gitos individuales
    int digito1 = numero / 10000;         // Primer d�gito
    int digito2 = (numero / 1000) % 10;   // Segundo d�gito
    int digito4 = (numero / 10) % 10;     // Cuarto d�gito
    int digito5 = numero % 10;            // Quinto d�gito

    // Verificar si el n�mero es un pal�ndromo
    if (digito1 == digito5 && digito2 == digito4) {
        cout << "El numero " << numero << " es un palindromo." << endl;
    } else {
        cout << "El numero " << numero << " NO es un palindromo." << endl;
    }

    return 0;
}
