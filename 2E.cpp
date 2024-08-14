/*
Ejercicio 2E:
- Diseñar un programa que muestre un menú de opciones:
1. Ordenar una lista de n números
2. Imprimir la media
*/

#include <iostream>
#include <ctime> 
#include <cstdlib> 

using namespace std; 
int main(){
	srand; 
	
	int a[10]; 
	int suma = 0; 
	
	for(int i=0; i<10; i++){
		a[i] = 1 + rand()% 20; 
	}	 
	
	cout<<"Numeros generados: "; 
	for(int i=0; i<10; i++){
	    cout<<a[i]<<" "; 
	}	 	
	
	int aux; 
	
	for(int i=0; i<10-1; i++){
		for(int j=i+1; j<10; j++){
			if(a[i]>a[j]){
				aux = a[i]; 
				a[i] = a[j]; 
				a[j] = aux;  
			}
		}
	}
	
	cout<<"\nNumeros ordenados: "<<endl; 
	for(int i=0; i<10; i++){
	    cout<<a[i]<<" "; 
	}
	
	for(int i=0; i<10; i++){
		suma+=a[i]; 
	}
	
	float media; 
	
	media = suma/ 10; 
	
	cout<<"\nLa media es: "<<media<<endl; 
	
	
	return 0; 
}