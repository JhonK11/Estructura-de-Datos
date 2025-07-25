#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;

    v.push_back(3);
    v.push_back(1);
    v.push_back(4);

    cout << "Elementos usando indice: ";
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Elementos usando for-each: ";
    for (auto x : v) {
        cout << x << " ";
    }
    cout << endl;

    cout << "Ultimo elemento: " << v.back() << endl;
    v.pop_back();
    cout << "Elemento eliminado. Nuevo ultimo: " << v.back() << endl;

    return 0;
}
