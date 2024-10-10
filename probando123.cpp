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
}

void ordenaArt(int n, Articulo art[], int mon[]){
	Articulo aux; 
	int aux2; 
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n-1-i; j++){
			if(mon[j] < mon[j+1]){ 
				aux = art[j]; 
				art[j] = art[j+1]; 
				art[j+1] = aux; 
			
				aux2 = mon[j]; 
				mon[j] = mon[j+1]; 
				mon[j+1] = aux2; 
			}
		}
	}
}

int main(){
	int n; 
	
	cout<<"Digite la cantidad de elementos de la estructura: "; 
	cin>>n; 
	 
	Articulo art[n]; 
	
	int mon[n];
	
	llenarRegistro(n, art);
	
	for(int i=0; i<n; i++){
	    mon[i] = art[i].precio * art[i].cantidad;
	}
	
	ordenaArt(n, art, mon);  //Ordenacion por intercambio directo por la derecha 
	
	cout<<"\nOrden descendente segun monto de inversion: "<<endl; 
	mostrarRegistro(n, art);
	
	cout<<endl; 
	
	return 0; 
}
