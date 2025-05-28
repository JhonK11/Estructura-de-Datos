#include <iostream>
using namespace std;
int main() {
    int edad, codigo;
    
    cout << "ingresa tu edad: ";
    cin >> edad;
    if (edad >= 18) {
        cout << "Bienvenido a la edad adulta" << endl;
    }
    else if(edad <=18) {
        cout << "Aun eres un niño" << endl;
    }
    else {
        cout << "sigues siendo una wawa XD" << endl;
    }
    cout << "ingresa tu codigo estudiantil: ";
    cin >> codigo;
    if (codigo == 241385) {
        cout << "Bienvenido a la plataforma universitaria JHON KENEDY CHAMBI CHAMBI" << endl;
    }
    else if( codigo ==241385) {
        cout << "No tienes acceso a la plataforma" << endl;
    }
    else {
        cout << "Codigo incorrecto, no puedes ingresar a la plataforma" << endl;
    }
    return 0;
}