/*
Ejercicio 4E: 
Hacer un programa para calcular el valor promedio de cada fila en una matriz de mxn
*/ 

#include <iostream>
#include <ctime> 
#include <cstdlib>

using namespace std; 
int main(){
	int m, n; 
	
	cout<<"Digite el numero de filas: "; 
	cin>>m; 
	cout<<"Digite el numero de columnas: "; 
	cin>>n; 
	
	srand; 
	
	int a[m][n]; 
	
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
			a[i][j] = 1 + rand()% 9; 
		}
	}	
	
	cout<<"MATRIZ: "<<endl;
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++){
		  cout<<a[i][j]<<" "; 
		}

		cout<<"\t"<<"\n"; 
	}
	
	
	return 0; 
}