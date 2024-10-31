/*
Construya una clase llamada rectangulo que 
tenga los siguientes atributos: largo y ancho. 
Y las siguienters funciones :  
Perimetro y area
*/

#include <iostream> 
using namespace std; 

class Rectangulo{
	private: 
		int largo; 
		int ancho; 
	public: 
		Rectangulo(); 
		int perimetro(); 
		int area(); 
};

Rectangulo::Rectangulo(){
	cout<<"Largo: "; 
	cin>>largo; 
	cout<<"Ancho: "; 
	cin>>ancho;  
}

int Rectangulo::area(){
	return largo * ancho; 
}

int Rectangulo::perimetro(){
	return 2*(largo+ancho); 
}

int main(){
	Rectangulo rect; //instancia de la clase rectangulo 
	Rectangulo rec4; 
	
	cout<<"El area del objeto 1 es: "<<rect.area()<<endl;
	cout<<"El perimetro del objeto 1 es: "<<rect.perimetro()<<endl; 
	
	return 0; 
}