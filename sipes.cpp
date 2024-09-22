#include <iostream>
#include <string>
using namespace std; 
struct Producto{
	string nombre; 
	string categoria; 
	int precio; 
};
void mostraregistro(Producto a[], int canti){
     for(int i=0; i<canti; i++){
     	cout<<"\nProducto: "<<a[i].nombre<<endl; 
     	cout<<"Categoria: "<<a[i].categoria<<endl; 
     	cout<<"Precio: "<<a[i].precio<<endl;
     	cout<<"_________________________________"<<endl; 
     	cout<<endl;
	 }
}
void ordenar(Producto a[], int canti){
	 Producto aux; 
	 
	 for(int i=0; i<canti-1; i++){
	 	for(int j=0; j<canti-1-i; j++){
	 		if(a[j].precio>a[j+1].precio){
	 			aux = a[j]; 
				a[j]= a[j+1]; 
				a[j+1] = aux; 			
			 }
		 }
	 }
	 
	 cout<<endl; 
	 for(int i=0; i<canti; i++){
     	cout<<"\nProducto: "<<a[i].nombre<<endl; 
     	cout<<"Categoria: "<<a[i].categoria<<endl; 
     	cout<<"Precio: "<<a[i].precio<<endl;
     	cout<<"_________________________________"<<endl; 
     	cout<<endl;
	 }
}

void insercionDirecta(Producto a[], int canti){
	 Producto aux; 
	 int k; 
	 
	 for(int i=1; i<canti; i++){
	 	aux = a[i];
	 	k = i-1;
	 	while((k>=0) && (aux.precio < a[k].precio)){
	 		a[k+1] = a[k]; 
			k--; 
		 }
		 a[k+1] = aux;
	 }
	 
	 cout<<endl; 
	 for(int i=0; i<canti; i++){
     	cout<<"\nProducto: "<<a[i].nombre<<endl; 
     	cout<<"Categoria: "<<a[i].categoria<<endl; 
     	cout<<"Precio: "<<a[i].precio<<endl;
     	cout<<"_________________________________"<<endl; 
     	cout<<endl;
	 }
	  
}

int main(){
	Producto prod[3]={
	{"Televisor", "Electrodomestico", 500},
	{"Computadora","Digital",2700},
	{"Licuadora", "Cocina", 120},	
	};
	
	int cant = 3; 
	
	int opcion; 
	
	do{
	
	cout<<"1) Mostrar el registro: "<<endl;
	cout<<"2) Mostrar precios segun orden: "<<endl;
	cout<<"3) Inserccion directa:  "<<endl; 
	cout<<"0) Salir. "<<endl; 
	cout<<"Digite la opcion: "; 
	cin>>opcion; 
	cout<<endl; 
	 
	 switch(opcion){
	 	case 1:{
	 		mostraregistro(prod, cant); 
			break;
		 } 
		 case 2:{
		 	ordenar(prod, cant);
			break;
		 }
		 case 3:{
		 	insercionDirecta(prod, cant); 
			break;
		 }
		 case 0:{
		 	
			break;
		 }
		 default: break; 
	 	
	 }
	
	}while(opcion != 0);
	
	return 0; 
}