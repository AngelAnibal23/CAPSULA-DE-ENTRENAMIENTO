/*
Correspondencia entre arrreglos y punteros. 
*/

#include <iostream>
using namespace std; 
int main(){
	int a[]={1,2,3,4,5}; 
	int *p; 	
	
	p = a; 
	
	cout<<"Accediendo al array: "<<endl; 
	for(int i=0; i<5; i++){
		cout<<"elemento "<<"["<<i<<"]: "<<*p++<<endl;
	}
	cout<<endl; 
	
	
	cout<<"\nPosiciones de memoria de cada elemento del array: "<<endl; 
	for(int i=0; i<5; i++){
		cout<<"Direccion del elemento "<<"["<<i<<"]: "<<p++<<endl;
	}
	
	return 0; 
}