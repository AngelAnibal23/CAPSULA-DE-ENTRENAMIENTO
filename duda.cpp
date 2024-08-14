#include <iostream>
using namespace std;
int main (){
	int hora, minuto, segundo;
	cout << "Ingrese la hora" << endl;
	cin >> hora;
	cout << "Ingrese los minutos: " << endl;
	cin >> minuto;
	cout << "Ingrese los segundos: " << endl;
	cin >> segundo;
	
	segundo = segundo +1;
	
	if (segundo == 60){
		segundo = 00;
		minuto = minuto +1;
		if (minuto == 60){
			minuto = 00;
			hora = hora + 1;
			if (hora == 24){
				hora = 00;
			}
		}
	}
	cout << "La hora un segundo despues es: " << hora << ":"<< minuto <<":"<< segundo << endl;
	return 0;
}