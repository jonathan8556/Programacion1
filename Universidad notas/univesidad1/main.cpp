// Ejemplo de utilización de matrices - Código heredado de C
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iostream>
#include <iomanip>

using namespace std;

#define NUMERO_ALUMNOS 5
#define NUMERO_NOTAS 4
#define MAX_CALIFICACION 100
#define MIN_CALIFICACION 0
#define MAXIMA_LONGITUD_CADENA 100

// Prototipos de Función
void llamaCiclo();
int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1]);
void imprimirMatrizLinea();
float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA], string nombreFacultad, char mejorAlumno[], float &mejorPromedio);

int main() {
    srand(getpid());
    llamaCiclo();
    return 0;
}

void llamaCiclo() {
    float matriz_facultad_1[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
    float matriz_facultad_2[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];
    float matriz_facultad_3[NUMERO_ALUMNOS][NUMERO_NOTAS + 1];

    char mejorAlumnoFacultad[3][MAXIMA_LONGITUD_CADENA];
    float mejorPromedioFacultad[3];

    char mejorAlumnoGeneral[MAXIMA_LONGITUD_CADENA];
    float mejorPromedioGeneral = 0.0;

    char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA] = {"Carlos", "Luis", "Maria", "Pedro", "Juan"};

    char opcion;
    bool repetir = true;

    do {
        system("cls");

        cout << "*** Comparativo de Facultades ***" << endl << endl;

        // Procesar cada facultad
        llenarMatriz(matriz_facultad_1);
        float promedio_facultad_1 = imprimirMatriz(matriz_facultad_1, alumnos, "Facultad de Ingenieria", mejorAlumnoFacultad[0], mejorPromedioFacultad[0]);

        llenarMatriz(matriz_facultad_2);
        float promedio_facultad_2 = imprimirMatriz(matriz_facultad_2, alumnos, "Facultad de Arquitectura", mejorAlumnoFacultad[1], mejorPromedioFacultad[1]);

        llenarMatriz(matriz_facultad_3);
        float promedio_facultad_3 = imprimirMatriz(matriz_facultad_3, alumnos, "Facultad de Administracion", mejorAlumnoFacultad[2], mejorPromedioFacultad[2]);

        // Determinar el mejor estudiante general
        for (int i = 0; i < 3; i++) {
            if (mejorPromedioFacultad[i] > mejorPromedioGeneral) {
                mejorPromedioGeneral = mejorPromedioFacultad[i];
                strcpy(mejorAlumnoGeneral, mejorAlumnoFacultad[i]);
            }
        }

        // Mostrar el mejor estudiante general
        cout << "\n>>> Mejor estudiante general: " << mejorAlumnoGeneral << " con promedio de " << mejorPromedioGeneral << "\n" << endl;

        cout << "Desea otro calculo (s/n)? ";
        cin >> opcion;
        if (opcion == 'n') {
            repetir = false;
        }
    } while (repetir);
}

int busquedaAleatorios(int minimo, int maximo) {
    return minimo + rand() % (maximo - minimo + 1);
}

void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1]) {
    for (int y = 0; y < NUMERO_ALUMNOS; y++) {
        float suma = 0;
        for (int x = 0; x < NUMERO_NOTAS; x++) {
            int calificacion;
            if (x == 0 || x == 3) {
                calificacion = busquedaAleatorios(0, 20);
            } else if (x == 1) {
                calificacion = busquedaAleatorios(0, 25);
            } else if (x == 2) {
                calificacion = busquedaAleatorios(0, 35);
            }
            suma += calificacion;
            matriz[y][x] = calificacion;
        }
        matriz[y][NUMERO_NOTAS] = suma / NUMERO_NOTAS;  // Guardar el promedio
    }
}

void imprimirMatrizLinea() {
    cout << "+--------";
    for (int x = 0; x < NUMERO_NOTAS + 1; x++) {
        cout << "+---------";
    }
    cout << "+\n";
}

float imprimirMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_NOTAS + 1], char alumnos[NUMERO_ALUMNOS][MAXIMA_LONGITUD_CADENA], string nombreFacultad, char mejorAlumno[], float &mejorPromedio) {
    float totalGeneral = 0;
    mejorPromedio = 0;
    strcpy(mejorAlumno, alumnos[0]);

    float notaMayor = matriz[0][NUMERO_NOTAS];
    float notaMenor = matriz[0][NUMERO_NOTAS];
    char alumnoNotaMayor[MAXIMA_LONGITUD_CADENA];
    char alumnoNotaMenor[MAXIMA_LONGITUD_CADENA];
    strcpy(alumnoNotaMayor, alumnos[0]);
    strcpy(alumnoNotaMenor, alumnos[0]);

    cout << nombreFacultad << endl;
    imprimirMatrizLinea();
    cout << setw(9) << "Alumno";
    for (int x = 0; x < NUMERO_NOTAS; x++) {
        cout << setw(9) << "Nota" << x + 1;
    }
    cout << setw(8) << "Prom" << endl;
    imprimirMatrizLinea();

    for (int y = 0; y < NUMERO_ALUMNOS; y++) {
        cout << "!" << setw(8) << alumnos[y] << "!";
        for (int x = 0; x < NUMERO_NOTAS; x++) {
            cout << setw(9) << matriz[y][x] << "!";
        }
        float promedio = matriz[y][NUMERO_NOTAS];
        totalGeneral += promedio;

        if (promedio > mejorPromedio) {
            mejorPromedio = promedio;
            strcpy(mejorAlumno, alumnos[y]);
        }

        if (promedio > notaMayor) {
            notaMayor = promedio;
            strcpy(alumnoNotaMayor, alumnos[y]);
        }
        if (promedio < notaMenor) {
            notaMenor = promedio;
            strcpy(alumnoNotaMenor, alumnos[y]);
        }

        cout << setw(9) << fixed << setprecision(2) << promedio << "!" << endl;
        imprimirMatrizLinea();
    }

    float promedioGeneral = totalGeneral / NUMERO_ALUMNOS;
    cout << ">>> Mejor estudiante: " << mejorAlumno << " con promedio de " << mejorPromedio << endl;
    cout << "Nota mayor: " << setw(10) << alumnoNotaMayor << setw(10) << notaMayor << endl;
    cout << "Nota menor: " << setw(10) << alumnoNotaMenor << setw(10) << notaMenor << endl;
    cout << "Promedio de la facultad: " << promedioGeneral << endl << endl;

    return promedioGeneral;
}

