#include <iostream>
using namespace std;

bool esCompuesto(int num) {
    if (num <= 3) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return true;
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    bool encontrado = false;

    for (int x = 4; x <= n / 2; x++) {
        int y = n - x;
        if (esCompuesto(x) && esCompuesto(y)) {
            cout << x << " " << y << endl;
            encontrado = true;
        }
    }

    if (!encontrado) {
        cout << "No hay combinaciones posibles." << endl;
    }

    return 0;
}