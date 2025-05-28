#include <iostream>
using namespace std;

int main() {
    string nombre;
    int edad;

    cout << "cual es tu edad?: " << endl;
    cin >> edad;
    cout << "cual es tu nombre?: " << endl;
    getline(cin >> ws, nombre);


    cout << "Hola " << nombre << endl;
    cout << "Tu edad es: " << edad  << " anos" << endl;
    return 0;
}