#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void invertirKElementos(queue<int>& cola, int k) {
    if (k > cola.size() || k < 0) {
        cout << "Valor de k inválido." << endl;
        return;
    }

    stack<int> pila;

    // Paso 1: Sacar los primeros k elementos y ponerlos en una pila
    for (int i = 0; i < k; ++i) {
        pila.push(cola.front());
        cola.pop();
    }

    // Paso 2: Meter los elementos de la pila de nuevo a la cola
    while (!pila.empty()) {
        cola.push(pila.top());
        pila.pop();
    }

    // Paso 3: Mover los elementos restantes al final para mantener el orden
    int n = cola.size();
    for (int i = 0; i < n - k; ++i) {
        cola.push(cola.front());
        cola.pop();
    }
}

void mostrarCola(queue<int> cola) {
    cout << "Cola: ";
    while (!cola.empty()) {
        cout << cola.front() << " ";
        cola.pop();
    }
    cout << endl;
}

int main() {
    queue<int> miCola;
    int n, k, valor;

    cout << "¿Cuantos elementos quieres en la cola?: ";
    cin >> n;

    cout << "Ingresa " << n << " elementos:\n";
    for (int i = 0; i < n; ++i) {
        cin >> valor;
        miCola.push(valor);
    }

    cout << "Ingresa el valor de k (cuantos elementos invertir): ";
    cin >> k;

    cout << "Cola original: ";
    mostrarCola(miCola);

    invertirKElementos(miCola, k);

    cout << "Cola despues de invertir los primeros " << k << " elementos: ";
    mostrarCola(miCola);

    return 0;
}
