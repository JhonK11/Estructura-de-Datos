#include <iostream>
#include <cmath> // Para usar funciones matemáticas como pow y sqrt
using namespace std;
int main() {
    double a;
    double b;
    double c;
    cout << "Ingrese el lado a: " << endl;
    cin >> a;
    cout << "Ingrese el lado b: " << endl;
    cin >> b;
    
    c = sqrt(pow(a,2) + pow(b,2));

    cout << "la hipotenusa es: " << c << endl;
    
    cout << "hallar un el cateto de un triangulo" << endl;
    cout << "Ingrese el cateto a: " << endl;
    cin >> a;
    cout << "Ingrese la hipotenusa: " << endl;
    cin >> c;
    b = sqrt(pow(c, 2) - pow(a,2));
    cout << "el cateto b es: " << b << endl;


    return 0;
}