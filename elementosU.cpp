/*
Ejercicio: "Contar Elementos unicos en una Lista"

Descripción: Escribe un programa que reciba una lista de números y devuelva la cantidad de elementos únicos.
Entrada: Una lista de números (puede incluir duplicados).
Salida: Imprime la cantidad de elementos únicos en la lista.
Pista: Usa conjuntos (sets) para eliminar duplicados de forma rápida.

Ejemplo:
Entrada: [1, 2, 2, 3, 4, 4, 4, 5]
Salida: "La lista tiene 5 elementos únicos"
*/

#include <bits/stdc++.h> 
using namespace std; 

int main(){
	vector<int> num={10, 20, 10, 30, 40, 50, 20, 60, 70, 80, 90, 100, 30};
	
	set<int> unicos(num.begin(), num.end());  
	
	a = unicos; 
	
	cout<<a.size(); 
	
	
	return 0; 
}