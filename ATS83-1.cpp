#include <iostream> 
using namespace std; 

int main(){
	int num, *p; 
	
	cout<<"Digite el numero a comprobar: "; 
	cin>>num; 
	
	p = &num; 
	
	int cont = 0;

	for(int i = 1; i <=*p; i++){
		if(*p%i==0){
			cont++; 
		}
	}	
	
	if(cont == 2){
		cout<<"\nEl numero "<<*p<<" es primo. "; 
	}
	else{
		cout<<"\nEl numero "<<*p<<" no es primo. "; 
	}
	
	return 0; 
}