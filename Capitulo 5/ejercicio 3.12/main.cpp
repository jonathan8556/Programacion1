#include <iostream>

class Cuenta {
private:
    int saldo;

public:
    // Constructor con validaci�n
    Cuenta(int saldoInicial) {
        if (saldoInicial >=0) {
            saldo = saldoInicial;
        } else {
            saldo = 0;
            std::cout << "Error: Saldo inicial inv�lido. Se establece en 0.\n";
        }
    }

    // Funci�n para abonar dinero a la cuenta
    void abonar(int monto) {
        if (monto > 0) {
            saldo += monto;
        } else {
            std::cout << "Error: El monto a abonar debe ser positivo.\n";
        }
    }

    // Funci�n para retirar dinero de la cuenta
    void cargar(int monto) {
        if (monto > saldo) {
            std::cout << "El monto a cargar excede el saldo de la cuenta.\n";
        } else if (monto > 0) {
            saldo -= monto;
        } else {
            std::cout << "Error: El monto a cargar debe ser positivo.\n";
        }
    }

    // Funci�n para obtener el saldo actual
    int obtenerSaldo() {
        return saldo;
    }
};

// Funci�n principal para probar la clase Cuenta
int main() {
    // Crear dos cuentas con diferentes saldos iniciales
    Cuenta cuenta1(100);
    Cuenta cuenta2(-50); // Saldo inv�lido, se establece en 0

    // Mostrar saldos iniciales
    std::cout << "Saldo inicial de cuenta1: " << cuenta1.obtenerSaldo() << std::endl;
    std::cout << "Saldo inicial de cuenta2: " << cuenta2.obtenerSaldo() << std::endl;

    // Realizar operaciones en cuenta1
    cuenta1.abonar(50);
    std::cout << "Saldo de cuenta1 despu�s de abonar 50: " << cuenta1.obtenerSaldo() << std::endl;

    cuenta1.cargar(30);
    std::cout << "Saldo de cuenta1 despu�s de cargar 30: " << cuenta1.obtenerSaldo() << std::endl;

    cuenta1.cargar(150); // Intento de retiro mayor al saldo

    // Realizar operaciones en cuenta2
    cuenta2.abonar(200);
    std::cout << "Saldo de cuenta2 despu�s de abonar 200: " << cuenta2.obtenerSaldo() << std::endl;

    cuenta2.cargar(100);
    std::cout << "Saldo de cuenta2 despu�s de cargar 100: " << cuenta2.obtenerSaldo() << std::endl;

    return 0;
}
