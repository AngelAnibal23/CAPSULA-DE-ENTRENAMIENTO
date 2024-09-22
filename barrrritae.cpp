#include <iostream> 
using namespace std; 

void intercambioDerecha(int a[], int elementos){
	int aux; 
	for(int i=0; i<elementos-1; i++){
		for(int j=0; j<elementos-1-i; j++){
			if(a[j] > a[j+1]){
				aux = a[j];
				a[j] = a[j+1];
				a[j+1] = aux; 
			}
		}
	}
	
	cout<<"\nOrdenacion directa por la derecha: "; 
	for(int i=0; i<elementos; i++){
		cout<<a[i]<<" ";  
	} 
	cout<<endl; 
}

void intercambioIzquierda(int a[], int elementos){
	int aux;
	for (int i = 0; i<elementos-1; i++){
		for ( int j = elementos-1; j>i; j--){
			if (a[j] < a[j-1]){
				aux = a[j];
				a[j] = a[j-1];
				a[j-1] = aux;
			}
		}
	}
	
	cout<<"\nOrdenacion directa por la izquierda: "; 
	for(int i=0; i<elementos; i++){
		cout<<a[i]<<" ";  
	} 
	cout<<endl; 
	
}

void intercambioSenhal(int a[], int elementos ){
	int aux;
	bool sen;
	
	for ( int i = 0; i<elementos-1; i++ ){
		sen = false;
		
		for (int j=0; j<elementos-i-1; j++){
			if (a[j] > a[j+1]){
				
				aux = a[j];
				a[j] = a[j+1];
				a[j+1] = aux;
				sen = true;
			}
		}
		
		if (!sen){
			break;
		}
	}
	
	cout<<"\nOrdenacion por senhal: "; 
	for(int i=0; i<elementos; i++){
		cout<<a[i]<<" ";  
	} 
	cout<<endl; 
}

void intercambioBidi(int a[], int elementos ){
	int aux;
	int com =0;
	int ter = elementos-1;
	bool sen=true;
		
	while(sen){
		sen = false;
		
		for ( int i = com; i<ter; i++){
			if (a[i] > a[i+1]){
				aux = a[i];
				a[i] = a[i+1];
				a[i+1] = aux;
				sen = true;
				
			}
		}
		
		if (!sen)
			break;
			
		ter--;
		com = false;
		
		for (int i = ter; i>com; i--){
			if (a[i]<a[i-1]){
				aux = a[i];
				a[i] = a[i-1];
				a[i-1] = aux;
				sen=true;
				
			}
		}
		
		com++;
	}
	
	cout<<"\nOrdenacion bidireccional: "; 
	for(int i=0; i<elementos; i++){
		cout<<a[i]<<" ";  
	} 
	cout<<endl;
}

int main(){
	int n; 
	int opcion;
	cout<<"Digite cuantos elementos tendra el arreglo: "; 
	cin>>n; 

	int array[n];  

	for(int i=0; i<n; i++){
		cout<<"Digite el elemento ["<<i<<"]: "; 
		cin>>array[i];  
	} 
	

	cout<<"\nImprimiendo el arreglo: "; 
	for(int i=0; i<n; i++){
		cout<<array[i]<<" ";  
	} 
	cout<<endl; 
	
	do{
 
		
	cout<<"\nA continuacion se le muestran distitintos metodos de ordenacion :"<<endl; 
	cout<<"(1) Intercambio Directo por la derecha. "<<endl; 
	cout<<"(2) Intercambio directo por la izquierda. "<<endl; 
	cout<<"(3) Intercambio directo por senhal"<<endl; 
	cout<<"(4) Intercambio directo por bidireccional "<<endl;
	cout<<"(0) Salir."<<endl;  
	cout<<"Digite el metodo de ordenacion que desea realizar: "; 
	cin>>opcion; 
	cout<<endl; 
	
	switch(opcion){
		case 1: {
			intercambioDerecha(array, n); 
			break;
		}
		case 2: {
			intercambioIzquierda(array, n); 
			break;
		}
		case 3: {
			intercambioSenhal(array, n); 
			break;
		}
		
		case 4: {
			intercambioBidi(array, n); 
			break;
		}
		case 0:{
			cout<<"Saliendo del programa...."; 
			break;
		}
		default:{
			cout<<"Opcion invalida. "; 
			break;
		}
	}
		
	}while(opcion != 0); 
	
	return 0; 	
}