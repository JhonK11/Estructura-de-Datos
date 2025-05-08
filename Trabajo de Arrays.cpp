#include <iostream>
using namespace std;

int main() {
    const int NUM_ESTUDIANTES = 30;
    float calificaciones[NUM_ESTUDIANTES];
    float suma = 0.0;
    float promedio;
    int encimaDelPromedio = 0;

    
    cout << "Ingrese las calificaciones de " << NUM_ESTUDIANTES << " estudiantes:\n";
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        cout << "Estudiante " << i + 1 << ": ";
        cin >> calificaciones[i];
        suma += calificaciones[i];
    }

    
    promedio = suma / NUM_ESTUDIANTES;

    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        if (calificaciones[i] > promedio) {
            encimaDelPromedio++;
        }
    }

    
    cout << "\nPromedio general: " << promedio << endl;
    cout << "Cantidad de estudiantes por encima del promedio: " << encimaDelPromedio << endl;

    return 0;
}
