/*
Ejercicio 3E:
Elaborar un programa que genere una matriz identidad de orden n, el valor n es
ingresado por el teclado.
*/

#include <iostream>
using namespace std; 
int main(){
	int n; 
	
	cout<<"Indique el orden de la matriz: "; 
	cin>>n; 
	
	int a[n][n]; 
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i==j){
				a[i][j]=1; 
			}
			else{
				a[i][j]=0; 
			}
		}
	}
	
	cout<<endl; 
	cout<<"Matriz identidad de orden "<<n<<" :"<<endl; 
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
		  cout<<a[i][j]<<" "; 
		}

		cout<<"\t"<<"\n"; 
	}
	
	return 0; 
}