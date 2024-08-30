/*
Realice un programa que calcule la suma de dos matrices cuadradas de 3x3 
*/
#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std; 

int main(){
	int a[3][3], b[3][3]; 
	int c[3][3]; 
	
	srand(time(0)); 
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			a[i][j] = 1 + rand()% 9;
		}
	} 
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			b[i][j] = 1 + rand()% 9;
		}
	}
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	
	cout<<endl; 
	cout<<"Matriz A: "<<endl; 
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){ 
			cout<<a[i][j]<<" "; 
		}
		cout<<endl; 
	}
	cout<<endl; 
	
	cout<<endl; 
	cout<<"Matriz B: "<<endl; 
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){ 
			cout<<b[i][j]<<" "; 
		}
		cout<<endl; 
	}
	cout<<endl;
	
	cout<<endl; 
	cout<<"Suma de matrices: "<<endl; 
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){ 
			cout<<c[i][j]<<" "; 
		}
		cout<<endl; 
	}
	cout<<endl;
	
		
	return 0; 
}