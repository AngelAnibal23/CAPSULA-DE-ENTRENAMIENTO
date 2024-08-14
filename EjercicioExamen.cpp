/*
1 Ejercicio
realice un programa en donde se ingresen horas, minutos y segundos, el programa debe
determinar si la hora ingresada es valida, y debe dar como resultado la hora 1 segundo despues de la 
hora ingresada
horas valida  minutos validos segundos validos
0-23			00-59			00-59
ejemplo 
22:45:46 -> 22:45:47
23:59:59 -> 00:00:00
*/ 

#include <iostream>
using namespace std; 
int main(){
	int horas, minutos, segundos; 
	
	cout<<"Ingrese la hora: "; 
	cin>>horas; 
	cout<<"Ingrese los minutos: "; 
	cin>>minutos; 
	cout<<"Ingrese los segundos: "; 
	cin>>segundos; 
	
	if((horas>=0 && horas<=23) && (minutos>=0 && minutos<=59) && (segundos>=0 && segundos<=59)){
	  if(segundos != 59 && minutos !=59){
	  	cout<<"La hora es: "<<horas<<":"<<minutos<<":"<<segundos+1; 
	  }	
	  else if (segundos == 59 && minutos == 59){
	  	horas++;
		segundos = 0; 
		minutos = 0; 
		
		cout<<"La hora es: "<<horas<<":"<<minutos<<":"<<segundos;
	  }
	}
	else{
		cout<<"La hora ingresada no es valida. "; 
	}
	
	
	return 0; 
}