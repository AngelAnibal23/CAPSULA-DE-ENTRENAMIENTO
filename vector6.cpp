#include <iostream> 
#include <vector> 

using namespace std; 

int main(){
	
	vector<int> a={2,3,4,1,0,9}; 
	
	for(int val : a){
		cout<<val<<" "; 
	}
	cout<<endl; 
	
	cout<<a.size()<<endl; 
	
	a.resize(4); 
	
	cout<<endl; 
	for(int val : a){
		cout<<val<<" "; 
	}
	
	return 0; 
}