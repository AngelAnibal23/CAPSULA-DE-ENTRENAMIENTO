#include <iostream> 
using namespace std; 

int main(){
	double num, invirtiendo; 
	
	cout<<"Digite el numero: "; 
	cin>>num; 
	
	cout<<endl; 
	for(int i=0; num>0; i++){
		invirtiendo = num % 10; 
		cout<<invirtiendo; 
		num = num/10; 
	}
	
	
	return 0; 
}