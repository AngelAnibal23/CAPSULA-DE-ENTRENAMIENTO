/*
Rellenar un array de 10 numeros, posteriormente utilizando punteros indicar cuales son numeors pares y su posicion en memoria. 
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
		a[i] = 1 + rand()% 9; 
	}
	
	
	for(int i=0; i<10; i++){
		cout<<a[i]<<" "; 
	}
	cout<<endl; 
	
	for(int i=0; i<10; i++){
		if(*p%2==0){
			cout<<"El numero "<<*p<<" es par. Y su posicion de memoria es: "<<p<<endl; 
		}
		p++;
	}
	
}