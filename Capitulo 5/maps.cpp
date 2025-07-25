#include <iostream>
#include <map>

using namespace std;

int main() {
 
    map<string, int> m;

    m["monkey"] = 4;
    m["banana"] = 3;
    m["harpsichord"] = 9;

    cout << "Valor asociado a 'banana': " << m["banana"] << "\n"; 

    cout << "Valor asociado a 'aybabtu' (inexistente): " << m["aybabtu"] << "\n"; 

    if (m.count("aybabtu")) {
        cout << "'aybabtu' existe en el mapa\n";
    } else {
        cout << "'aybabtu' no existe en el mapa\n";
    }

    cout << "\nContenido del mapa:\n";
    for (auto x : m) {
        cout << x.first << " => " << x.second << "\n";
    }

    return 0;
}
