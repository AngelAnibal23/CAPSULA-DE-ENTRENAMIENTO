// crear un programa que capture notas de estudiantes, genere promedios y los ordene. 

#include <iostream> 
#include <string> 

using namespace std; 

struct Estudiante{
	char nombre[50]; 
	double nProd; 
	double nConoc; 
	double nDesemp; 
	double prom; 
};


int main(){
	char* nombres[]={
		"Angel Anibal",
		"Alessandro Flora", 
		"Esteban Espina", 
		"Joaka Narinzo",
		"Ludovico Tercero"	
	};
	
	Estudiante est; 
	
	int opcion; 
	
	do{
	   cout<<"\nDigite una de las siguientes opciones: "<<endl;
	   cout<<"1. Ingresar notas. "<<endl; 
	   cout<<"2. Ver notas. "<<endl; 
	   cout<<"3. Mostrar promedios, aprobados y no aprobados. "<<endl; 
	   cout<<"4. Mostrar promedios mas altos por orden descendente. "<<endl; 
	   cout<<"5. Mostrar promedios mas bajos por orden desecente. "<<endl;
	   cout<<"0. Salir. "<<endl;
	   cout<<"Opcion a elegir: ";
	   cin>>opcion;    
	   cout<<"\n";	
		
	   switch(opcion){
	   	 case 1:{
				break;
			}
		 case 2:{
		 	
			break;
		 }
		 case 3:{
		 	
			break;
		 }
		 case 4:{
		 	
			break;
		 }
		 case 5:{
		 	
			break;
		 }
	   }
		
	}while(opcion != 0); 
	
	
	return 0; 
}