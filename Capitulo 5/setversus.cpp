#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> v = {5, 2, 3, 2, 4, 5, 3};
    set<int> s;

    for (int x : v) {
        s.insert(x);
    }

    cout << "Cantidad de elementos unicos: " << s.size() << "\n"; 
    return 0;
}
