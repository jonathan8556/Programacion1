#include <iostream>
using namespace std;

int main()
{
    unsigned int y = 0; // declara e inicializa y
    unsigned int x = 1; // declara e inicializa x
    unsigned int total = 0; // declara e inicializa el total

    while (x <= 10) // itera 10 veces
    {
        y = x * x; // calcula el cuadrado de x
        cout << y << endl; // imprime y
        total += y; // suma y al total
        ++x; // incrementa x
    } // fin de while

    cout << "El total es " << total << endl; // muestra el resultado
} // fin de main
