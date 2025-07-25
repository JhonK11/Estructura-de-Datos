#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese el tamano del array: ";
    cin >> n;
    int* arr = new int[n];

    for (int i = 0; i < n; ++i) {
        arr[i] = i * 2;
    }

    cout << "Contenido del array: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;

    return 0;
}
