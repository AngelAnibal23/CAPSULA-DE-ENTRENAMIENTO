/*
Ejercicio: 
Función calcularRaices: Amplía el ejercicio anterior definiendo una función void llamada calcularRaices 
que reciba los coeficientes de la ecuación (a, b, c) por valor y las variables donde se almacenarán las raíces 
por referencia. Además, incluye una variable por referencia que indique si las raíces son reales o complejas. 
La función debe calcular las raíces utilizando la fórmula general y actualizar las 
variables correspondientes.
*/

#include <cmath> 
#include <iostream> 

using namespace std;  

void calcularRaices(int a, int b, int c, double& R1, double& R2, bool &oye, int discriminante){
	if(discriminante > 0){
		R1 = -b + sqrt(discriminante)/(2*a); 
	  	R2 = -b - sqrt(discriminante)/(2*a); 
	}
	else{
	    oye = false; 
	}	   
}


int main(){
	double a, b, c, X1, X2, discriminante; 
	bool confirma = true; 
	
	cout<<"Digite el valor de a: "; 
	cin>>a; 
	cout<<"Digite el valor de b: "; 
	cin>>b; 
	cout<<"Digite el valor de c: "; 
	cin>>c; 
	
	discriminante = sqrt(pow(b,2)-4*a*c); 
	
	calcularRaices(a, b, c, X1, X2, confirma, discriminante); 
	cout<<endl; 
	if(confirma == false){
		cout<<"\nLa ecuacion no tiene raices reales. "; 
	}
	else if (confirma == true){
		cout<<"\nLas raices de la ecuacion son: "<<"X1 = "<<X1<<". X2 = "<<X2<<endl;
	}
 
	
}