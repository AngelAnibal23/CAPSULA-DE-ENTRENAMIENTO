#include <iostream>
#include <string>
using namespace std; 

struct Articulo{
	string codigo; 
	int precio; 
	int cantidad;
	int montoInve;  
};

void llenarRegistro(int n, Articulo art[]){
	for(int i=0; i<n; i++){
		cout<<"\nArticulo"<<i+1<<" :"<<endl; 
		cout<<"Digite el codigo del articulo: ";
		cin.ignore();
		getline(cin, art[i].codigo); 
		cout<<"Digite el precio del articulo: "; 
		cin>>art[i].precio;
		cout<<"Digite la cantidad de el articulo: "; 
		cin>>art[i].cantidad;  
		cout<<"___________________________\n";
		
		art[i].montoInve = art[i].precio * art[i].cantidad;
		
	}
}

void mostrarRegistro(int n, Articulo a[]){
	for(int i=0; i<n; i++){
		cout<<"\nArticulo "<<i+1<<": "; 
		cout<<"Codigo: "<<a[i].codigo<<endl;
		cout<<"Precio: "<<a[i].precio<<endl; 
		cout<<"Cantidad: "<<a[i].cantidad<<endl;
		cout<<"Monto de inversion: "<<a[i].montoInve<<endl;  
		cout<<"___________________________________\n";
	}  
	cout<<endl; 
}

int main(){
	int n; 
	
	cout<<"Digite la cantidad de elementos de la estructura: "; 
	cin>>n; 
	 
	Articulo art[n]; 
	
	llenarRegistro(n, art);
	
	Articulo aux; 
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1-i; j++){
			if(art[j].montoInve < art[j+1].montoInve){
				aux = art[j]; 
				art[j] = art[j+1]; 
				art[j+1] = aux; 
			}
		}
	}
	
	cout<<"\nOrden descendente segun monto de inversion: "<<endl; 
	mostrarRegistro(n, art);
	
	cout<<endl; 
	
	return 0; 
}