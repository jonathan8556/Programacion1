#include <iostream>
using namespace std;

int main() {
    unsigned int aprobados = 0; // número de aprobados
    unsigned int reprobados = 0; // número de reprobados
    unsigned int contadorEstudiantes = 1; // contador de estudiantes

    // procesa 10 estudiantes usando el ciclo controlado por contador
    while (contadorEstudiantes <= 10) {
        int resultado = 0; // resultado de un examen (1 aprobado, 2 reprobado)

        // Validar la entrada del usuario
        do {
            cout << "Escriba el resultado (1 = aprobado, 2 = reprobado): ";
            cin >> resultado;

            if (resultado != 1 && resultado != 2) {
                cout << "Entrada no válida. Por favor, introduzca 1 o 2." << endl;
            }
        } while (resultado != 1 && resultado != 2);

        // if...else anidado en la instrucción while
        if (resultado == 1) {
            aprobados++;
        } else {
            reprobados++;
        }

        // incrementa contadorEstudiantes para que el ciclo termine en cierto momento
        contadorEstudiantes++;
    }

    // fase de terminación; muestra el número de aprobados y reprobados
    cout << "Aprobados " << aprobados << "\nReprobados " << reprobados << endl;

    // determina si aprobaron más de ocho estudiantes
    if (aprobados > 8) {
        cout << "Bono para el instructor" << endl;
    }

    return 0;
}
