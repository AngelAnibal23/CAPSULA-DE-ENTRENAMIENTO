#include <iostream> 
using namespace std; 

int fibonaci(int); 

int main(){
	int n;
	 
	cout<<"Digite el termino de la sucesion que desea obtener: "; 
	cin>>n; 
	
	cout<<"\nEl termino de la sucesion de fibonacci es : "<<fibonaci(n);
	
	return 0; 
}
 
int fibonaci(int p){
	if(p==0 || p==1){
		return p; 
	}
	else{
		return fibonaci(p-1)+fibonaci(p-2); 
	}
}