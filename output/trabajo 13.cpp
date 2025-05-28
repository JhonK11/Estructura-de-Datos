#include <iostream>

using namespace std;

int sumaDigitos (int numero) {
    int suma = 0;
    while (numero > 0) {
       suma += numero %10 ;
       numero /= 10; 
    }
    return suma;
} 
int main() {
    int numero1;
    
    cout << "Ingrese un numero: ";
    cin >> numero1;


    int sumatotal = sumaDigitos(numero1);

    cout << "la suma de digitos:" << sumatotal << endl;
    
    return 0;
}