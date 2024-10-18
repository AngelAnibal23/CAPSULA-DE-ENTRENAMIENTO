#include <iostream> 
using namespace std; 

int main(){
	int menor, aux; 
	
 for(int i=0; i<n; i++){
		menor = a[i]; 
		k = i; 
		for(j=i+1; j<n; j++){
			if(a[j] < menor){
				menor = a[j]; 
				k = j; 	
			}
		}
		a[k] = a[i];  
		a[i] = menor; 
	}
	
	
	int menor; 
	int k; 
	
	for(int i=0; i<n; i++){
		menor = a[i]; 
		k = i; 
		for(int j=i+1; j<n; i++){
			if(menor > a[j]){
				menor = a[j]; 
				k = j; 
			}
		}
		a[k] = a[i]; 
		a[i] = menor; 
	}
	