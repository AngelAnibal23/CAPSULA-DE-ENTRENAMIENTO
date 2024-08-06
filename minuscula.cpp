#include <iostream> 
#include <string> 

using namespace std; 

int main(){
	char cadena[50]="minuscula en tu cara";  
	
	toupper(cadena[4]); 
	
	cout<<cadena; 
	
	return 0; 
}