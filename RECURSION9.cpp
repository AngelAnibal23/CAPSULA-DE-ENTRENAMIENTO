/*
Escriba una funcion escribeNumeros(int ini, int fin) que devuelva en la salida estandar los numeros del ini al fin. 
Escriba una version que escriba los numeros en orden ascendente 
*/

#include <iostream> 
using namespace std; 

int escribeNumeros(int a, int b){
	if(a==b){
	  return a;  
	}
	else{
	   return  escribeNumeros(a,b-1); 
	}
}

int main(){
	int ini, fin; 
	
	cout<<"Digite el numero inicial y el final: "; 
	cin>>ini>>fin; 
	
	for(int i = ini; i<=fin; i++){
		cout<<escribeNumeros(i, fin)<<" ";
	}
	
	return 0; 
}