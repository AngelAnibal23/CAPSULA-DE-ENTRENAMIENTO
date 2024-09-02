#include <iostream> 
using namespace std; 

int factorial(int); 

int main(){
	int n, factorial1; 
	
	cout<<"Digite el numero para obtener su factorial: ";
	cin>>n; 
	
 	factorial1 = factorial(n); 
	
	cout<<"\nEl factorial del numero es: "<<factorial1<<endl; 
	
	return 0; 
}

int factorial(int n){
	if(n==0){
		n=1; 
	}
	else{
		n = n * factorial(n-1);  
	}
	
	return n; 
}