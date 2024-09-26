#include <iostream> 
using namespace std; 

struct Monomio{
	int coeficiente; 
	int exponente;
};

void llenarRegistro(int n, Monomio a[]){
	for(int i=0; i<n; i++){
		cout<<"\nPolinomio "<<i+1<<" :"<<endl; 
		cout<<"Digite el coeficiente: "; 
		cin>>a[i].coeficiente; 
		cout<<"Digite el exponenente: "; 
		cin>>a[i].exponente; 
		cout<<"___________________________\n";
	}
}

void mostrarPolinomio(int n, Monomio a[]){
	cout<<"\nP(x)=";
	for(int i=0; i<n; i++){
		cout<<a[i].coeficiente<<"x^"<<a[i].exponente;
		if (i < n-1) {
            cout<<"+";  
        }
	}  
	cout<<endl; 
}

void ordenaPolinomio(int n, Monomio a[]){
	Monomio aux; 
	for(int i=0; i<n-1; i++){
		for(int j= n-1 ; j>i; j--){
			if(a[j].exponente > a[j-1].exponente){
				aux = a[j];
				a[j] = a[j-1]; 
				a[j-1] = aux; 
			}
		}
	}
}

int main(){
	int n; 
	
	cout<<"Digite la cantidad de elementos de el registro: "; 
	cin>>n; 
	
	Monomio mon[n]; 
	
	llenarRegistro(n, mon);	
	
	mostrarPolinomio(n,mon);
	
	ordenaPolinomio(n,mon);
	
	mostrarPolinomio(n,mon);
	
	return 0; 
}