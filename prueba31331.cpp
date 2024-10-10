#include <iostream> 
#include <string>
#include <windows.h>
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

void llenaregistro(Fecha fec[], Personal per[], int n){
	cout<<endl; 
	for(int i=0; i<n; i++){
		cout<<"\nDNI: ";
		cin.ignore(); 
		getline(cin, per[i].dni);
		cout<<"Nombre: ";
		getline(cin, per[i].nombres); 
		cout<<"Dia de nac: "; 
		cin>>fec[i].dia; 
		cout<<"Mes de nac: "; 
		cin>>fec[i].mes; 
		cout<<"Año: "; 
		cin>>fec[i].anho; 
		cout<<"........................"; 
		cout<<"\n"; 
	}
	cout<<endl; 
}

void mostraregistro(Fecha fec[], Personal per[], int n){
	cout<<endl; 
	for(int i=0; i<n; i++){
		cout<<"\nDNI: "<<per[i].dni<<endl;
		cout<<"Nombre: "<<per[i].nombres<<endl; 
		cout<<"Fecha de nacimiento: "<<fec[i].dia<<"/"<<fec[i].mes<<"/"<<fec[i].anho<<endl; 
		cout<<"..............................";
	}
}

int compararFechas(Fecha fa, Fecha fb) {
    if (fa.anho < fb.anho) {
        return -1;
    } else if (fa.anho > fb.anho) {
        return 1;
    } else { 
        if (fa.mes < fb.mes) {
            return -1;
        } else if (fa.mes > fb.mes) {
            return 1;
        } else { 
            if (fa.dia < fb.dia) {
                return -1;
            } else if (fa.dia > fb.dia) {
                return 1;
            } else {
                return 0; 
            }
        }
    }
}

void ordenarPorSeleccion(Fecha fec[], Personal per[], int n) {
	Fecha aux; 
	Personal aux2; 
	int P; 
	
    for (int i = 0; i < n - 1; i++) {
        int k = i;
        for (int j = i + 1; j < n; j++) {
        	P = compararFechas(fec[j], fec[k]); 
            if (P < 0) {
                k = j;
            }
        }
        // Intercambiamos el menor con el elemento en la posición i
        aux = fec[i];
        fec[i] = fec[k];
        fec[k] = aux;
        
        aux2 = per[i];
        per[i] = per[k];
        per[k] = aux2;
    }
}

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int n; 
	
	cout<<"Digite la cantidad de elementos de la estructura: "; 
	cin>>n; 
	
	Fecha fec[n]; 
	Personal per[n]; 

	llenaregistro(fec, per, n); 
	ordenarPorSeleccion(fec , per, n);
	
	cout<<"\nRegistro ordenado por fecha de nacimiento: "<<endl; 
	mostraregistro(fec, per, n);
	
	 	
	return 0; 
}
