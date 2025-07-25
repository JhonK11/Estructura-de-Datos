#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, tiempo, espera = 0, total = 0;
    cin >> n;
    queue<int> tareas;

    for (int i = 0; i < n; ++i) {
        cin >> tiempo;
        tareas.push(tiempo);
    }

    while (!tareas.empty()) {
        total += espera;
        espera += tareas.front();
        tareas.pop();
    }

    cout << total << endl;
    return 0;
}
