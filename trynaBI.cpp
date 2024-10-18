//busqueda binaria 

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std; 

int main(){
	srand(time(0)); 
	
	int n=20; 
	int a[n]; 
	
	for(int i=0; i<n; i++){
		a[i] = 10 + rand()% 30; 
	}
	
	cout<<endl; 
	for(int i=0; i<n; i++){
		cout<<a[i]<<" "; 
	}
	cout<<endl; 
	
	int aux, k;
	
	for(int i=1; i<n; i++){
		aux = a[i]; 
		k=i-1;
		while((k>=0) && aux < a[k]){
			a[k+1] = a[k]; 
			k--; 
		}
		a[k+1] = aux; 
	}
	
	cout<<endl; 
	for(int i=0; i<n; i++){
		cout<<a[i]<<" "; 
	}
	cout<<endl; 
	
	
	return 0;
}