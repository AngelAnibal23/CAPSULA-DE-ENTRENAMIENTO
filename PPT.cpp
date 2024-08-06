/*
6.
Juego de Piedra, Papel y Tijeras: 
Desarrolla un programa que simule el juego de piedra, papel y tijeras contra 
la computadora. El usuario elegirá su jugada (piedra, papel o tijeras) y la computadora 
generará su jugada de forma aleatoria. El programa determinará el ganador de cada ronda según las 
reglas del juego. El juego continuará hasta que el usuario o la computadora gane 3 rondas. 
Muestra el resultado final indicando el ganador del juego.
*/ 

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std; 
int main(){
	int computadora, humano; 
	int ganador = 0, conthumano = 0, contComputadora = 0;  
	
	srand(time(NULL)); 	
	
	do{
	   
	   if(conthumano == 3 || contComputadora == 3){
	  		ganador=3; 
		}
		
	  computadora = 1 + rand()% 3;  
	  
	  cout<<endl; 
	  cout<<"1) Piedra "<<endl; 
	  cout<<"2) Papel " <<endl; 
	  cout<<"3) Tijera "<<endl; 
	  cout<<"Digite su arma: ";
	  cin>>humano; 
	  
	  if(humano == 1 && computadora == 3){
	  	cout<<"La computadora eligio: "<<computadora<<endl; 
	  	cout<<"YOU WIN! "<<endl; 
	  	conthumano++; 
	  	ganador++;
	  }
	  else if( humano == 2 && computadora == 1){
	  	cout<<"La computadora eligio: "<<computadora<<endl; 
	  	cout<<"YOU WIN! "<<endl; 
	  	conthumano++; 
	  	ganador++;
	  }
	  else if( humano == 3 && computadora == 2){
	  	cout<<"La computadora eligio: "<<computadora<<endl; 
	  	cout<<"YOU WIN! "<<endl; 
	  	conthumano++; 
	  	ganador++;
	  }
	  else if( humano == computadora){
	  	cout<<"La computadora eligio: "<<computadora<<endl; 
	  	cout<<"EMPATE "<<endl; 
	  }
	  else{
	  	cout<<"La computadora eligio: "<<computadora<<endl; 	
	  	cout<<"Computadora gano "<<endl; 
	  	contComputadora++; 
	  	ganador++; 
	  }
	  	  

	}while(ganador != 3); 
	
	cout<<endl; 
	if(conthumano == 3){
		cout<<"GANASTE"<<endl; 
	}
	else{
		cout<<"LA COMPUTADORA GANO. "<<endl; 
	}
	
	
	return 0; 
}