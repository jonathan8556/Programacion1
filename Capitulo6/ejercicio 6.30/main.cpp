#include <iostream>
using namespace std;

int invertirDigitos(int numero) {
    int invertido = 0;

    while (numero != 0) {
        int digito = numero % 10;      // Obtener el �ltimo d�gito
        invertido = invertido * 10 + digito; // Construir el n�mero invertido
        numero /= 10;                  // Eliminar el �ltimo d�gito
    }

    return invertido;
}

int main() {
    int num;
    cout << "Ingrese un numero entero: ";
    cin >> num;

    int resultado = invertirDigitos(num);
    cout << "El numero invertido es: " << resultado << endl;

    return 0;
}
