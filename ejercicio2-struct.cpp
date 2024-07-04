#include <iostream>
#include <string>

using namespace std;

struct Producto{
	string nombre; 
	float precio; 
	int stock; 
};

int main(){
	const int tam=3; 
	Producto inventario[tam]; 
	
	for(int i=0; i<tam; i++){
		cout<<"Ingrese datos del producto "<<i+1<<": \n";
		cout<<"Nombre: "; 
		if(i>0) cin.ignore(); 
		getline(cin, inventario[i].nombre); 
		cout<<"Precio: "; 
		cin>>inventario[i].precio; 
		cout<<"Stock: ";
		cin>>inventario[i].stock;  
	}	
	
	cout << "\n Inventario : \n"; 
	for(int i=0; i<tam; i++){
		cout<<"Producto"<<i+1<<": \n"; 
		cout<<"Nombre: "<<inventario[i].nombre<<endl; 
		cout<<"Precio: $"<<inventario[i].precio<<endl; 
		cout<<"Stock: "<<inventario[i].stock<<endl<<endl; 
	}
	
	return 0; 
}
