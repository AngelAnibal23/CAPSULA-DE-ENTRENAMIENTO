/*
hacer un programa que pida al usuario que digite una cadena de caracters, 
luego verificar la longitud de la cadena, y si esta supera a 10 caracteres mostrarla en pantalla, 
caso contratrio no mostrarla. 
*/

#include <iostream> 
#include <string>
using namespace std; 

int main(){
	int longitud; 
	char a[100];  
	
	cout<<"Digite una cadena: "; 
	cin.getline(a,100,'\n'); 
 	
	longitud = strlen(a); 
	
	 
	
	if(longitud>10){
		cout<<a; 
	}
	else{
		cout<<"-"; 
	}
	
	
	return 0; 
}