<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    int a[10], b[10], iguales = 0;
 
    cout << "Ingrese 10 numeros para el primer arreglo:\n";
    for (int i = 0; i < 10; i++)
        cin >> a[i];

    cout << "Ingrese 10 numeros para el segundo arreglo:\n";
    for (int i = 0; i < 10; i++)
        cin >> b[i];

    for (int i = 0; i < 10; i++)
        if (a[i] == b[i]) iguales++;

    cout << "Elementos iguales en la misma posicion: " << iguales << endl;

    return 0;
}


=======
#include <iostream>
using namespace std;

int main() {
    int a[10], b[10], iguales = 0;
 
    cout << "Ingrese 10 numeros para el primer arreglo:\n";
    for (int i = 0; i < 10; i++)
        cin >> a[i];

    cout << "Ingrese 10 numeros para el segundo arreglo:\n";
    for (int i = 0; i < 10; i++)
        cin >> b[i];

    for (int i = 0; i < 10; i++)
        if (a[i] == b[i]) iguales++;

    cout << "Elementos iguales en la misma posicion: " << iguales << endl;

    return 0;
}


>>>>>>> 84914c8be761525fe10f8745573e7c3284476c86
