#include <bits/stdc++.h>
using namespace std; 

bool what(long int u){
	bool a; 
	if(u%2==0){
		a = true;
	}
	else{
		a = false; 
	}
	
	return a; 
}

int main(){
	long int u; 
	cin>>u;  
	vector<long int> a; 
	
	cout<<u<<" "; 
	while(u != 1){
		 if(what(u)) u = u/2; 
		 else u = (u*3)+1; 
		 a.push_back(u); 
 	}
	
	for(auto val: a){
		cout<<val<<" ";
	}
	
	return 0; 
}