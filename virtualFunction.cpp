/*
Enunciado del Ejercicio

Crea un programa en C++ que modele una jerarquía de clases para diferentes tipos de impresoras, utilizando herencia y el concepto de clases abstractas. Sigue estas instrucciones:

Clase base Impresora:

Debe tener los atributos protegidos marca y serie (ambos de tipo string) para almacenar la marca y el número de serie de la impresora.
Define un método virtual puro arrancar() que retorne un valor entero (representando el tiempo de arranque en milisegundos).
Clases derivadas:

Crea dos clases derivadas de Impresora: ChorroTinta y Matricial.
Clase ChorroTinta:
Agrega un atributo protegido chorro (tipo float) que representa el tamaño del chorro de tinta.
Implementa el método arrancar() para devolver el valor 100 (como tiempo de arranque).
Clase Matricial:
Agrega un atributo protegido agujas (tipo int) que representa la cantidad de agujas de la impresora matricial.
Implementa el método arrancar() para devolver el valor 10 (como tiempo de arranque).
En el método main:

Crea un objeto de tipo Matricial y un objeto de tipo ChorroTinta.
Llama al método arrancar() de cada objeto y muestra el valor retornado en la consola.
*/

#include <iostream> 
using namespace std; 

class Impresora{
	protected:
		string marca, serie; 
	public: 
		Impresora() {}
		Impresora(string marca_, string serie_) : marca(marca_), serie(serie_) {}
		virtual int arrancar() = 0; 
}; 

class ChorroTinta : public Impresora{
	private: 
		float chorro; 
	public: 
		ChorroTinta() {}
		ChorroTinta(string m, string s, float choTin): Impresora(m, s), chorro(choTin) {}
	int arrancar(){
		return 100; 
	}
};

class Matricial : public Impresora {
	private: 
		int agujas;
	public: 
		Matricial() {}
		Matricial(string m, string s, int agu) : Impresora(m, s), agujas(agu) {}
		int arrancar(){
			return 10; 
		}
};


int main(){
	Matricial mat; 
	ChorroTinta ct; 
	
	cout << ct.arrancar() << endl; 
	cout << mat.arrancar(); 
	
	
	
	return 0; 
}