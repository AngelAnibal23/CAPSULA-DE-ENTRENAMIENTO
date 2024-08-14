#include <iostream> 
using namespace std; 

int main(){
	int	a[5]={1,65,3,23,53}; 
	int aux; 
	
	for(int i=0; i<5-1; i++){
		for(int j=i+1; j<5; j++){
			if(a[i]>a[j]){
				aux=a[i];
				a[i]=a[j]; 
				a[j]=aux;  
			}
		}
	}
	
	for(int i=0; i<5; i++){
		cout<<a[i]<<" ";
	}
}