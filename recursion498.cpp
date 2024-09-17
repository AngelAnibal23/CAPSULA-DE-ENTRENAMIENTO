/*
Escribir una funcion recursiva que dado un numero entero positivo (no string) calcule su imagen especular. Por ejemplo f(345) = 543
*/
#include <iostream> 
using namespace std; 

int invertirNumero(int, int); 

int main(){
	int numero, invertido = 0; 
	
	cout<<"Escriba un numero: "; 
	cin>>numero; 
	
	cout<<"\nLa imagen especular del numero ingresado es: "<<"f("<<numero<<") = "<<invertirNumero(numero, invertido); 
	
	return 0; 
}

int invertirNumero(int a, int invertir){
	if(a==0){
		return invertir; 
	}
	else{
		invertir = (10 * invertir) + (a%10); 
		
		return invertirNumero(a/10, invertir); 
	}
}