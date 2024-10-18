//ORDENAMIENTO POR IZQUIERDA 
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std; 

int main(){
	int n; 
	
	srand(time(0)); 
	
	cout<<"Digite la cantidad de elementos: "; 
	cin>>n; 
	
	int a[n]; 
	
	for(int i=0; i<n; i++){
		a[i] = 1 + rand()% 9; 
	}
	
	for(int i=0; i<n; i++){
		cout<<a[i]<<" "; 
	}
	
	int aux; 
	
	for(int i=0; i<n; i++){
		for(int j=n-1; i<j; j--){
			if(a[j] < a[j-1]){
				aux = a[j]; 
				a[j] = a[j-1]; 
				a[j-1] = aux; 
			}
		}
	}
	
	cout<<endl; 
	for(int i=0; i<n; i++){
		cout<<a[i]<<" "; 
	}
	
	int cont=0; 
	
	int j=0; 
		
	for (int i = 1; i < n; i++) {
        if (a[i] != a[j]) { // si el elemento actual es diferente al anterior
            j++;
            a[j] = a[i]; // copiamos el elemento
        }
    }
	
	cout<<endl; 
	for(int i=0; i<=j; i++){
		cout<<a[i]<<" "; 
	}
	
	
	return 0; 
}