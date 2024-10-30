#include <iostream> 
#include <string>
using namespace std;

double promedio(int n, int a[], double suma=0 , int i=0){
	if(i==n){
		return suma/n; 
	}
	else{
		return promedio(n, a, suma + a[i] , i+1); 
	}
} 

int main(){
	int a[]={1,3,4,5,6,7,19}; 
	
	int n = sizeof(a)/ sizeof(a[0]); 
	
	cout<<endl; 
	for(int i=0; i<n; i++){
		cout<<a[i]<<" ";
	}
	cout<<endl; 
	
	cout<<"\nEl promedio de los numeros que se observan en el arreglo es: "<<promedio(n,a); 
	
	return 0; 
}
