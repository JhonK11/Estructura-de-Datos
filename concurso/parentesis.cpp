/*Validacion de parentesis*/
#include <iostream>
#include <stack>

using namespace std;

bool esParentesisValido(const string& expresion) {
    stack<char> pila;

    for (char c : expresion) {
        if (c == '(' || c == '{' || c == '[') {
            pila.push(c);
        } else if (c == ')' || c == '}' || c == ']') {
            if (pila.empty()) {
                return false; // Paréntesis de cierre sin par de apertura
            }
            char top = pila.top();
            pila.pop();
            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false; // Paréntesis no coinciden
            }
        }
    }
    return pila.empty(); // Si la pila está vacía, todos los paréntesis están balanceados
}
int main() {
    string expresion;
    cout << "Ingrese una expresion con parentesis: ";
    getline(cin, expresion);

    if (esParentesisValido(expresion)) {
        cout << "La expresion tiene parentesis validos." << endl;
    } else {
        cout << "La expresion tiene parentesis invalidos." << endl;
    }

    return 0;
}