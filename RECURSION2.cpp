#include <iostream> 
using namespace std; 

int multiplicacion(int , int); 

int main(){
	int n1, n2; 
	
	cout<<"Digite 1 numero a multiplicar: "; 
	cin>>n1; 
	cout<<"Digite el segundo numero a multiplicar: "; 
	cin>>n2; 
	
	
	cout<<"\nEl resultado de la multiplicacion es: "<<multiplicacion(n1, n2)<<endl; 
	
	return 0; 
}

int multiplicacion(int x, int y){
	if(y==0){
		return 0; 
	}
	else{
		return x + multiplicacion(x, y-1); 
	}
}