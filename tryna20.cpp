/*
20.	Proponer un procedimiento recursivo tal que dado un arreglo de 
números reales permita calcular el maximo elemento del vector y su posición.
*/

#include <iostream> 
using namespace std; 

int maximo(int a[], int n){
	int mayor; 
	if(n==0){
		mayor = a[n]; 
		return  mayor; 
	}
	else{
		mayor = maximo(a, n-1); 
		if(mayor < a[n]){
			mayor = a[n];  
		}
		return mayor;
	}
}

int main(){
	int n; 
	
	cout<<"Digite la cantidad de elementos que tendra el arreglo: "; 
	cin>>n; 
	
	int a[n]; 
	
	for(int i=0; i<n; i++){
		cout<<"Elemento: "<<i+1; 
		cin>>a[i]; 
	}
	
	cout<<endl<<"Arreglo: "; 
	for(int i=0; i<n; i++){
		cout<<a[i]<<" "; 
	}
	
	cout<<"El eleemnto maximo del arreglo es: "<<maximo(a, n); 
	
	return 0; 
}
