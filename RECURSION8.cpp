#include <iostream> 
using namespace std; 

double potencia(int a, int b){
	if(b==1){
		return a; 
	}
	else if(b==0){
		return 1; 
	}
	else{                   
		if(b>=0){
			return a * potencia(a, b-1); 
		}
		else{
			return a * potencia(a, b+1);
		}
	}	
}

/*
double potenciaNegativa(int a, int b){
	if(b==1){
		return a; 
	}
	else if(b==0){
		return 1; 
	}
	else{                   
		return a * potencia(a, b+1); 
	}	
}
*/

int main(){
	double a, b; 
	
	cout<<"Digite el numero  y la potencia: "; 
	cin>>a>>b; 
	
	if(b>=0){
		cout<<"\nLa potencia del numero que quiere obtener es: "<<potencia(a,b); 
	}
	
	else{
		cout<<"\nLa potencia del numero que quiere obtener es: "<<potencia(a,b); 
	}
	
	
	return 0; 
}