#include <iostream>
#include <fstream>
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
        cout << "No se pudo abrir el archivo." << endl;
    }

    return 0;
}