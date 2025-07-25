#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
    
    priority_queue<int, vector<int>, greater<int>> q;

    q.push(3);
    q.push(5);
    q.push(7);
    q.push(2);

    cout << "Elemento mas pequeno: " << q.top() << "\n"; 
    q.pop();

    cout << "Siguiente mas pequeno: " << q.top() << "\n"; 
    q.pop();

    q.push(1);
    cout << "Nuevo top: " << q.top() << "\n"; 
    q.pop();

    return 0;
}
