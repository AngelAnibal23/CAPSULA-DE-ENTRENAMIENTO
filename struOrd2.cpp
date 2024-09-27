#include <iostream>
#include <string>
using namespace std; 

struct Articulo{
	string codigo; 
	float precio; 
	int cantidad; 
};

void llenarRegistro(int n, Articulo art[]){
	for(int i=0; i<n; i++){
		cout<<"\nPolinomio "<<i+1<<" :"<<endl; 
		cout<<"Digite el codigo del articulo: "; 
		cin.ignore();
		getline(cin, art[i].codigo); 
		cout<<"Digite el precio del articulo: "; 
		cin>>art[i].precio;
		cout<<"Digite la cantidad de el articulo: "; 
		cin>>art[i].cantidad;  
		cout<<"___________________________\n";
	}
}

void mostrarRegistro(int n, Articulo a[]){
	for(int i=0; i<n; i++){
		cout<<"\nArticulo "<<i+1<<": "; 
		cout<<"Codigo: "<<a[i].codigo<<endl;
		cout<<"Precio: "<<a[i].precio<<endl; 
		cout<<"Cantidad: "<<a[i].cantidad<<endl; 
		cout<<"___________________________________\n";
	}  
	cout<<endl; 
}

int main(){
	int n; 
	
	cout<<"Digite la cantidad de elementos de la estructura: "; 
	cin>>n; 
	
	int montoInve[n]; 
	Articulo art[n]; 
	
	llenarRegistro(n, art);
	mostrarRegistro(n, art);
	
	return 0; 
}