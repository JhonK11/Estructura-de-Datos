#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

template<typename T>
using indexed_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    indexed_set<int> s;

    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);

    cout << "Elementos del conjunto: ";
    for (int i = 0; i < (int)s.size(); i++) {
        cout << *s.find_by_order(i) << " ";
    }
    cout << "\n";

    cout << "Elemento en la posición 2: " << *s.find_by_order(2) << "\n"; 

    cout << "Cantidad de elementos menores que 25: " << s.order_of_key(25) << "\n"; 
    return 0;
}
