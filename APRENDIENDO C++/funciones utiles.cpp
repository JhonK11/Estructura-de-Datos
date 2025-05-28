#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = 3.50;
    double y = 4;
    double z;
    double t;
    z = max(x, y);
    t = min(x, y);
    cout << "el valor minimo es: " << z << endl;
    cout << "el valor maximo es: " << t << endl;
    //funciones matematicas
    
    z =pow(4,2); // potencia
    cout << "elevado es: " << z << endl;
    z = sqrt(16); // raiz cuadrada
    cout << "raiz cuadrada es: " << z << endl;
    z = abs(-5); // valor absoluto
    cout << "valor absoluto es: " << z << endl;
    z = round(x); //redondeo hacia abajo
    cout << "redondeo es: " << z << endl;
    z = ceil(x); // redondeo hacia arriba
    cout << "redondeo hacia arriba es: " << z << endl;
}