#include <iostream>
using namespace std;

int main() {

    /*
    int x;  //declaracion
    x=5; //asignacion
    */
    // Enteros
    int x =5;
    int y =6;
    int suma = x+y;
    int multiplicacion = x*y;
    int division = x/y;
    int resta = x - y;
    cout << y << endl;
    cout << x << '\n';

    // Muestras de los enteros
    cout << "A) Las variables de enteros son: " << endl;
    cout << "las varibles de x y Y son 6 y 5" << '\n';
    cout << "siendo asi las  operaciones basicas vendrian siendo ";
    cout << "La suma "; cout << suma << '\n';
    cout << "La Resta: "; cout << resta << '\n';
    cout << "La Multiplicaion: "; cout << multiplicacion << endl;
    cout << "La division: "; cout << division << '\n';
    
    // los flotantes o double
    /*
    double temperatura = 36.5;
    float peso = 89.14;
    float altura = 1.77;
    */
    cout << "B) Las variables de float o double son: " << '\n';
    cout << "Para saber si el compilador muestre los numeros con decimales usamos los flotantes: double o float" << '\n';
    cout << "1.- Por ejemplo las caracterisiticas de una persona: " << '\n';
    // temperatura
    double temperatura = 36.5;
    cout << "La temperatura de una persona promedio es de: "; cout << temperatura << endl;
    //Kilos
    float peso = 89.14;
    cout << "El peso promedio de personas normales es de: "; cout << peso << endl;
    //Altura
    float altura = 1.77;
    cout << "La altura promedio de personas es de: "; cout << altura << '\n';
    
    // Las variables tipo char
    cout << "C) Las variables tipo char son las variables tipo char solo almacenan un caracter de una palabra  (usando solo una comilla)" << endl;
    
    char calificacion = 'a'; cout << calificacion << endl;

    // los BOLEANOS (Bool)
    cout << "D) LOS BOLEANOS SON VARIABLES QUE DETERMINAN EL VERDADERO O FALSO" << endl;
    cout << "USAMOS TRUE PARA DEMOSTRAR SI ES VERDADERO LO CUAL DARA 1 Y FALSE PARA SABER SI ES FALSO LO CUAL DARA 0" << '\n';
    bool estudiante = true;
    bool encendido = false;
    cout << "el auto esta encendido?: " << encendido << endl;
    cout << "Es usted estudiante?: " << estudiante << endl;
    
    // Las variables STRING
    cout << "E)  LOS STRINGS SON AQUELLAS QUE NOS PERMITE ALMACENAR MAS DE DOS VARIABLES LO CONTRARIO AL CHAR (Usando comillas dobles)" << '\n';
    string nombre = "Jhon Kenedy";

    cout << "Bienvenido al estudio: " << nombre << '\n';



    return 0;
}