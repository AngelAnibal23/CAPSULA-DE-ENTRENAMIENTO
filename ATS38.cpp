/*
Realice un programa que lea una matriz de 3x3 y cree syu matriz transpuesta. 
La matriz transpuesta es aquella en la que la columna i era la fila j de la matriz original.
*/
#include <iostream> 
using namespace std; 

int main(){
	int a[3][3], b[3][3]; 
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"Elemento"<<" ->"<<i+1<<":"; 
			cin>>a[i][j]; 
		}
	}
	
	cout<<"Matriz ingresada: "<<endl; 
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){ 
			cout<<a[i][j]<<" "; 
		}
		cout<<endl; 
	}
	cout<<endl; 
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			b[j][i] = a[i][j];
		}
	}
	
	cout<<endl; 
	cout<<"Matriz transpuesta de la matriz ingresada: "<<endl; 
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){ 
			cout<<b[i][j]<<" "; 
		}
		cout<<endl; 
	}
	
	return 0; 
}