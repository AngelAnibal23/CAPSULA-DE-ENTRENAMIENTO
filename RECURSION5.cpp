#include <iostream> 
using namespace std; 

int combinatoria(int, int); 

int main(){
	int n, k; 
	
	cout<<"Digite las 2 componentes de la combinatoria: "; 
	cin>>n>>k; 
	
	cout<<endl; 
	cout<<"El resultado de la combinatoria es: "<<combinatoria(n,k)<<endl; 
	
	return 0; 
}

int combinatoria(int x, int y){
	if(x==y){
		return 1; 
	}
	else if(y==1){
		return x; 
	}
	else{
		return combinatoria(x-1,y-1) + combinatoria(x-1,y); 
	}
}