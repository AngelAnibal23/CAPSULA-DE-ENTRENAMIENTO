#include <iostream> 
#include <vector> 

using namespace std; 

int main(){
	vector<int> a; 
	
	a.push_back(5); 
	a.push_back(6); 
	a.push_back(1); 
	
	cout<<"Elementos en el vector: "; 
	for(int val : a){
		cout<<val<<" ";  
	}
	cout<<endl; 
	
	cout<<"Size del vector : "<<a.size()<<endl; 
	
	cout<<"Primer elemento: "<<a[0]<<endl;
	
	a.pop_back(); 
	
	cout<<"Tamaño despues de eliminar el ultimo elemento del vector: "<<a.size();  
	
	return 0; 
}