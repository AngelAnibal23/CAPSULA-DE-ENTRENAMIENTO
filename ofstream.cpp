
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream archivo("texto.txt"); // Abrir archivo en modo escritura
    
    string linea; 
    getline(cin, linea); 
    string linea2; 
    getline(cin, linea2);  

    archivo << linea << endl;
    archivo << linea2 << endl;

    archivo.close(); // Cerrar el archivo
    return 0;
}
