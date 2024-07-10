/*
Ejercicio 1: 
Hacer un programa para rellenar una matriz pidiendo al usuario el 
numero de filas y columnas, Posteriormente mostrar la matriz en 
pantalla. 
*/

#include <iostream>

using namespace std; 
int main(){
	int filas, columnas; 
	
	cout<<"Digite el numero de filas: "; 
	cin>>filas; 
	cout<<"Digite el numero de columnas: "; 
	cin>>columnas; 
	
	int numeros[filas][columnas]; 
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"Digite un numero: ["<<i<<"]["<<j<<"]: "; 
			cin>>numeros[i][j]; 
		}
	}	
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<numeros[i][j];
		}
		cout<<"\n"; 
	}
	
	return 0; 
}
