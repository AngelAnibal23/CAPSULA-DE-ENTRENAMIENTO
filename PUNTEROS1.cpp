/*
Rellenar un arreglo con n numeros, posteriormente utilizando punteros determinar el menor elemento del arreglo.
*/

#include <iostream> 
#include <ctime> 
#include <cstdlib>

using namespace std; 

int main(){
	int n, *p; 
	
	srand(time(0)); 
	
	cout<<"Digite cuantos elementos tendra el arreglo: "; 
	cin>>n; 
	
	int a[n]; 
	int menor; 
	
	
	
	for(int i=0; i<n; i++){
		a[i] = 1 + rand()% 20; 
	}
	
	p = a; 
	menor = *p8; 
	
	cout<<"\nImprimiendo el arreglo: "<<endl; 
	for(int i=0; i<n; i++){
		cout<<a[i]<<" "; 
	}
	cout<<endl; 
	
	
	for(int i=0; i<n; i++){
		if(menor>*p){
			menor = *p;  
		}
		p++; 
	}
	
	cout<<"\nEl menor elemento del arreglo es: "<<menor<<endl; 
	
	return 0; 
}