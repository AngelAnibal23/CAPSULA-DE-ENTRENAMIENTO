/*
							PUNTEROS
							
 *n = La variable cuya direccion esta almacenada en n 
 &n = La direccion de la variable n 
 
 Para mostrar lo que hay en la posciion de memoria que le has dado a un puntero  se usa (*)  
*/

#include <iostream> 
using namespace std; 

int main(){
	int num, *p; 

	
	num = 340; 
	
	p = &num;  
	
 
	
	cout<<"Direccion de memoria: "<<p<<endl; 
	cout<<"Numero: "<<*p<<endl; 

	return 0; 
}