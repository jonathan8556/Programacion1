#include <iostream>
#include <string>

using namespace std;

class Estudiante {
public:
    string nombre;
    string direccion;
    int edad;

    // Constructor por defecto
    Estudiante() {
        nombre = "Juan";
        direccion = "Desconocida";
        edad = 18;
    }

    // Constructor parametrizado
    Estudiante(string pNombre, string pDireccion, int pEdad) {
        nombre = pNombre;
        direccion = pDireccion;
        edad = pEdad;
    }

    void Expresarse() {
        if (nombre == "Guzman") {
            cout << nombre << " dice: Hola, que tal?" << endl;
        } else {
            cout << nombre << " dice: Hola" << endl;
        }
    }

    void MostrarInformacion() {
        cout << "Nombre: " << nombre << endl;
        cout << "Direccion: " << direccion << endl;
        cout << "Edad: " << edad << " años" << endl;

    }
};

int main() {
    // Creación de 3 estudiantes
    Estudiante estudianteUno("Juan", "Zona 10", 19);
    Estudiante estudianteDos("Guzman", "Zona 2", 21);
    Estudiante estudianteTres("Mario", "Zona 12", 18);

    // Mostrar información de cada estudiante
    cout << "Información de los estudiantes:" << endl;

    estudianteUno.MostrarInformacion();
    estudianteDos.MostrarInformacion();
    estudianteTres.MostrarInformacion();

    // Expresión de cada estudiante
    estudianteUno.Expresarse();
    estudianteDos.Expresarse();
    estudianteTres.Expresarse();

    return 0;
}
