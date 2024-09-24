// crear un programa que capture notas de estudiantes, genere promedios y los ordene. 

#include <iostream> 
#include <string> 

using namespace std; 

const int limitEstu = 50; 

struct Estudiante{
	char nombre[50]; 
	double nProd; 
	double nConoc; 
	double nDesemp; 
	double prom; 
};


void listarEstudiantes(Estudiante e[], int cant){
	for(int i=0; i<cant; i++){
		cout<<"Estudiante "<<i+1<<": "<<e[i].nombre<<endl;
	}
}

void ingresarNotas(Estudiante e[], int cant){
	 
	 for(int i=0; i<cant; i++){
	 	cout<<i+1<<". "<<e[i].nombre<<" :"<<endl; 
	 	cout<<"[30%]-Nota Producto: "; 
	 	cin>>e[i].nProd;  
	 	cout<<"[40%]-Nota Conocimiento: "; 
	 	cin>>e[i].nConoc; 
	 	cout<<"[30%]-Nota Desempenio: "; 
	 	cin>>e[i].nDesemp;
	 	cout<<"________________________"; 
	 	cout<<endl; 
	 } 
}

void promedioFinal(Estudiante e[], int cant){
	 for(int i=0; i<cant; i++){
	 	e[i].prom = (e[i].nProd * 0.3) + (e[i].nConoc * 0.4) + (e[i].nDesemp * 0.3); 
	 }
}

void listarNotas(Estudiante e[], int cant){
	 for(int i=0; i<cant; i++){
	 	cout<<"Estudiante "<<i+1<<": "<<e[i].nombre<<endl;
	 	cout<<"[30%]-Nota Producto: "<<e[i].nProd<<endl; 
	 	cout<<"[40%]-Nota Conocimiento: "<<e[i].nConoc<<endl; 
		cout<<"[30%]-Nota Desempenio: "<<e[i].nDesemp<<endl; 
		cout<<"PROMEDIO PARCIAL: "<<e[i].prom<<endl; 
		if(e[i].prom>=10.5){
			cout<<"Aprobado. "<<endl; 
		}
		else{
			cout<<"Desaprobado. "<<endl; 
		}
		cout<<"__________________________________________\n";
	 }
}

/*
void ordenarPromedios(Estudiante e[], int cant){
	Estudiante aux; 
	double k; 
	
	for(int i=0; i<cant; i++){
		aux = 
	}
}

*/

int main(){
	
	int cantEst = 5; 
	
	Estudiante est[limitEstu]={
		{"Angel Anibal"},
		{"Alessandro Flora"}, 
		{"Esteban Espina"}, 
		{"Joaka Narinzo"},
		{"Ludovico Tercero"}
		};
	
	int opcion; 
	
	do{
	   cout<<"\nDigite una de las siguientes opciones: "<<endl;
	   cout<<"1. Ingresar notas. "<<endl; 
	   cout<<"2. Ver notas. "<<endl; 
	   cout<<"3. Mostrar promedios mas altos por orden descendente. "<<endl; 
	   cout<<"4. Mostrar promedios mas bajos por orden desecente. "<<endl;
	   cout<<"0. Salir. "<<endl;
	   cout<<"Opcion a elegir: ";
	   cin>>opcion;    
	   cout<<"\n";	
		
	   switch(opcion){
	   	 case 1:{
	   	 	listarEstudiantes(est, cantEst);
	   	 	ingresarNotas(est, cantEst); 
	   	 	promedioFinal(est, cantEst); 
			break;
			}
		 case 2:{
		 	listarNotas(est, cantEst); 
			break;
		 }
		 case 3:{
		 	//ordenarPromedios(est, cantEst); 
			break;
		 }
		 case 4:{
		 	
			break;
		 }
		 default: break; 
		}
	}while(opcion != 0); 
	
	
	return 0; 
}