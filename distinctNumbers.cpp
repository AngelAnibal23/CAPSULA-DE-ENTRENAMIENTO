#include <bits/stdc++.h>
using namespace std; 

int main(){
	long int n; 
	cin>>n; 	
	vector<long int> a; 
	long int count = 1; 
	
	for(int i=0; i<n; i++){
		int num; 
		cin>>num; 
		a.push_back(num);  
	}
	
	sort(a.begin(), a.end()); 
	
	for(int i=1; i<n; i++){
		if(a[i] != a[i-1]) count++; 
	}
	
	cout<<count; 	
	
	return 0; 
}