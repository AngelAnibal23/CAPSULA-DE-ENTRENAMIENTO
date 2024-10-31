#include <iostream> 
using namespace std; 

class Fecha{
	private: 
		int dia, mes, anio; 
	public:
		Fecha(int,int,int); //constructor1
		Fecha(long); //constructor2
		void showDate();  
}; 

Fecha::Fecha(int _dia, int _mes, int _anio){
	anio = _anio; 
	mes = _mes; 
	dia = _dia; 
}

Fecha::Fecha(long fecha){
	anio = int(fecha/10000);
	mes = int((fecha-anio*10000)/100); 
	dia = int(fecha-anio*10000-mes*100); 
	
}

void Fecha::showDate(){
	cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl; 
}



int main(){
	
	Fecha hoy(31,10,2024); 
	Fecha hoy2(20241031); 

	hoy.showDate(); 
	hoy2.showDate(); 
	
	return 0; 
}