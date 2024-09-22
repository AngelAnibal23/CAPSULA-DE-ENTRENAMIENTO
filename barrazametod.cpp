//El metodo de barraza esta mal?????? 

#include <iostream> 
using namespace std; 

int main(){
	int a[]={3,5,1,6,8,1,55}; 
	
	for(int i=0; i<7; i++){
		cout<<a[i]<<" "; 
	}
	
	int aux; 
	
	for(int i=0; i<7; i++){
		for(int j=0; j<7; j++){
			if(a[j] > a[j+1]){
				aux = a[j]; 
				a[j] = a[j+1]; 
				a[j+1] = aux; 	
			}
		}
	}
	
	cout<<endl; 
	for(int i=0; i<7; i++){
		cout<<a[i]<<" "; 
	}
	
	
	return 0; 
}