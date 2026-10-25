#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream archivo("input/datos.txt");
    string linea;

    if (archivo.is_open()) {
        while (getline(archivo, linea)) {
            cout << linea << endl;
        }
        archivo.close();
    } else {
        cout << "No se pudo abrir el archivo de entrada." << endl;
        return 1;
    }

    ofstream salida("output/datos_salida.txt");

    if (salida.is_open()) {
        salida << "Resultado de la lectura del archivo:" << endl;

        ifstream entrada("input/datos.txt");

        while (getline(entrada, linea)) {
            salida << linea << endl;
        }

        entrada.close();
        salida.close();
        cout << "Archivo de salida creado correctamente." << endl;
    } else {
        cout << "No se pudo crear el archivo de salida." << endl;
        return 1;
    }

    return 0;
}