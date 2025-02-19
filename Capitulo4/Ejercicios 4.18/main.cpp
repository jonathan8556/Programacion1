#include <iostream>
using namespace std;

int main() {
    int N = 1;

    // Imprimir encabezados de la tabla
    cout << "N\t10*N\t100*N\t1000*N" << endl;

    while (N <= 5) {
        cout << N << "\t" << 10 * N << "\t" << 100 * N << "\t" << 1000 * N << endl;
        N++;
    }

    return 0;
}
