/* 
Crea un programa que genere y muestre una serie de números aleatorios entre 0 y un 
número máximo especificado por el usuario. El programa solicitará al usuario la 
cantidad de números aleatorios que desea generar y el valor máximo permitido. 
Utiliza la función rand de la librería 
cstdlib para generar los números aleatorios.
*/

#include <iostream>
#include <cstdlib> 
#include <time.h>

using namespace std; 

int main(){
	int numero, numeroAleatorio; 
	
	cout<<"Digite el limite maximo: "; 
	cin>>numero; 
	
	srand(time(0)); 
	
	cout<<"Los numeros generados son: "<<endl; 
	for(int i=0; i<=numero; i++){
		numeroAleatorio = 0 + rand()% + (numero + 1 - 0);
		 
		 cout<<numeroAleatorio<<" "; 
	}
	
}