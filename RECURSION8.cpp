#include <iostream> 
using namespace std; 

int potencia(int a, int b){
	if(b==1){
		return a; 
	}
	else{                   
		return a * potencia(a, b-1); 
	}
	
	
}

int main(){
	int a, b; 
	
	cout<<"Digite el numero  y la potencia: "; 
	cin>>a>>b; 
	
	cout<<"\nLa potencia del numero que quiere obtener es: "<<potencia(a,b); 
	
	return 0; 
}