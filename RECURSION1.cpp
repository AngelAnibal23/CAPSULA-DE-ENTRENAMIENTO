#include <iostream> 
using namespace std; 

int factorial(int); 

int main(){
	int num; 
	
	cout<<"Digite el numero para obtener un factorial: "; 
	cin>>num;
	cout<<endl;  
	
	cout<<"El factorial del numero ingresado es: "<<factorial(num)<<endl; ;
	
	return 0; 
}

int factorial(int x){
	if(x==0){
		return 1; 
	}
	else{
		return x * factorial(x-1); 
	}
}
