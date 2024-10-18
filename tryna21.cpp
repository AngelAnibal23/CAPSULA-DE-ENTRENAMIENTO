/*
21.	Proponer un procedimiento recursivo tal que dado un arreglo de 
números reales permita calcular el promedio de sus elementos.
*/
#include <iostream> 
using namespace std; 

double promedio(int a[], int n, int i=0, double suma =0){
	if(i==n){
		return suma/n; 
	}
	else{
		return promedio(a,n, i+1, suma + a[i]);
	}
}

int main(){
	int n; 
	
	cout<<"Digite la cantidad de elementos: "; 
	cin>>n; 
	
	int a[n]; 
	
	for(int i=0; i<n; i++){
		cout<<"Elemento "<<i+1<<" :"; 
		cin>>a[i]; 
	}
	
	for(int i=0; i<n; i++){
		cout<<a[i]<<" "; 
	}
	
	cout<<"El promedio de los elementos del array es: "<<promedio(a, n); 
	
	
	return  0; 
}