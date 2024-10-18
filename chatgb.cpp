/*
Dado un arreglo ordenado de enteros, encontrar el índice de la primera 
aparición de un número x. Si el número no está presente, devuelve el índice 
en el cual debería 
insertarse para mantener el arreglo ordenado.
*/
#include <iostream> 
using namespace std; 

void ordenarArreglo(int a[], int n){
	int aux, k; 
	for(int i=1; i<n; i++){
		aux = a[i]; 
		k = i - 1; 
		while((k>=0) && aux < a[k]){
			a[k+1] = a[k]; 
			k--; 
		}
		a[k+1] = aux; 
	}
}


int busquedaBinaria(int a[], int n, int dato){
	int der = n-1; 
	int izq = 0; 
	int cen = -1; 
	int pos, m; 
	
	while((izq<=der) && cen==-1){
		m = (izq+der)/2; 
		if(a[m] == dato){
			cen=0; 
		}
		else{
			if(dato > a[m]){
				izq = m +1; 
			}
			else{
				der = m -1; 
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
	int n; 
	
	cout<<"Digite la cantidad de elementos que tendra el arreglo: "; 
	cin>>n; 
	
	int a[n]; 
	
	for(int i=0; i<n; i++){
		cout<<"Elemento "<<i+1<<" : "; 
		cin>>a[i]; 
	}
	
	ordenarArreglo(a,n);
	
	for(int i=0; i<n; i++){
		cout<<a[i]<<" "; 
	}
	
	int dato; 
	 
	cout<<"Digite el numero a buscar: "; 
	cin>>dato; 
	
	int A = busquedaBinaria(a,n, dato);
	 
	if(A >= 0){
		cout<<"El numero: "<<dato<<", se encuentra en la posicion: "<<A<<endl;
	} 
	else{
		cout<<"El numero: "<<dato<<", no se encuentra en el arreglo. "<<endl;
		cout<<"Deberia estar ubicado en la posicion: "<<-A<<endl; 
	}
	
	return 0; 
}