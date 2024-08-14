/*
1.
Producto de Dos Matrices: Implemente un programa que multiplique dos matrices de 3x3 y muestre 
el resultado, y muestre las dos matrices y su resultado en horizontal

Ejemplo de Salida

Matriz A: Matriz B: 	Resultado:
1 2 3 		9 8 7 		30 24 18
4 5 6 		6 5 4 		84 69 54
7 8 9 		3 2 1 		138 114 90
*/
#include <iostream>
using namespace std; 
int main(){
	int a[3][3]={{1,2,3},
				 {4,5,6},	
				 {7,8,9}
				}; 
				
	int b[3][3]={{9,8,7},
				 {6,5,4},
				 {3,2,1}
				};  
				
	int producto[3][3]={0}; 
	
	for(int i=0; i<3; ++i){
		for(int j=0; j<3; ++j){
			for(int k=0; k<3; ++k){
				producto[i][j]+=a[i][k]*b[k][j]; 
			}
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<producto[i][j]<<" "; 
		}
		cout<<"\n"; 
	}
	
	return 0; 
}