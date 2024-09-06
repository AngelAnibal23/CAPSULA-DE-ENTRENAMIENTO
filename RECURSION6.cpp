#include <iostream> 
using namespace std; 

int sumaArray(int[], int); 

int main(){
	int a[]={1,2,3,4,5,6,7,8,9,10}; 
	int longitud = 10; 
	cout<<"Array: "<<endl; 
	for(int i=0; i<longitud; i++){
		cout<<a[i]<<" "; 
	}
	
	cout<<"\nLa suma de los elementos del arreglo es: "<<sumaArray(a, longitud-1); 
	
	return 0; 
}

int sumaArray(int x[], int n){
	if(n==0){
		return x[n];
	}
	else{
		return x[n] + sumaArray(x, n-1); 
	}
}