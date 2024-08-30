#include <iostream> 
#include <cstdlib> 
#include <ctime>
using namespace std; 

int main(){
	srand(time(0));  
	
	float a[5][5]; 
	
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			a[i][j] = 1 + rand()%9;  
		}
	}
	
	cout<<"Matriz generada: "<<endl<<endl;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cout<<a[i][j]<<" "; 
		}
		cout<<endl; 
	}
	int cont = 0; 
	int suma=0, suma1=0; 
	
	do{
		
		for(int i=0; i<5; i++){
			for(int j=0; j<5; j++){
				suma=suma+a[i][j]; 
			}
		}
		
		suma1=suma1+suma; 
		
		cout<<suma1<<" ";
	
		cont++; 
	}while(cont <= 5); 
	
	
	
	return 0; 
}