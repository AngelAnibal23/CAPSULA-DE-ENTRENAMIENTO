/*
16.	Implemente, tanto de forma recursiva como de forma iterativa, 
una función que nos devuelva el máximo común divisor de dos 
números enteros utilizando el algoritmo de Euclides.
*/

#include <iostream>
using namespace std; 

int MCD(int x, int y){
	if(y == 0){
		return x; 
	}
	else{
		return MCD(y, x%y); 
	}
}

int main(){
	int a, b; 
	
	cout<<"Digite los 2 numeros a sacar MCD: "; 
	cin>>a>>b; 
	
	cout<<"El maximo comun divisor de los datos ingresados es: "<<MCD(a,b); 
	
	return 0; 
}