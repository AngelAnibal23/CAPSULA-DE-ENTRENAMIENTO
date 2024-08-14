/*
1. Gestión de Contactos
Crear una estructura llamada contactoEmail que tenga las siguientes características: nombres completos,
sexo, edad, teléfono, email, nacionalidad
El programa debe constar de un menú que permita:
a) Agregar un contacto
b) Eliminar un contacto
c) Mostrar listado general de contactos registrados hasta ese momento.
d) Mostrar listado de contactos existentes, ordenado por servidor de correo de las cuentas (gmail.com,
outlook.com, yahoo.com, etc.)
e) Salir del programa
El programa debe mantenerse en ejecución continuamente hasta que usuario indique que desea salir del
mismo.
*/ 

#include <iostream> 
#include <string.h>
#include <cctype> 
#include <string>  

using namespace std; 
const int limiteContactos = 20; 

struct ContactoEmail{
	string nombres_completos; 
	string sexo; 
	int edad; 
	int telefono; 
	string email;   
	string nacionalidad; 	
};
 



void agregarContacto(int  &cantidadContactos, ContactoEmail cont[]){
	ContactoEmail contacto; 
	cout<<"Digite sus nombres: "; 
	cin.ignore(); 
	getline(cin, contacto.nombres_completos); 
	cout<<"Digite su sexo: "; 
	cin>>contacto.sexo; 
	cout<<"Digite su edad: "; 
	cin>>contacto.edad; 
	cout<<"Digite su numero celular: "; 
	cin>>contacto.telefono;  
	cout<<"Email: "; 
	cin>>contacto.email;  
	cout<<"Nacionalidad: "; 
	cin>>contacto.nacionalidad; 
	
	cont[cantidadContactos]=contacto; 
	cantidadContactos++; 
}

void eliminarContacto(int &cantidadContactos, ContactoEmail cont[], int indice){
	for(int i=indice; i<cantidadContactos-1; i++){
		cont[i]=cont[i+1]; 
	}
	cantidadContactos--;
}

void mostrarContactos(int cantidadContactos, ContactoEmail cont[]){
	for(int i=0;i<cantidadContactos; ++i ){
		cout<<"Contacto: "<<i+1<<"->"<<"INDICE: "<<i<<endl; 
		cout<<"Nombres: "<<cont[i].nombres_completos<<endl; 
		cout<<"Sexo: "<<cont[i].sexo<<endl; 
		cout<<"Edad: "<<cont[i].edad<<endl; 
		cout<<"Telefono: "<<cont[i].telefono<<endl;  
		cout<<"Email: "<<cont[i].email<<endl; 
		cout<<"Nacionalidad: "<<cont[i].nacionalidad<<endl; 
	}
}


void actualizarContacto(int cantidadContactos, ContactoEmail cont[], int indice){
	cout<<"Digite sus nombres: "; 
	cin.ignore(); 
	getline(cin, cont[indice].nombres_completos); 
	cout<<"Digite su sexo: "; 
	cin>>cont[indice].sexo; 
	cout<<"Digite su edad: "; 
	cin>>cont[indice].edad; 
	cout<<"Digite su numero celular: "; 
	cin>>cont[indice].telefono;  
	cout<<"Email: "; 
	cin>>cont[indice].email;  
	cout<<"Nacionalidad: "; 
	cin>>cont[indice].nacionalidad; 
}

int main(){
	int cantidadContactos = 0; 
	ContactoEmail cont[limiteContactos]; 
	int opcion; 
	
	
	do{

	cout<<"Menu: "<<endl; 
	cout<<"1. Agregar un contacto. "<<endl;
	cout<<"2. Eliminar un cotacto. "<<endl; 
	cout<<"3. Mostrar listado general de contactos registrados. "<<endl; 
	cout<<"4. Orden por servidor. "<<endl; 
	cout<<"5. Salir. "<<endl;  
	cout<<"Digite su respuesta: "; 
	cin>>opcion; 
	cout<<endl; 
	
	switch(opcion){
		case 1:{
			
			agregarContacto(cantidadContactos, cont); 
			break;
		}
		case 2: {
			int indice; 
			cout<<"Digite el indice del contacto a eliminar: "; 
			cin>>indice; 
			eliminarContacto(cantidadContactos, cont, indice); 
			break;
		}
		case 3: {
			mostrarContactos(cantidadContactos, cont); 
			break;
		}
		case 4: {
			cout<<"Digite el indice de contacto que actualizara: "; 
			int indice; 
			cin>>indice; 
			actualizarContacto(cantidadContactos, cont, indice); 
			break;
		}
		
	}
	
	
	}while(opcion != 5); 	
	
	return 0; 
}
 