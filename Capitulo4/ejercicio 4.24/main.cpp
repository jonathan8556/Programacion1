#include <iostream>

using namespace std;

int main() {
    int x, y;

    // Pedir al usuario que ingrese los valores de x e y
    cout << "Ingrese el valor de x: ";
    cin >> x;
    cout << "Ingrese el valor de y: ";
    cin >> y;

    // Estructura condicional basada en el problema
    if (y == 8)
        if (x == 5)
            cout << "00000" << endl;
        else
            cout << "#####" << endl;

    cout << "$$$$$" << endl;
    cout << "&&&&&" << endl;
    cout << "&&&&&" << endl;

    return 0;
}
