/*
Escribe un programa que cuente elnumero de vocales en una palabra o frase.  
Entrada: una cadena
salida: La palabra..... tiene N vocales. 
*/

#include <bits/stdc++.h>
using namespace std; 

int main(){
	vector<char> voc = {'a','A','e','E','i','I','o','O','u','U'};
	string cad;
	
	getline(cin, cad);  
	
	vector<char> conver(cad.begin(), cad.end());
	
	int n = cad.length(); 
	int conta; 
	
	if(conver.size() > voc.size()){
		for(int i = 0; i<conver.size(); i++){
		conta += count(conver.begin(), conver.end(), voc[i]); 
	}
	}
	else{
		for(int i = 0; i<voc.size(); i++){
		conta += count(conver.begin(), conver.end(), voc[i]); 
	}
	}
	
	cout<<conta; 
	
	return  0; 
}