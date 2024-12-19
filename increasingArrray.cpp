#include <bits/stdc++.h>
using namespace std; 

int main(){
	long int n; 
	cin >> n; 
	vector<long int> a; 
	
	long int movments = 0; 
	
	for(int i=0; i<n; i++){
		int num; 
		cin>>num;
		a.push_back(num);  
	}
	
	long int subtraction;
	
	for(int i = 1; i < n; i++){
		if(a[i-1] > a[i]){
			subtraction = a[i-1] - a[i]; 
			movments += subtraction; 
			a[i] += subtraction;  
		}
	}
	
	cout << movments << endl; 
	
	return 0; 
}