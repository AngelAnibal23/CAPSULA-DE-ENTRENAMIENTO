#include <iostream>
#include <cmath>
using namespace std; 

double determinanteOrden2(double matriz[2][2]){
	return matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0]; 
}

double obtenerMenorComplementario(double matriz[3][3], int fila, int columna){
	double menor[2][2]; 
	int mFila=0, mColumna =0; 
	
	for(int i=0; i<3; i++){
		if(i != fila){
		  for(int j=0; j<3; j++){
		  	if(j!=columna){
		  		menor[mFila][mColumna] = matriz[i][j]; 
		  		mColumna++; 
			  }
		  }
		  mFila++; 
		  mColumna=0; 
		}
	}
	return determinanteOrden2(menor);
}

double obtenerCofactor(double matriz[3][3], int fila, int columna){
	double menorComplementario = obtenerMenorComplementario(matriz, fila, columna); 
	return pow(-1, fila+columna)*menorComplementario;     
}

double determinanteOrden3(double matriz[3][3]){
	double determinante = 0; 
	
	for(int j=0; j<3; j++){
		determinante+=matriz[0][j] * obtenerCofactor(matriz,0,j); 
	}
	
	return determinante; 
}



int main(){
	double matriz[3][3]= {
	{1,2,3},
	{4,5,6},
	{7,8,9}
}; 
	
    cout<<"Determinante de la matriz 3x3: "<<determinanteOrden3(matriz)<<endl; 
	
	return 0; 
}