/*
Crea un programa en C++ que modele una relación de herencia entre dos clases: Persona y Empleado. Sigue estas instrucciones:

Clase Persona:

Debe tener los atributos nombre (tipo string) y edad (tipo int), que representan el nombre y la edad de una persona.
Debe contar con un constructor que inicialice estos atributos.
Incluye un método presentarse que muestre el nombre y la edad de la persona en la consola.
Clase Empleado:

Esta clase debe heredar de Persona.
Debe tener los atributos adicionales salario (tipo float) y cargolaboral (tipo string), que representan el salario y el puesto laboral del empleado.
Incluye un constructor que inicialice tanto los atributos heredados como los propios.
Implementa un método presentarseempleado que muestre el salario y el cargo laboral en la consola.
En el método main:

Crea un objeto de tipo Empleado con valores específicos para los atributos (nombre, edad, salario y cargolaboral).
Llama a los métodos presentarse y presentarseempleado del objeto para mostrar toda la información del empleado en pantalla.

Mi nombre es: Sebastian  
Tengo: 18 años  
Mi salario es de: 1400  
Y trabajo como: Asistent
*/


#include <iostream>
using namespace std; 


class Persona{
	protected:
		string nombre; 
		int edad; 
	public: 
		Persona(){}
		Persona(string name, int age) : nombre(name), edad(age) {}
		void itselfPresent(){
			cout << "Mi nombre es: "<< nombre << endl;
			cout << "Tengo: " << edad << " anios " << endl; 
		}
};

class Empleado : public Persona{
	private: 
		float salario; 
		string cargo; 
	public: 
		Empleado(){}
		Empleado(string name, int age, float sueldo, string chamba) : Persona(name, age), salario(sueldo), cargo(chamba) {} 
		void trabajoPresent(){
			cout << "Mi salario es de: " << salario << endl; 
			cout << "Mi cargo laboral es: " << cargo << endl; 
		}
};


int main(){
	Empleado emp("Angel", 18, 60, "mozo"); 
	
	emp.itselfPresent(); 
	emp.trabajoPresent(); 
	
	
	return 0; 
}