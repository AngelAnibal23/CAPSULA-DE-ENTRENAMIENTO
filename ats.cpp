#include <iostream> 
#include <string> 

using namespace std; 

class Persona{
	private: // datos miembro
		int edad; 
		string nombre; 
	public: // funciones miembro 
		Persona(int, string); //constructor
		void leer(); 
		void correr(); 
};

//Constructor, nos sirve para inicializar los datos 
Persona::Persona(int _edad, string _nombre){
	edad = _edad; 
	nombre = _nombre; 
}

void Persona::leer(){
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro y tengo "<<edad<<endl; 
}

void Persona::correr(){
	cout<<"Soy "<<nombre<<" y estoy corriendo una maraton y tengo "<<edad<<endl; 
}

int main(){
	Persona p1 = Persona(18, "Angel"); 
	Persona p2(19, "Maria"); 
	Persona p3(21, "Juan"); 
	
	p1.leer();
	 
	p2.correr();
	 
	p3.leer(); 
	p3.correr(); 
	
	return 0; 
}