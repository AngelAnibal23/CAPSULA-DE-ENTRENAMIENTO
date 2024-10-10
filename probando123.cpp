#include <iostream>
#include <string>
using namespace std; 

struct Articulo{
	string codigo; 
	int precio; 
	int cantidad;
};

void llenarRegistro(int n, Articulo art[]){
	for(int i=0; i<n; i++){
		cout<<"\nArticulo "<<i+1<<" :"<<endl; 
		cout<<"Digite el codigo del articulo: ";
		cin.ignore();
		getline(cin, art[i].codigo); 
		cout<<"Digite el precio del articulo: "; 
		cin>>art[i].precio;
		cout<<"Digite la cantidad del articulo: "; 
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
	 
	Articulo art[n]; 
	
	llenarRegistro(n, art);
	
	Articulo aux; 
	
	int a2[n]; 
	
	// Calculamos el monto de inversión para cada artículo
	for(int i=0; i<n; i++){
	    a2[i] = art[i].precio * art[i].cantidad;
	}
	
	// Ordenamiento burbuja en orden descendente según el monto de inversión
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1-i; j++){
			if(a2[j] < a2[j+1]){ // Comparamos los montos de inversión
				// Intercambiamos los artículos en el arreglo art[]
				aux = art[j]; 
				art[j] = art[j+1]; 
				art[j+1] = aux; 
				
				// También intercambiamos los valores en el arreglo a2[]
				int temp = a2[j]; 
				a2[j] = a2[j+1]; 
				a2[j+1] = temp; 
			}
		}
	}
	
	cout<<"\nOrden descendente segun monto de inversion: "<<endl; 
	mostrarRegistro(n, art);
	
	cout<<endl; 
	
	return 0; 
}
