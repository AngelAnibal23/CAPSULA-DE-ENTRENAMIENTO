/*
2. Rotar Columnas de una Matriz (4 puntos):
Escriba un programa que genere una matriz aleatoria de 4x4 con números entre 1 y 9, y luego rote las
columnas de la matriz una posición a la derecha. El programa debe mostrar la matriz original y la
matriz rotada en horizontal.
Ejemplo de Salida:
Matriz inicial generada aleatoriamente:
	1 2 3 4
	5 6 7 8
	9 1 2 3
	4 5 6 7
	
Matriz rotada:
	4 1 2 3
	8 5 6 7
	3 9 1 2
	7 4 5 6

*/

#include <iostream>
#include <ctime> 
#include <cstdlib>  
using namespace std; 

int main(){
	int a[4][4], b[4][4]; 
	
	srand;  
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			a[i][j] = 1 + rand()% 9;  
		}
	}
	
	cout<<"\nMatriz inicial generada aleatoriamente: \n"; 
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<a[i][j]<<" ";  
		}
		cout<<endl; 
	}
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(j==0 ){
				b[i][0] = a[i][j]; 
			} 
			else{
			 b[i+1][j+1] = a[i][j]; 
			}
		
			
		}
	}
	
	cout<<"\nMatriz rotada:  \n"; 
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			cout<<b[i][j]<<" ";  
		}
		cout<<endl; 
	}
	
	
	
	return 0; 
}