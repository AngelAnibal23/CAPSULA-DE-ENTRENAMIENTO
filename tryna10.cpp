/*
10.	Implemente, tanto de forma recursiva como de forma iterativa, una función 
que permita calcular el número de combinaciones 
de n elementos tomados de m en m.
*/

int combinatoria(int m, int n){
	if(m==n){
		return 1; 
	}
	else if(n==1){
		return m; 
	}
	else{
		return combinatoria(m-1, n-1) + combinatoria(m-1, n); 	
	}
}

#include <iostream> 
using namespace std; 
int main(){
	int m, n; 
	
	cout<<"Digite la 2 componentes: "; 
	cin>>m>>n;
	
	cout<<"El resultado de la combinatoria es: "<<combinatoria(m,n); 	
	
	
	return 0; 
}