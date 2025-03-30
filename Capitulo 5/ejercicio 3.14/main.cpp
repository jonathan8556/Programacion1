#include <iostream>
#include <string>

class Empleado {
private:
    std::string primerNombre;
    std::string apellidoPaterno;
    int salarioMensual;

public:
    // Constructor con validación
    Empleado(std::string nombre, std::string apellido, int salario) {
        primerNombre = nombre;
        apellidoPaterno = apellido;
        if (salario >= 0) {
            salarioMensual = salario;
        } else {
            salarioMensual = 0;
            std::cout << "Error: Salario negativo. Se establece en 0.\n";
        }
    }

    // Setters (Funciones establecer)
    void setPrimerNombre(std::string nombre) {
        primerNombre = nombre;
    }

    void setApellidoPaterno(std::string apellido) {
        apellidoPaterno = apellido;
    }

    void setSalarioMensual(int salario) {
        if (salario >= 0) {
            salarioMensual = salario;
        } else {
            std::cout << "Error: Salario negativo. Se mantiene el valor anterior.\n";
        }
    }

    // Getters (Funciones obtener)
    std::string getPrimerNombre() {
        return primerNombre;
    }

    std::string getApellidoPaterno() {
        return apellidoPaterno;
    }

    int getSalarioMensual() {
        return salarioMensual;
    }

    // Función para calcular el salario anual
    int getSalarioAnual() {
        return salarioMensual * 12;
    }

    // Función para aumentar el salario en un porcentaje
    void aumentarSalario(float porcentaje) {
        salarioMensual += salarioMensual * (porcentaje / 100);
    }
};

// Función principal para probar la clase Empleado
int main() {
    // Crear dos empleados
    Empleado empleado1("Carlos", "Gomez", 5000);
    Empleado empleado2("Ana", "Martinez", -2000); // Salario inválido, se establece en 0

    // Mostrar salarios anuales iniciales
    std::cout << "Salario anual de " << empleado1.getPrimerNombre() << " " << empleado1.getApellidoPaterno()
              << ": " << empleado1.getSalarioAnual() << std::endl;

    std::cout << "Salario anual de " << empleado2.getPrimerNombre() << " " << empleado2.getApellidoPaterno()
              << ": " << empleado2.getSalarioAnual() << std::endl;

    // Aplicar aumento del 10%
    empleado1.aumentarSalario(10);
    empleado2.aumentarSalario(10);

    // Mostrar salarios anuales después del aumento
    std::cout << "\nDespués del aumento del 10%:\n";

    std::cout << "Salario anual de " << empleado1.getPrimerNombre() << " " << empleado1.getApellidoPaterno()
              << ": " << empleado1.getSalarioAnual() << std::endl;

    std::cout << "Salario anual de " << empleado2.getPrimerNombre() << " " << empleado2.getApellidoPaterno()
              << ": " << empleado2.getSalarioAnual() << std::endl;

    return 0;
}
