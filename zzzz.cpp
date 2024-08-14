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

void calcularMatrizCofactores(double matriz[3][3], double cofactores[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cofactores[i][j] = obtenerCofactor(matriz, i, j);
        }
    }
}

void transponerMatriz(double matriz[3][3], double transpuesta[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            transpuesta[i][j] = matriz[j][i];
        }
    }
}

void imprimirMatriz(double matriz[3][3]){
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}



int main(){
	int det; 
    double matriz[3][3] = {
        {1, 2, 3},
        {-2, 5, 3},
        {1, 0, 8}
    };

    double cofactores[3][3];
    double adjunta[3][3];
    double inversa[3][3]; 
    
    calcularMatrizCofactores(matriz, cofactores);
    transponerMatriz(cofactores, adjunta);
    det = determinanteOrden3(matriz); 
    
    cout << "Adjunta de la matriz 3x3:" << endl;
    imprimirMatriz(adjunta);
    
    if(det==0){
       cout<<"La inversa de la matriz no existe. "; 
	}
	else{
	for(int i=0; i<3; i++){
    	for(int j=0; j<3; j++){
    		inversa[i][j]=adjunta[i][j]/det; 
		}
	}
	}
    
    cout<<endl; 
    
    cout<< "Inversa de la matriz:  "<<endl; 
    imprimirMatriz(inversa); 
    
    return 0; 
}
