#include <fstream> 
#include <iostream> 
#include <string> 
using namespace std; 

int main(){
	ofstream archivo("texto.txt"); 
	if(!archivo) {
		cout << "Erorr al leer la linea. "; return 1; 
	}
	
	string linea1, linea2; 
	
	getline(cin, linea1); 
	getline(cin, linea2); 
	
	archivo << linea1 << endl; 
	archivo << linea2 << endl; 
	
	
	archivo.close();
	
	return 0; 
}