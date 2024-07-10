/*
Ejercicio 3 ATS: 
Hacer una matriz de tipo entera de orden 2 , llenarla de numeros y 
luego copiar todo su contido hacia la otra matriz
*/
#include <iostream>
using namespace std; 
int main(){
	int matriz1[2][2]={{2,3},{5,7}}; 
	int matriz2[2][2]; 
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<matriz1[i][j]; 
		}
		cout<<"\n"; 
	}
	
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			matriz2[i][j]=matriz1[i][j]; 
		}
	}
	
	cout<<"Imprimiendo matriz 2: "<<endl; 
	for(int i=0; i<2; i++){
		for(int j=0; j<2; j++){
			cout<<matriz2[i][j]; 
		}
		cout<<"\n"; 
	}
	
	
	return 0; 
}
