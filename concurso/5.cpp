#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string comando, url;
    stack<string> atras, adelante;
    string actual = "NONE";

    while (n--) {
        cin >> comando;
        if (comando == "VISIT") {
            cin >> url;
            if (actual != "NONE") atras.push(actual);
            actual = url;
            while (!adelante.empty()) adelante.pop(); 
        } else if (comando == "BACK") {
            if (!atras.empty()) {
                adelante.push(actual);
                actual = atras.top(); atras.pop();
            }
        } else if (comando == "FORWARD") {
            if (!adelante.empty()) {
                atras.push(actual);
                actual = adelante.top(); adelante.pop();
            }
        }
        cout << actual << endl;
    }

    return 0;
}
