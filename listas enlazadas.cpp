#include <iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo* siguiente;
};

class ListaEnlazada {
private:
    Nodo* cabeza;

public:
    ListaEnlazada() {
        cabeza = nullptr;
    }

    void insertar(int valor) {
        Nodo* nuevo = new Nodo{valor, nullptr};
        if (cabeza == nullptr) {
            cabeza = nuevo;
        } else {
            Nodo* temp = cabeza;
            while (temp->siguiente != nullptr) {
                temp = temp->siguiente;
            }
            temp->siguiente = nuevo;
        }
    }

    void mostrar() {
        Nodo* temp = cabeza;
        while (temp != nullptr) {
            cout << temp->dato << " -> ";
            temp = temp->siguiente;
        }
        cout << "NULL" << endl;
    }

    void eliminar(int valor) {
        Nodo* temp = cabeza;
        Nodo* anterior = nullptr;

        while (temp != nullptr && temp->dato != valor) {
            anterior = temp;
            temp = temp->siguiente;
        }

        if (temp == nullptr) {
            cout << "Valor no encontrado en la lista." << endl;
            return;
        }

        if (anterior == nullptr) {
            cabeza = cabeza->siguiente;
        } else {
            anterior->siguiente = temp->siguiente;
        }

        delete temp;
        cout << "Nodo con valor " << valor << " eliminado." << endl;
    }

    ~ListaEnlazada() {
        Nodo* temp;
        while (cabeza != nullptr) {
            temp = cabeza;
            cabeza = cabeza->siguiente;
            delete temp;
        }
    }
};

int main() {
    ListaEnlazada lista;
    int opcion, valor;

    do {
        cout << "\n----- MENU -----\n";
        cout << "1. Insertar valor\n";
        cout << "2. Mostrar lista\n";
        cout << "3. Eliminar valor\n";
        cout << "4. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Ingrese el valor a insertar: ";
                cin >> valor;
                lista.insertar(valor);
                break;
            case 2:
                cout << "Lista actual: ";
                lista.mostrar();
                break;
            case 3:
                cout << "Ingrese el valor a eliminar: ";
                cin >> valor;
                lista.eliminar(valor);
                break;
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo." << endl;
        }
    } while (opcion != 4);

    return 0;
}