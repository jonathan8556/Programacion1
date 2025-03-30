#ifndef CALCULADORA_H
#define CALCULADORA_H

class Calculadora {
public:
    Calculadora(); // Constructor
    ~Calculadora(); // Destructor

    // Métodos de operaciones
    double sumar(double a, double b);
    double restar(double a, double b);
    double multiplicar(double a, double b);
    double dividir(double a, double b);
};

#endif // CALCULADORA_H
