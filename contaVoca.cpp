/*
Escribe un programa que cuente elnumero de vocales en una palabra o frase.  
Entrada: una cadena
salida: La palabra..... tiene N vocales. 
*/

#include <bits/stdc++.h>
using namespace std; 

int main(){
	set<char> voc = {'a','e','i','o','u'};
	string cad;
	
	getline(cin, cad);  
	 
	int conta = 0; 
	
	for(char l : cad){
		if(voc.count(tolower(l)) > 0) conta++; 
	}
	
	cout<<conta; 
	
	return  0; 
}