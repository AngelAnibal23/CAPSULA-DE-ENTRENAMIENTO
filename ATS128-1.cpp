/*
Construya una clase Tiempo que contenga los siguientes
atributos enteros. 
horas, minutos y segundos. Haga que la clase contenga
2 constructores, el primero debe tener 3 parametos enteros
y el segundo solo tendra un campo qyue sean los segundos
y desensamble e numero enterolargo en horas, minutos y segundos. 
*/

#include <iostream> 
using namespace std; 

class Tiempo{
	private: 
		int segundos, minutos, horas; 
	public: 
		Tiempo(int,int,int); //builder1
		Tiempo(long);  //builder 2 
		void showTime();  
}; 

Tiempo::Tiempo(int _seg, int _min, int _hor){
	segundos = _seg; 
	minutos = _min; 
	horas = _hor; 
}

Tiempo::Tiempo(long time){
	segundos = int((time%3600)%60); 
	minutos = int((time%3600)/60); 
	horas = int(time/3600); 
}

void Tiempo::showTime(){
	cout<<"El tiempo es: "<<horas<<":"<<minutos<<":"<<segundos+1<<endl; 
}


int main(){
	Tiempo t1(8,12,10); 
	Tiempo t2(36728);
	 
	t1.showTime(); 
	t2.showTime(); 
	
	
	return 0; 
}