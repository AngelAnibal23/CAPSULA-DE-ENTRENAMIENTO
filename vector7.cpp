#include <bits/stdc++.h>
 
using namespace std; 

int main(){
	int n = 10; 
	
	vector<int> a(n); 
	
	//generando el arreglo ale
	random_device rd; 
	mt19937 gen(rd()); 
	uniform_int_distribution<> dist(0,9); 
	
	//llenar el vector
	for(int& num :a){
		num = dist(gen); 
	}
	
	for(int val : a){
		cout<<val<<" "; 
	}
	
	
	
	return 0; 
	
}