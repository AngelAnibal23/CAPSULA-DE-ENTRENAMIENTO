#include <iostream>  
using namespace std; 

char* Ponermayusculas(char tuviejo[]){
	
	int n = 0; 
	
	while(tuviejo[n] != '\0'){
		n++; 
	}
	
	for(int  i =0 ; i<n; i++){
			tuviejo[i]=toupper(tuviejo[i]); 
	}
	
	
	return tuviejo; 
}

int main(){
	char miarray[]="hola a todos"; 
	cout<<Ponermayusculas(miarray); 
	
}