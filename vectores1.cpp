/*
Ejercicio 1:
Realizar un programa que defina un vector llamado “vector_numeros” de 10 enteros, a continuación lo inicialice con valores 
aleatorios (del 1 al 10) y posteriormente muestre en pantalla cada elemento del vector junto con su cuadrado y su cubo.
*/

#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std; 
int main(){
	int vector_numeros[10]; 
	
	srand(time(0)); 
	
	for(int i=0; i<10; i++){	
	vector_numeros[i]=1+rand()%(10);	 
	}
	
	for(int i=0; i<10; i++){
		cout<<i+1.<<"-> "<< "El numero es: " <<vector_numeros[i] <<" El cuadrado es: "<<pow(vector_numeros[i],2)<<" El cubo es: "<<pow(vector_numeros[i],3)<<endl; 
	}
	
	
	
	return 0; 
}
