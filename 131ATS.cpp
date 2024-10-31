//Destructores. 

#include <iostream> 
#include <string>
using namespace std; 

class Perro{
	private: 
		string nombre, raza; 
	public: 
		Perro(string, string); //constructor 
		~Perro(); //Destructor 
		void mostrarDatos(); 
		void jugar(); 		
};

//Constructor 

Perro::Perro(string _nombre, string _raza){
	nombre = _nombre; 
	raza = _raza; 
}

//Destructor 
Perro::~Perro(){
}


void Perro::mostrarDatos(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Raza: "<<raza<<endl; 
}

void Perro::jugar(){
	cout<<"El perro: "<<nombre<<" esta jugando. "<<endl;
}

int main(){
	Perro prro1("Toby","Shitzu"); 	
	
	prro1.mostrarDatos(); 
	prro1.jugar(); 
	prro1.~Perro();   //destructor 
	
	return 0; 
}