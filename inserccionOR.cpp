#include <iostream> 
using namespace std; 

int main(){
	int a[]={1,3,4,21,34,5,2,4,7,8}; 
	int k, aux;
	
	for(int i=0; i<10; i++){
		aux = a[i]; 
		k = i;  
		while((k>0) && (a[k-1]>aux)){
			a[k] = a[k-1]; 
			k--; 
		}
		a[k] = aux; 
	}
	
	for(int i=0; i<10; i++){
		cout<<a[i]<<" "; 
	}
	
	return 0; 
}