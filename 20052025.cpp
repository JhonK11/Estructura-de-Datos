#include <iostream>
using namespace std;

int main() {
    char repetir;
    do {
        int n;
        cout << "ingrese el peso de la sandia: " << endl;
        cin >> n;

        if (n > 0 && n <=100) {
            if (n % 2 == 0) {
                cout << "se puede dividir la sandia" << endl;
            } 
            else {
                cout << "no se puede dividir la sandia" << endl;
            }
        } 
        else {
            cout << "el peso es invalido intente de nuevo" << endl;
        }
        cout << "desea repetir (s/n)?: ";
        cin >> repetir;    
    } 
    while (repetir == 's' || repetir == 'S');
    cout << "gracias por usar el programa" << endl;
    return 0;
    }