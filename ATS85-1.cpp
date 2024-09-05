/*
Rellenar un arreglo con n numeros, posteriormente utilizando punteros determinar el menor elemento del arreglo. 
*/

#include <iostream> 
#include <ctime>
#include <cstdlib>

using namespace std; 

int main(){
	srand(time(0)); 
	
	int a[10]; 
	int *p; 
	
	p = a; 
	
	for(int i=0; i<10; i++){
		a[i] = 1 + rand()% 10; 
	}
	
	cout<<"Array generado aleatoriamente: "<<endl; 
	for(int i=0; i<10; i++){
		cout<<a[i]<<" "; 
	}
	cout<<endl;
	
	int menor = *p; 
	
	for(int i=0; i<10; i++){
		if(menor > *p){
			menor = *p; 
		}
		p++; 
	}
	cout<<endl; 
	cout<<"El elemento menor del arreglo generado aleatoria mente es: "<<menor<<endl; 
	cout<<"Su posicion de memoria es: "<<p<<endl; 
	
	return 0; 	
}