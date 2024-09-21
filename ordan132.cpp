//Ordenamiento directo. 
#include <iostream> 
using namespace std; 

int main(){
	int a[]={1,3,4,5,6,7,4,30,54,23}; 
	int aux; 
	
	for(int i=0; i<10; i++){
		for(int j=0; j<10; j++){
			if(a[j]>a[j+1]){
				aux = a[j]; 
				a[j] = a[j+1]; 
				a[j+1] = aux; 
			}
		}
	}
	
	for(int i=0; i<10; i++){
		cout<<a[i]<<" "; 
	}
	
	return 0; 
}