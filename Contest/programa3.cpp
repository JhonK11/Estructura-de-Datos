#include <iostream>
using namespace std;

int main() {
    const int MAX = 100000;
    int a[MAX];
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    int maximo = 1;
    int actual = 1;

    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            actual++;
            if (actual > maximo)
                maximo = actual;
        } else {
            actual = 1;
        }
    }

    cout << maximo << endl;
    return 0;
}