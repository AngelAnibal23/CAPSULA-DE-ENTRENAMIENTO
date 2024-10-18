#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std; 

int busquedaBinaria(int a[], int n, int dato){
	int der=n-1; 
	int izq=0; 
	int m;  
	int pos; 
	int cen=-1;
	
	while((izq<=der) && cen ==-1){
		m = (der + izq)/2; 
		if(a[m] == dato){
			cen = 0; 
		}
		else{
			if(dato>a[m]){
				izq = m + 1; 
			}
			else{
				der = m - 1; 
			}
		}	
	}
	
	if(cen==0){
		pos = m; 
	}
	else{
		pos = -izq; 
	}
	
	return pos; 
}

int main(){
	srand(time(0)); 
	
	int n=20, a[n]; 
	
	for(int i=0; i<n; i++){
		a[i] = 10 + rand()% 30; 
	}
	
	cout<<endl;
	for(int i=0; i<n; i++){
		cout<<a[i]<<" "; 
	}
	cout<<endl; 
	
	int aux, k; 
	
	for(int i=1; i<n; i++){ 
		aux = a[i]; 
		k = i-1; 
		while((k>=0) && aux < a[k]){
			a[k+1] = a[k]; 
			k--; 
		}
		a[k+1] = aux; 
	}
	
	cout<<endl;
	for(int i=0; i<n; i++){
		cout<<a[i]<<" "; 
	}
	cout<<endl;
	
	int dato; 
	
	cout<<"Digite el dato: "; 
	cin>>dato; 
	
	int r; 
	r = busquedaBinaria(a, n, dato);  
	
	if(r>=0){
		cout<<"El numero: "<<dato<<" se encuentra en la posicion: "<<r<<endl; 
	}
	else{
		cout<<"El numero: "<<dato<<" no se encuentra en el arreglo. "<<endl;
		cout<<"Deberia ubicarse en la posicion: "<<-r<<endl;
	}
	
	return 0; 
}

