#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int nums[100], primos = 0;
    srand(time(0));

    for (int i = 0; i < 100; i++) {
        nums[i] = rand() % 500 + 1;
        int n = nums[i], esPrimo = 1;
        if (n < 2) esPrimo = 0;
        for (int j = 2; j * j <= n && esPrimo; j++)
            if (n % j == 0) esPrimo = 0;
        if (esPrimo) primos++;
    }

    cout << "Cantidad de numeros primos: " << primos << endl;
    return 0;
}
