#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

int evaluarPostfija(const string& expresion) {
    stack<int> pila;
    stringstream ss(expresion);
    string token;

    while (ss >> token) {
        if (isdigit(token[0]) || (token.size() > 1 && isdigit(token[1]))) {
            pila.push(stoi(token));
        } else {
            int b = pila.top(); pila.pop();
            int a = pila.top(); pila.pop();
            if (token == "+") pila.push(a + b);
            else if (token == "-") pila.push(a - b);
            else if (token == "*") pila.push(a * b);
            else if (token == "/") pila.push(a / b);
        }
    }

    return pila.top();
}

int main() {
    string expresion;
    getline(cin, expresion);
    cout << evaluarPostfija(expresion) << endl;
    return 0;
}
