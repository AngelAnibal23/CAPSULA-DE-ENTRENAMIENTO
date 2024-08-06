#include <iostream> 
using namespace std;  

int main(){
	int array[5]={1,3,11,8,2}; 
	int aux; 
	
	for(int i=0; i< 5 - 1; i++){
		for(int j=i + 1; j < 5; j++){
		if(array[i]>array[j]){
			aux = array[i]; 
			array[i]=array[j]; 
			array[j]=aux; 
		}
		}
	}
	
	for(int i=0; i<5; i++){
		cout<<array[i]<<" "; 
	}
	
	
	return 0; 
}