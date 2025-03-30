#include "calculadora.h"
#include <iostream>

Calculadora::Calculadora() {} // Constructor vac�o
Calculadora::~Calculadora() {} // Destructor vac�o

double Calculadora::sumar(double a, double b) {
    return a + b;
}

double Calculadora::restar(double a, double b) {
    return a - b;
}

double Calculadora::multiplicar(double a, double b) {
    return a * b;
}

double Calculadora::dividir(double a, double b) {
    if (b != 0) return a / b;
    else {
        std::cerr << "Error: Divisi�n por cero" << std::endl;
        return 0;
    }
}
