#include <iostream>
#include <cstdlib> 
#include <ctime>
using namespace std; 

void invertir(int a[], int inicio, int fin){
	int aux; 
	
	if(inicio >= fin){
		return; 
	}
	else{
		aux = a[inicio]; 
		a[inicio] = a[fin]; 
		a[fin] = aux;
		
		invertir(a, inicio +1, fin -1 );  
	}
}

int main(){
	srand(time(0)); 
	
	int n; 
	
	cout<<"Digite la cantidad de leemntos que tendra e array: "; 
	cin>>n; 
	
	int a[n]; 
	
	for(int i=0; i<n; i++){
		a[i] = 1 + rand()% 9; 
	}
	
	cout<<endl; 
	for(int i=0; i<n; i++){
		cout<<a[i]<<" "; 
	}
	
	invertir(a, 0, n-1); 
	
	cout<<"El arreglo invertido es: \n"; 
	cout<<endl; 
	for(int i=0; i<n; i++){
		cout<<a[i]<<" "; 
	}
	
	
	
	return 0; 
}