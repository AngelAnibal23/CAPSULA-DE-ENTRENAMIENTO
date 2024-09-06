#include <iostream> 
using namespace std; 

int suma(int); 

int main(){
	int n; 
	
	cout<<"Digite la cantidad de terminos a sumar: "; 
	cin>>n;  
	
	
	cout<<"\nEl resultado de la suma recursiva es: "<<suma(n); 
	
	return 0; 
}

int suma(int x){
	if(x==1){
		return 1; 
	}
	else{
		return x + suma(x-1); 
	}
}