/*
ejercicio.cpp
Para una empresa es importante controlar los datos de las personas relacionadas a ella, 
como lo son sus clientes y sus empleados. Los datos de cada persona son el nombre y su 
domicilio; sin embargo, también es importante administrar en sus clientes el nivel socioeconómico
 (A,B,C,D o E) y el límite de crédito; y para sus empleados su nivel (analista, cajero, ejecutivo o gerente) 
 y salario. Modele este sistema estableciendo relaciones de herencia y agregando los atributos o métodos que
  sean pertinentes. Agregue un constructor con parámetros a cada clase para inicializar sus datos e invoque el 
  constructor de la clase base desde el constructor de cada clase derivada.

Cree varias instancias de la clase Empleado (en un arreglo) y muéstrelos en la pantalla. 
Finalmente deben escribirse los datos de los empleados ordenados por descendentemente por salario en el fichero empleados.txt 

*/

#include <iostream> 
#include <fstream>
#include <string>
#include <vector>
using namespace std; 

class Persona{
	protected: 
		string nombre; 
		string domicilio; 
	public: 
		Persona() {} 
		Persona(string name, string adress) : nombre(name), domicilio(adress){}
		virtual void presentacion() = 0; 
};


class Cliente : public Persona{
	private: 
		string nivelSE; 
		float limiteCred; 
	public: 
		Cliente() {}
		Cliente(string n, string a, string NE, float LC) : Persona(n,a) , nivelSE(NE), limiteCred(LC) {} 
		
};


class Empleado : public Persona{
	private: 
		float salario; 
		string nivel; 
	public: 
		Empleado() {}
		Empleado(string n, string a, float sueldo, string cargo) : Persona(n,a) , salario(sueldo), nivel(cargo) {}
		string getNombre() {
			return nombre; 
		}
		string getDirecion(){
			return domicilio;
		}
		float getSueldo(){
		
			return salario; 
		}
		void presentacion(){
			cout << "Nombre: " << nombre << endl; 
			cout << "Direccion: " << domicilio << endl; 
			cout << "Salario: " << salario << endl; 
			cout << "Nivel: " << nivel << endl;  
			cout << endl; 
		}	
};

int main(){
	ofstream archivo("empleados.txt"); 
	
	Empleado n1("Roberto", "Ciudad Nueva", 1000.30, "analista"); 
	Empleado n2("Alexander", "GAL", 900.30, "ejecutivo"); 
	Empleado n3("Jose", "Cercado", 1025.30, "cajero"); 
	Empleado n4("Alexander", "GAL", 900.30, "ejecutivo"); 
	/*
	
	vector<Empleado> empleados = {Empleado n1("Roberto", "Ciudad Nueva", 1000.30, "analista"), 
	Empleado n2("Alexander", "GAL", 900.30, "ejecutivo"), 
	 Empleado n3("Jose", "Cercado", 1025.30, "cajero"),
	 Empleado n4("Alexander", "GAL", 900.30, "ejecutivo")}
	
	*/	

	n1.presentacion(); 
	n2.presentacion(); 
	n3.presentacion(); 
	n4.presentacion(); 
	
	
	vector<Empleado> empleados = {n1,n2,n3,n4};
	Empleado aux; 						    	
	
	/*
	
	for(int i=0; i<empleados.size(); i++){
		for(int j=0; j<empleados.size(); j++){
			if(n1. < empleados[i+1]){
				aux = empleados[i+1]; 
				empleados[i+1] = empleados[i]; 
				empleados[i] = aux; 
				
			}
		}
	}
	
	*/
	archivo << n1.getSueldo() << endl; 
	
	//archivo.close(); 
	
	return 0; 
}