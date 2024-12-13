#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream archivo("texto.txt"); // Abrir archivo en modo lectura
    if (!archivo) {
        cout << "Error al abrir el archivo." << endl;
        return 1;
    }

    string linea;
    while (getline(archivo, linea)) { // Leer línea por línea
        cout << linea << endl;
    }

    archivo.close(); // Cerrar el archivo
    return 0;
}