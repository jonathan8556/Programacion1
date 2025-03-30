//Jonathan Samuel Gonzalez
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double redondearAEntero(double numero) {
    return floor(numero + 0.5);
}

double redondearADecimas(double numero) {
    return floor(numero * 10 + 0.5) / 10;
}

double redondearACentesimas(double numero) {
    return floor(numero * 100 + 0.5) / 100;
}

double redondearAMilesimas(double numero) {
    return floor(numero * 1000 + 0.5) / 1000;
}

int main() {
    double numero;
    cout << "Ingrese un n�mero: ";
    cin >> numero;


    cout << fixed << setprecision(6);
    cout << "\nN�mero original: " << numero << endl;
    cout << "Redondeado a entero: " << redondearAEntero(numero) << endl;
    cout << "Redondeado a d�cimas: " << redondearADecimas(numero) << endl;
    cout << "Redondeado a cent�simas: " << redondearACentesimas(numero) << endl;
    cout << "Redondeado a mil�simas: " << redondearAMilesimas(numero) << endl;

    return 0;
}
