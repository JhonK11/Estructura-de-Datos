#include <iostream>
#include <deque>
#include <stack>
#include <queue>

using namespace std;

int main() {
    // DEQUE
    cout << "=== Deque ===" << endl;
    deque<int> d;
    d.push_back(5);      
    d.push_back(2);      
    d.push_front(3);     
    d.pop_back();        
    d.pop_front();       

    cout << "Contenido del deque: ";
    for (int x : d) {
        cout << x << " ";
    }
    cout << "\n\n";

    //  STACK
    cout << "=== Stack ===" << endl;
    stack<int> s;
    s.push(2);           
    s.push(5);           
    cout << "Elemento en la cima: " << s.top() << endl; 
    s.pop();             
    cout << "Elemento en la cima despues del pop: " << s.top() << "\n\n";  // 2

    // QUEUE
    cout << "=== Queue ===" << endl;
    queue<int> q;
    q.push(2);           
    q.push(5);           
    cout << "Frente de la cola: " << q.front() << endl;  
    q.pop();             
    cout << "Final de la cola despues del pop: " << q.back() << endl;  
    return 0;
}
