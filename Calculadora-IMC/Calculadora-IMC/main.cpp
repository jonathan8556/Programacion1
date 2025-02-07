#include <iostream>
#include <cstdlib>
//Este programa permite saber el �ndice de masa corporal
//Febrero 2025 Jonathan Gonzalez
using namespace std;

int main()
{
    // Variables operadores
    float pesoLibras = 0, alturaPulgadas = 0;
    float pesoKilogramos = 0, alturaMetros = 0;
    float resultadoCalculadora;
    int opcionSeleccionada;
    char salidaMenu;

    // Inicia el ciclo
    do
    {
        // system("cls"); // Comentar si no est�s en Windows
        // Ingreso de datos
        opcionSeleccionada = 0;
        resultadoCalculadora = 0;
        cout << "Calculadora de IMC" << endl;
        // Men� de opciones en calculadora
        cout << "1. Peso en libras" << endl;
        cout << "2. Peso en kilogramos" << endl;
        cout << "   Opcion: ";
        cin >> opcionSeleccionada;

        // Estructuras condicionales
        if (opcionSeleccionada == 1)
        {
            cout << "Ingrese su peso en libras: ";
            cin >> pesoLibras;
            cout << "Ingrese su altura en pulgadas: ";
            cin >> alturaPulgadas;
            resultadoCalculadora = (pesoLibras * 703) / (alturaPulgadas * alturaPulgadas);
        }
        else if (opcionSeleccionada == 2)
        {
            cout << "Ingrese su peso en kilogramos: ";
            cin >> pesoKilogramos;
            cout << "Ingrese su altura en metros: ";
            cin >> alturaMetros;
            resultadoCalculadora = pesoKilogramos / (alturaMetros * alturaMetros);
        }
        else
        {
            cout << "Error: opci�n seleccionada inv�lida." << endl;
            continue;
        }

        cout << "El resultado de su IMC es: " << resultadoCalculadora << endl;

        cout << "Clasificaci�n: ";
        if (resultadoCalculadora < 18.5)
        {
            cout << "Bajo peso (menos de 18.5)" << endl;
        }
        else if (resultadoCalculadora >= 18.5 && resultadoCalculadora <= 24.9)
        {
            cout << "Normal (entre 18.5 y 24.9)" << endl;
        }
        else if (resultadoCalculadora >= 25 && resultadoCalculadora <= 29.9)
        {
            cout << "Sobrepeso (entre 25 y 29.9)" << endl;
        }
        else
        {
            cout << "Obeso (30 o m�s)" << endl;
        }

        cout << "Desea realizar otra operaci�n? (S para s�, N para no): ";
        cin >> salidaMenu;
        cin.ignore(); // Evita problemas con el b�fer de entrada

    } while (salidaMenu == 's' || salidaMenu == 'S');

    return 0;
}
