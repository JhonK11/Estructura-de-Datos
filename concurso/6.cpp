#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

bool esPalindromo(const string& texto) {
    string limpio;
    for (char c : texto) {
        if (isalnum(c)) limpio += tolower(c);
    }

    stack<char> pila;
    int n = limpio.size();
    for (int i = 0; i < n / 2; ++i)
        pila.push(limpio[i]);

    int inicio = (n % 2 == 0) ? n / 2 : n / 2 + 1;

    for (int i = inicio; i < n; ++i) {
        if (pila.top() != limpio[i]) return false;
        pila.pop();
    }

    return true;
}

int main() {
    string cadena;
    getline(cin, cadena);
    cout << (esPalindromo(cadena) ? "YES" : "NO") << endl;
    return 0;
}
