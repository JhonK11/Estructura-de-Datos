#include <iostream>
#include <set>

using namespace std;

int main() {
    // SET 
    cout << "=== SET ===\n";
    set<int> s;

    s.insert(3);
    s.insert(2);
    s.insert(5);

    cout << "s.count(3): " << s.count(3) << "\n"; // 1
    cout << "s.count(4): " << s.count(4) << "\n"; // 0

    s.erase(3);
    s.insert(4);

    cout << "s.count(3): " << s.count(3) << "\n"; // 0
    cout << "s.count(4): " << s.count(4) << "\n"; // 1

    s.insert(3);
    s.insert(3);
    cout << "Intento insertar 3 varias veces, count(3): " << s.count(3) << "\n"; // 1

    cout << "Tamano del set: " << s.size() << "\n";
    cout << "Elementos en el set:\n";
    for (auto x : s)
        cout << x << " ";
    cout << "\n";

    auto first = s.begin();
    auto last = s.end(); --last;
    cout << "Menor: " << *first << ", Mayor: " << *last << "\n";

    cout << "lower_bound(3): " << *s.lower_bound(3) << "\n";
    cout << "upper_bound(3): " << *s.upper_bound(3) << "\n";

    // MULTISET 
    cout << "\n=== MULTISET ===\n";
    multiset<int> ms;

    ms.insert(5);
    ms.insert(5);
    ms.insert(5);
    cout << "ms.count(5): " << ms.count(5) << "\n"; // 3

    ms.erase(5);
    cout << "Tras borrar todos los 5: ms.count(5): " << ms.count(5) << "\n"; // 0

    ms.insert(5);
    ms.insert(5);
    ms.insert(5);
    ms.erase(ms.find(5)); 
    cout << "Tras borrar solo un 5: ms.count(5): " << ms.count(5) << "\n"; // 2

    cout << "Elementos en el multiset:\n";
    for (auto x : ms)
        cout << x << " ";
    cout << "\n";

    return 0;
}
