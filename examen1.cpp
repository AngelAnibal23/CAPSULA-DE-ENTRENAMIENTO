/*
1. Gestión de Productos (8 puntos)
Crear una estructura llamada Producto que tenga las siguientes características: nombre, código,
precio, categoría, y stock. El programa debe constar de un menú que permita:
a) Mostrar listado general de productos registrados hasta ese momento.
b) Mostrar listado de productos existentes, ordenado por precio.
c) Salir del programa.
El programa debe mantenerse en ejecución continuamente hasta que el usuario indique que desea
salir del mismo.
Debe tener valores por defecto que tengan precios desordenados y al pulsar la opción b los ordene.
Utilice los siguientes productos ya predefinidos:
Producto productos[] = {
 {"Laptop", "A123", 1500.00, "Electrónica", 10},
 {"Teléfono", "B456", 800.00, "Electrónica", 20},
 {"Televisor", "C789", 1200.00, "Electrodomésticos", 5},
 {
*/

#include <iostream> 
#include <string>
using namespace std; 

struct Producto{
	string nombre; 
	string codigo; 
	double precio; 
	string categoria; 
	double stock; 
};

void mostrarGeneral(int cantidadProductos, Producto productos[]){
	 for(int i=0; i<cantidadProductos; ++i){
	 	cout<<"Producto: "<<i+1<<endl; 
	 	cout<<"Nombre: "<<productos[i].nombre<<endl;  
	 	cout<<"Codigo: "<<productos[i].codigo<<endl; 
	 	cout<<"Precio: "<<productos[i].precio<<endl; 
	 	cout<<"Categoria: "<<productos[i].categoria<<endl; 
	 	cout<<"Stock: "<<productos[i].stock<<endl;
	 	cout<<"--------------------------------"<<endl; 
		cout<<endl;  
	 }
}
/*
void ordenarporPrecios(int cantidadProductos, Producto productos[]){
  	
}	
*/
int main(){
	
	Producto productos[3]={{"Laptop", "A123", 1500.00, "Electronica", 10},
						   {"Telefono", "B456", 800.00, "Electronica", 20}, 
						   {"Televisor", "C789", 1200.00, "Electrodomesticos", 5}};
						   

	int cantProductos = 3; 

	char opcion; 
	
	do{
		cout<<"Menu de gestion de productos: "<<endl; 
		cout<<"a) Mostrar listado general de productos registrados hasta ese momento."<<endl; 
		cout<<"b) Mostrar listado de productos existentes, ordenado por precio."<<endl; 
		cout<<"c) Salir del programa. "<<endl; 
		cout<<"Digite su opcion: "; 
		cin>>opcion; 
		
		switch(opcion){
			case 'a':{
				 mostrarGeneral(cantProductos, productos); 
				
				break;
			}
			case 'b': { 
				
				 	double aux, aux2; 
		string aux3, aux4, aux5;
  	 	
		for(int i=0; i<cantProductos-1; i++){
  	 		for(int j=i+1; i<cantProductos; j++){
  	 			 if(productos[i].precio > productos[j].precio){
  	 			 	  		  aux = productos[i].precio;
							  productos[i].precio = productos[j].precio; 
							  productos[j].precio = aux;  
							  
							  aux3 = productos[i].nombre; 
							  productos[i].nombre = productos[j].nombre; 
							  productos[j].nombre = aux3; 
							  
							  aux4 = productos[i].codigo; 
							  productos[i].codigo = productos[j].codigo; 
							  productos[j].codigo = aux4; 
							  
							  aux5 = productos[i].categoria; 
							  productos[i].categoria = productos[j].categoria; 
							  productos[j].categoria = aux5; 
							  
							  aux2 = productos[i].stock;
							  productos[i].stock = productos[j].stock; 
							  productos[j].stock = aux2;	 	    
					}
			   }
		   }
		   
		for(int i=0; i<cantProductos; ++i){
	 	cout<<"\nProducto: "<<i+1<<endl; 
	 	cout<<"Nombre: "<<productos[i].nombre<<endl;  
	 	cout<<"Codigo: "<<productos[i].codigo<<endl; 
	 	cout<<"Precio: "<<productos[i].precio<<endl; 
	 	cout<<"Categoria: "<<productos[i].categoria<<endl; 
	 	cout<<"Stock: "<<productos[i].stock<<endl;
	 	cout<<"-----------------------------------"<<endl; 
		cout<<endl;  
	 }
			//	ordenarporPrecios(cantProductos, productos);  
				
				break; 
			}
		}
		 
	}while(opcion != 'c'); 
	
	return 0; 
}
