#include <iostream> 
using namespace std; 

int main(){
	int a[]={4,6,7,3,1,7,9}; 
	
	for(int i=0; i<7; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl; 
	
	int aux; 
	int k; 
	
	for(int i=1; i<7; i++){
		aux = a[i]; 
		k= i -1; 
		while((k>=0) && aux < a[k]){
			a[k+1] = a[k];
			k--; 
		}	
		a[k+1] = aux; 
	}
	
	for(int i=0; i<7; i++){
		cout<<a[i]<<" ";
	}
	
	return 0; 
}