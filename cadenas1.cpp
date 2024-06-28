/*
Hacer un programa que pida al usuario que digite una cadena de caracteres, 
luego vcerificar la longitud de la cadena, y siu esta supera a 10 caracteres mostrarla en pantalla, 
caso contrario no mostrarla.
*/

#include <iostream>
#include <string.h>
using namespace std; 

int main(){
	char cadena[20];
	int longitud=0; 
	
	cout<<"Digite su cadena: "; 
	cin.getline(cadena,20,'\n'); 
	
 	longitud= strlen(cadena); 
	
	if(longitud > 10){
		cout<<cadena; 
	}
	else{
		return 2; 
	}
	
	return 0; 
}
