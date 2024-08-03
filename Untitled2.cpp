/* 
Crea un programa que genere y muestre una serie de n�meros aleatorios entre 0 y un 
n�mero m�ximo especificado por el usuario. El programa solicitar� al usuario la 
cantidad de n�meros aleatorios que desea generar y el valor m�ximo permitido. 
Utiliza la funci�n rand de la librer�a 
cstdlib para generar los n�meros aleatorios.
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