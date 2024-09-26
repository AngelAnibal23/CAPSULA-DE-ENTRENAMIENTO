#include <iostream>
using namespace std; 

int secuencialDes(int[], int, int); 

int main(){
	int a[]={3,5,7,9,3,1,2,32,5,75,34}; 
	int dato; 
	
	for(int i=0; i<11; i++){
		cout<<a[i]<<" "; 
	}
	
	int n = 11; 
	
	cout<<"\nDigite el dato que quiere buscar: "; 
	cin>>dato;
	 
	secuencialDes(a, n, dato); 
	
	
	return 0; 
}

int secuencialDes(int a[], int cant, int dat){
	int pos = 0; 
	int i = 0;
	
	while(i<= cant && a[i] != dat){
		i++; 
	}
	
	if(i<=cant){
		pos = i; 
	}
	
	return pos; 
	
 }