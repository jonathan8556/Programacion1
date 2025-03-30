#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Inicializar la semilla aleatoria

    int n;

    // a) 1 ≤ n ≤ 2
    n = 1 + rand() % 2;
    cout << "a) " << n << endl;

    // b) 1 ≤ n ≤ 100
    n = 1 + rand() % 100;
    cout << "b) " << n << endl;

    // c) 0 ≤ n ≤ 9
    n = rand() % 10;
    cout << "c) " << n << endl;

    // d) 1000 ≤ n ≤ 1112
    n = 1000 + rand() % 113;
    cout << "d) " << n << endl;

    // e) -1 ≤ n ≤ 1
    n = -1 + rand() % 3;
    cout << "e) " << n << endl;

    // f) -3 ≤ n ≤ 11
    n = -3 + rand() % 15;
    cout << "f) " << n << endl;

    return 0;
}
