/*
Construir una clase AHORRO capaz de ahorrar (indicando como parámetro la 
cantidad a ahorrar), retirar (indicando como parámetro la cantidad a retirar y 
devolviendo la cantidad que se pudo retirar) y mostrar_ahorro (para conocer el monto 
actual del ahorro). Utilizar en el constructor un parámetro que indique la cantidad 
inicial de ahorro, si el valor del parámetro es negativo,
 la alcancía iniciará con un ahorro inicial de 150 pesos.
*/
#include <iostream> 
using namespace std; 
 
class Ahorro{
	protected: 
	float monto; 
	public: 
	Ahorro(); 
	Ahorro(float); 
	void agregarAhorro(float); 
	void retirarAhorro(float);
	void mostrarAhorro();  
};
 

Ahorro::Ahorro(float monInic){
	if(monInic>0){
		monto = monInic; 
	}
	else{
		monto = 150.0; 
	}
}

void Ahorro::agregarAhorro(float cantAhorro){
	monto+=cantAhorro; 
}
 
void Ahorro::retirarAhorro(float cantRetiro){
	
	if(monto < cantRetiro){
		cout<<"\nNo tienes suficientes fondos. "<<endl; 
	}
	else{
		monto-=cantRetiro; 
		
		cout<<"\nHas retirado "<<cantRetiro<<" pesos. "<<endl; 
	}
	
}

void Ahorro::mostrarAhorro(){
	cout<<"\nAl momento tienes un ahorro de: $"<<monto<<" pesos. "<<endl; 
}

int main(){
	int opcion; 
	float dinero; 
	
	cout<<"Digite el monto inicial: ";  cin>>dinero; 
	
	Ahorro saving(dinero);  
	
	do{ 
		cout<<endl; 
		cout<<"					MENU DE AHORRO 				"<<endl; 
		cout<<"			[1]. Retirar monto.	 				"<<endl; 
		cout<<"			[2]. Agregar monto. 				"<<endl; 
		cout<<"			[3]. Mostrar monto ahorrado. 		"<<endl;
		cout<<"			[0]. Salir. 						"<<endl;  
		cout<<"		Digite la opcion: 						"; cin>>opcion;
		
		switch(opcion){
			case 1:{
				cout<<"Monto: "; cin>>dinero; 
				saving.retirarAhorro(dinero); 
				break;
			}
			case 2:{
				cout<<"Monto: "; cin>>dinero; 
				saving.agregarAhorro(dinero); 
				break;
			}
			case 3:{
				saving.mostrarAhorro(); 
				break;
			}
		}
		
	}while(opcion != 0); 
	
	return 0; 
}
