/*
 
*/
#include <iostream>
using namespace std; 
int main(){
	char letras[]={'a','b','c','d','e'}; 
	char letras2[]={'f','g','h','i','j'}; 
	char letras3[10];
		
	for(int i=0; i<5; i++){
		letras3[i]=letras[i]; 
		letras3[i+5]=letras2[i]; 
		if(i==4){
			letras3[i+6]=letras2[i]; 
		}
	}
	
	for(int i=0; i<10; i++){
		cout<<letras3[i]<<" "; 
	}
	
	return 0; 
}
