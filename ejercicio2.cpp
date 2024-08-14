/*
Ejercicio 3: Arreglos N-dimensionales (Matrices)
Enunciado:
Desarrolla un programa en C++ que permita al usuario ingresar las dimensiones m y n de una matriz bidimensional y luego 
ingrese los elementos de la matriz. El programa debe calcular y mostrar la suma de cada fila de la matriz.

Por ejemplo, si el usuario introduce una matriz de 2x3 con los elementos:

Copiar código
1 2 3
4 5 6
El programa debe mostrar la suma de las filas: 6 y 15.
*/

#include <iostream>
using namespace std; 
int main(){
	int m, n; 
	
	cout<<"Digite la cantidad de filas: ";
	cin>>m; 
	cout<<"Digite la cantidad de columnas: "; 
	cin>>n; 
	
	int matriz[m][n];  	
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<"Rellene la matriz: ";
			cin>>matriz[i][j]; 
		}
	}
	
	cout<<endl; 
	cout<<"Imprimiendo matriz.";  
	cout<<endl; 
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			cout<<matriz[i][j];
		}
		cout<<"\n"; 
	}
	
	
	
	return 0; 
}