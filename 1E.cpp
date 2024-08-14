/*

Ejercicio 1E:
Leer un conjunto de N notas y obtener cuál en el porcentaje de aprobados, desaprobados
y la nota promedio.

*/

#include <iostream>
using namespace std; 
int main(){
	
	int n, contA=0, contD=0; 
	
	cout<<"Digite la cantidad de notas que va ingresar: "; 
	cin>>n; 
	
	float a[n]; 
	
	for(int i=0; i<n; i++){
	   cout<<"Nota "<<i+1<<":"; 
	   cin>>a[i]; 
	}
	
	for(int i=0; i<n; i++){
		if(a[i]>=10.5){
			contA++; 
		}
		else{
			contD++; 
		}
	}
	
	if(n>0){
	double  aprobados, desaprobados; 
	double notaProm, suma = 0; 
	
	aprobados = (contA/n)*100; 
	desaprobados = (contD/n)*100; 
	
	for(int i=0; i<n; i++){
		suma+=a[i]; 
	}
	
	 notaProm = suma/n;   
	 
	cout<<"\nPorcentaje de aprobados: "<<aprobados<<"%"<<endl; 
	cout<<"Porcentaje de desaprobados: "<<desaprobados<<"%"<<endl; 
	cout<<"Nota promedio: "<<notaProm<<endl; 
	 
	}
	
	
	
	
	
	return 0; 
}