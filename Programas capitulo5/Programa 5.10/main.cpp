#include <iostream>
using namespace std;

int main() {
    cout << "Numero\tFactorial" << endl;
    cout << "-----------------" << endl;

    for (int n = 1; n <= 5; n++) {
        long long factorial = 1; // Se usa long long para manejar números grandes

        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }

        cout << n << "\t" << factorial << endl;
    }

    return 0;
}
