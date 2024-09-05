/*
Comprobar si un numero es par o impar, y señalar la posicion de memoria donde se esta guardando el numero. Con punteros.
*/

#include <iostream>
using namespace std; 
int main(){
	int num, *p; 
	
	cout<<"Digite el numero: "; 
	cin>>num; 
	
	p = &num; 
	
	if(*p%2==0){
		cout<<endl; 
		cout<<"El numero "<<*p<<" es par. "; 
		cout<<"Direccion: "<<p; 
	
	} 
	else{
		cout<<endl; 
		cout<<"El numero "<<*p<<" es impar. "; 
	 	cout<<"Direccion: "<<p; 
	}
	
	return 0; 
}