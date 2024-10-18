/*
Escribir un procedimiento recursivo que calcule zxv, mediante sumas sucesivas, con z y v enteros
*/

#include <iostream> 
using namespace std; 

int multi(int a, int b){
	if(b==1){
		return a; 
	}
	else{
		return a + multi(a,b-1);
	}
}

int main(){
	int a, b; 
	
	cout<<"Digite los 2 numeros a multiplicar: "; 
	cin>>a>>b; 
	
	cout<<"El resultado de la suma sucesiva es: "<<multi(a,b)<<endl;
	
	
	
	return 0; 
}