#include <iostream>
#include <string>

using namespace std; 

struct Estudiante{
	string nombre; 
	int edad; 
	float promedio; 
};

int main(){
	Estudiante est; 
	
	cout<<"Ingrese el nombre del estudiante: "; 
	getline(cin, est.nombre); 
	
	cout<<"Ingrese la edad del estudiante: "; 
	cin>> est.edad;
	
	cout<<"Ingrese el promedio del estudiante: "; 
	cin>> est.promedio; 
	
 	cout<<"\nDatos del estudiante:\n";
	cout<<"Nombre: "<<est.nombre<<endl; 
	cout<<"Edad: "<<est.edad<<endl; 
	cout<<"Promedio: "<<est.promedio<<endl;  
	
	return 0; 
}

