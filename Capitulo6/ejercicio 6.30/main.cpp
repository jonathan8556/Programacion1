#include <iostream>
using namespace std;

int invertirDigitos(int numero) {
    int invertido = 0;

    while (numero != 0) {
        int digito = numero % 10;      // Obtener el último dígito
        invertido = invertido * 10 + digito; // Construir el número invertido
        numero /= 10;                  // Eliminar el último dígito
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
