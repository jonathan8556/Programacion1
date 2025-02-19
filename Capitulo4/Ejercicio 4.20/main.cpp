#include <iostream>
using namespace std;

int main() {
    unsigned int aprobados = 0; // n�mero de aprobados
    unsigned int reprobados = 0; // n�mero de reprobados
    unsigned int contadorEstudiantes = 1; // contador de estudiantes

    // procesa 10 estudiantes usando el ciclo controlado por contador
    while (contadorEstudiantes <= 10) {
        int resultado = 0; // resultado de un examen (1 aprobado, 2 reprobado)

        // Validar la entrada del usuario
        do {
            cout << "Escriba el resultado (1 = aprobado, 2 = reprobado): ";
            cin >> resultado;

            if (resultado != 1 && resultado != 2) {
                cout << "Entrada no v�lida. Por favor, introduzca 1 o 2." << endl;
            }
        } while (resultado != 1 && resultado != 2);

        // if...else anidado en la instrucci�n while
        if (resultado == 1) {
            aprobados++;
        } else {
            reprobados++;
        }

        // incrementa contadorEstudiantes para que el ciclo termine en cierto momento
        contadorEstudiantes++;
    }

    // fase de terminaci�n; muestra el n�mero de aprobados y reprobados
    cout << "Aprobados " << aprobados << "\nReprobados " << reprobados << endl;

    // determina si aprobaron m�s de ocho estudiantes
    if (aprobados > 8) {
        cout << "Bono para el instructor" << endl;
    }

    return 0;
}
