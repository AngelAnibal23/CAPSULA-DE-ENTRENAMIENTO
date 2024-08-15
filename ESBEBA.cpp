/*
Ejercicio ESBEBA:
Cree un programa que, PERMITA buscar un numero dentro de un arrayt de ENTEROPS (MEDIANTE UNA FUNCION) 
y mostrar un mensaje indicando cuantas veces aparece en el array
*/

#include <iostream>
using namespace std; 

void buscarElemento(int x, int n ,int array[]){
	int contador=0; 
	for(int i=0; i<n; i++){
		if(x == array[i] ){
			contador++; 		
		}
	}
	
	if(contador == 0){
		cout<<"El numero ingresado, no se encuentra en el arreglo. "; 
	}
	else{
		cout<<"El numero: "<<x<<"  se repite: "<<contador<<"  veces."<<endl; 
	}
}

int main(){
	int n, numero; 
	
	cout<<"Digite cuantos elementos tendra el array: "; 
	cin>>n; 
	
	int array[n];   
	
	cout<<endl; 
	for(int i=0; i<n; i++){
		cout<<"Elemento "<<i+1<<" :"; 
		cin>>array[i]; 
	}
	
	cout<<"\nArray: "<<endl; 
	for(int i=0; i<n; i++){
		cout<<array[i]<<" ";  
	}
	cout<<endl; 
	
	cout<<"\n"; 
	cout<<"Eliga el numero a buscar: "; 
	cin>>numero; 
	
	cout<<"\n"; 
	buscarElemento(numero, n, array); 
	
	
	return 0; 
}