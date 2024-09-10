/*Hallar el menor elemento de un arreglo unidimensional, utilizando funciones recursivas*/

#include <iostream>
using namespace std;

int menorElemento(int[], int); 

int main(){
	int n; 
	
	cout<<"Digite cuantos elementos tendra el arreglo: "; 
	cin>>n; 
	
	int array[n];  

	for(int i=0; i<n; i++){
		cout<<"Digite el elemento ["<<i<<"]: "; 
		cin>>array[i];  
	} 
	
	cout<<"\nImprimiendo el arreglo: "; 
	for(int i=0; i<n; i++){
		cout<<array[i]<<" ";  
	} 
	
	cout<<"El menor elemento del arreglo brindado es: "<<menorElemento(array, n);
	
	return 0; 
} 

int menorElemento(int a[], int elem){
	int menor; 
	if(elem==0){
		menor = a[elem];  
		
		return menor; 
	}
	else{
		menor = menorElemento(a, elem-1); 
		if(a[elem-1] < menor){
			menor = a[elem - 1]; 
		}
		
		return menor; 
		
	}
	
	
}