#include <iostream> 
using namespace std; 

int main(){
	int a[]={4,6,7,3,1,7,9}; 
	
	for(int i=0; i<7; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl; 
	
	int menor; 
	int k; 
	
	for(int i=0; i<7; i++){
		menor = a[i]; 
		k = i; 
		for(int j=i+1; j<7; j++){
			if(menor > a[j]){
				menor = a[j]; 
				k = j; 
			}
		}
		a[k] = a[i]; 
		a[i] = menor;	
	}
	
	
	for(int i=0; i<7; i++){
		cout<<a[i]<<" ";
	}
	
	return 0; 
}