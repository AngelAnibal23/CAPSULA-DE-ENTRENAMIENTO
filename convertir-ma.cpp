/*
1.
Convertir palabras a mayúsculas iniciales: 
"cáceres patrimonio de la humanidad" → "Cáceres Patrimonio De La Humanidad"
*/ 

#include <iostream> 
#include <string.h> 
#include <cctype>

using namespace std;  

int main(){
	char a[]="caceres patrimonio de la humanidad"; 
	char a1[100]; 
	
	for(int  i = 0; a[i] != '\0'; i++){
		if(i == 0 || a[i-1] == ' '){
			a1[i]=toupper(a[i]); 
		}
		else{
			a1[i]=a[i]; 
		}	
	}
		

	cout<<a1; 
	
	
	return 0; 
}