//crear un programa que cuente la cantidad de digitos 
//de un numero ingresado por la consola 

#include <bits/stdc++.h>
using namespace std; 

int main(){
	int  num; 
	int cont = 0; 
	
	cout<<"Ingrese un numero: "; 
	cin>>num; 
	
	num = abs(num); 
	
	if(num==0){
		cont = 1; 
	}
	else{
		for(int i=0; num>0; i++){
		num = num/10; 
		cont++;
		}
	}

	cout<<"\nLa cantidad de digitos es: "<<cont<<endl; 
	
	
	return 0; 
}