#include <iostream>
#include <string>
#include <limits>  // Para numeric_limits
using namespace std;

struct Procesador {
    string marca;
    string modelo;
    string Frecuencia;
    int precio;
} Procesador1[3];

struct Estudiante {
    string Codigo;
    string NombreApellido;
    string sexo;
    string carrera;
} Estudiante1[3];

struct Mochila {
    string tamanio;
    string forma;
    string marca;
    int precio;
} mochila1[3];

struct Lenguaje {
    string nombre;
    string tipado;
} lenguaje1[3];

struct Laptop {
    string almacenamiento;
    string procesador;
    string memoria;
    string MarcaModelo;
    string GPU;
    int precio;
} Laptop1[3];

struct USB {
    string marca;
    string capacidad;
    string precio;
} USB1[3];

struct Tipoalmacenamiento {
    string marca;
    string tipo;
    string capacidad;
} Tipoalmacenamiento1[3];

struct MonitorExterno {
    string Hz;
    string conectividad;
    string marca;
    string pulgadas;
    int precio;
} MonitorExterno1[3];

void limpiarBuffer() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    int opcion;

    cout << "Digite un valor para realizar la secuencia de relleno de estructuras\n";
    cout << "(1.- Procesador) (2.- IDE) (3.- Mochila) (4.- lenguaje)\n";
    cout << "(5.- Laptop) (6.- USB) (7.- Tipo de Almacenamiento) (8.- Monitor Externo)\n";
    cout << "Opcion: ";
    cin >> opcion;
    limpiarBuffer();

    switch(opcion) {
        case 1:
            for (int i = 0; i < 3; i++) {
                cout << "\nProcesador " << i + 1 << ":\n";
                cout << "Modelo: "; getline(cin, Procesador1[i].modelo);
                cout << "Marca: "; getline(cin, Procesador1[i].marca);
                cout << "Frecuencia: "; getline(cin, Procesador1[i].Frecuencia);
                cout << "Precio: "; cin >> Procesador1[i].precio;
                limpiarBuffer();
            }
            break;
        case 2:
            for (int i = 0; i < 3; i++) {
                cout << "\nEstudiante " << i + 1 << ":\n";
                cout << "Codigo: "; getline(cin, Estudiante1[i].Codigo);
                cout << "Nombres y apellidos: "; getline(cin, Estudiante1[i].NombreApellido);
                cout << "Sexo: "; getline(cin, Estudiante1[i].sexo);
                cout << "Carrera de estudio: "; cin >> Estudiante1[i].carrera;
                limpiarBuffer();
            }
            break;

        case 3:
            for (int i = 0; i < 3; i++) {
                cout << "\nMochila " << i + 1 << ":\n";
                cout << "Tamaño: "; getline(cin, mochila1[i].tamanio);
                cout << "Forma: "; getline(cin, mochila1[i].forma);
                cout << "Marca: "; getline(cin, mochila1[i].marca);
                cout << "Precio: "; cin >> mochila1[i].precio;
                limpiarBuffer();
            }
            break;
        case 4:
            for (int i = 0; i < 3; i++) {
                cout << "\nLenguaje " << i + 1 << ":\n";
                cout << "Nombre: "; getline(cin, lenguaje1[i].nombre);
                cout << "Tipado: "; getline(cin, lenguaje1[i].tipado);
            }
            break;
        case 5:
            for (int i = 0; i < 3; i++) {
                cout << "\nLaptop " << i + 1 << ":\n";
                cout << "Almacenamiento: "; getline(cin, Laptop1[i].almacenamiento);
                cout << "Procesador: "; getline(cin, Laptop1[i].procesador);
                cout << "Memoria: "; getline(cin, Laptop1[i].memoria);
                cout << "GPU: "; getline(cin, Laptop1[i].GPU);
                cout << "Marca y Modelo: "; getline(cin, Laptop1[i].MarcaModelo);
                cout << "Precio: "; cin >> Laptop1[i].precio;
                limpiarBuffer();
            }
            break;
        case 6:
            for (int i = 0; i < 3; i++) {
                cout << "\nUSB " << i + 1 << ":\n";
                cout << "Marca: "; getline(cin, USB1[i].marca);
                cout << "Capacidad de Almacenamiento: "; getline(cin, USB1[i].capacidad);
                cout << "Precio: "; getline(cin, USB1[i].precio);
            }
            break;
        case 7:
            for (int i = 0; i < 3; i++) {
                cout << "\nTipo de Almacenamiento " << i + 1 << ":\n";
                cout << "Marca: "; getline(cin, Tipoalmacenamiento1[i].marca);
                cout << "Tipo: "; getline(cin, Tipoalmacenamiento1[i].tipo);
                cout << "Capacidad: "; getline(cin, Tipoalmacenamiento1[i].capacidad);
            }
            break;
        case 8:
            for (int i = 0; i < 3; i++) {
                cout << "\nMonitor Externo " << i + 1 << ":\n";
                cout << "Hz: "; getline(cin, MonitorExterno1[i].Hz);
                cout << "Conectividad: "; getline(cin, MonitorExterno1[i].conectividad);
                cout << "Marca: "; getline(cin, MonitorExterno1[i].marca);
                cout << "Pulgadas: "; getline(cin, MonitorExterno1[i].pulgadas);
                cout << "Precio: "; cin >> MonitorExterno1[i].precio;
                limpiarBuffer();
            }
            break;
        default:
            cout << "Opción no válida." << endl;
            break;
    }

    return 0;
}