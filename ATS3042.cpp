#include <iostream>
#include <cstdlib>
#include <ctime> 

using namespace std; 

int main(){
	int a[3][3], b[3][3]; 
	int c[3][3]; 
	int suma = 0; 
	
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
			suma = suma + a[i][j] * b[j][i];
			c[i][j] = suma; 
		}
	}
	cout<<endl; 
	cout<<"Suma de matrices: "<<endl; 
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){ 
			cout<<a[i][j]<<" "; 
		}
		cout<<endl; 
	}
	cout<<endl;
	
	cout<<endl; 
	cout<<"Suma de matrices: "<<endl; 
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){ 
			cout<<b[i][j]<<" "; 
		}
		cout<<endl; 
	}
	cout<<endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl; 
	} 
	
	return 0; 
	
	}