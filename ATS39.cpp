/*
Desarrollar un programa que determine si una matriz es simetrica o no. 
Una matriz es simetrica si es cuadrada y si es igual a su matriz transpuesta. 
*/

#include <iostream> 

using namespace std; 
 
int main(){
	bool compro = false;
	int a[3][3]={
				  {1,3,9},
				  {3,5,6},
				  {9,6,9}};
		
	
	int b[3][3]; 
	int cantElementos = 3*3; 
	int conta = 0; 
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			b[j][i] = a[i][j];
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(a[i][j] == b[i][j]){
				conta++; 
			}
		}
	}
	
	if(cantElementos == conta){
 	cout<<"Es simetrica. "<<endl; 
	}
	else{
		cout<<"No es simetrica. "<<endl; 
	}
	
}