/*
3. Se tienen los siguientes atributos de personal: DNI, nombres, día, mes y año de nacimiento. 
Se pide ordenar por fecha de nacimiento. Sugerencia: Use dos registros (uno para personal y otro para fecha) 
y dos funciones (una para la ordenación por 
inserción directa y otra para la comparación de dos fechas). 
*/

#include <iostream> 
#include <string>
using namespace std; 

struct Personal{
	string dni; 
	string nombres;  
};

struct Fecha{
	int dia; 
	int mes; 
	int anho; 	
};

void llenaregistro(Fecha fe[], Personal per[], int n){
	cout<<endl; 
	for(int i=0; i<n; i++){
		cout<<"\nDNI: ";
		cin.ignore(); 
		getline(cin, per[i].dni);
		cout<<"Nombre: ";
		getline(cin, per[i].nombres); 
		cout<<"Dia de nac: "; 
		cin>>fe[i].dia; 
		cout<<"Mes de nac: "; 
		cin>>fe[i].mes; 
		cout<<"Anho: "; 
		cin>>fe[i].anho; 
		cout<<"........................"; 
		cout<<"\n"; 
	}
	cout<<endl; 
}

void mostraregistro(Fecha fe[], Personal per[], int n){
	cout<<endl; 
	for(int i=0; i<n; i++){
		cout<<"\nDNI: "<<per[i].dni<<endl;
		cout<<"Nombre: "<<per[i].nombres<<endl; 
		cout<<"Fecha de nacimiento: "<<fe[i].dia<<"/"<<fe[i].mes<<"/"<<fe[i].anho<<endl; 
		cout<<"..............................";
	}
}

int compararFechas(Fecha f1, Fecha f2) {
    if (f1.anho < f2.anho) {
        return -1;
    }
	else if (f1.anho > f2.anho) {
        return 1;
    } 
	else { 
        if (f1.mes < f2.mes) {
            return -1;
        } 
		else if (f1.mes > f2.mes) {
            return 1;
        } 
		else { 
            if (f1.dia < f2.dia) {
                return -1;
            } 
			else if (f1.dia > f2.dia) {
                return 1;
            } 
			else {
                return 0; 
            }
        }
    }
}

void ordenarPorFecha(Fecha fe[], Personal per[], int n) {
    for (int i = 1; i < n; i++) {
        Fecha aux = fe[i];
        Personal auxx = per[i];
        int j = i - 1;
        while (j >= 0 && compararFechas(fe[j], aux) > 0) {
            fe[j + 1] = fe[j];
            per[j + 1] = per[j];
            j--;
        }
        fe[j + 1] = aux;
        per[j + 1] = auxx;
    }
}

int main(){
	int n; 
	
	cout<<"Digite la cantidad de elementos de la estructura: "; 
	cin>>n; 
	
	Fecha fe[n]; 
	Personal per[n]; 
	
	int opcion; 
	
	do{
		cout<<"1. Llenar registro. "<<endl; 
		cout<<"2. Mostrar registro. "<<endl; 
		cout<<"3. Mostrar ordenado. "<<endl; 
		cout<<"Digite la opcion: "; 
		cin>>opcion; 
		
		switch(opcion){
			case 1:{
				llenaregistro(fe, per, n); 
				break;
			}
			case 2:{
				mostraregistro(fe, per, n); 
				break;
			}
			case 3:{
				ordenarPorFecha(fe , per, n);
				cout<<"\nRegistro ordenado por fecha de nacimiento: "<<endl; 
				mostraregistro(fe, per, n);
				break;
			}
		}
		
	}while(opcion != 0); 
	
	
	return 0; 
}