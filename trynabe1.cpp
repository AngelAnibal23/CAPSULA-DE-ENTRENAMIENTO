#include <bits/stdc++.h>
using namespace std; 


int main(){
	int n; 
	
	srand(time(NULL)); 
	
	cout<<"Digite n: "; 
	cin>>n; 
	
	int a[n][n]; 
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			a[i][j] = 1 + rand()% 9;  
		}
	}	
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<a[i][j]<<" ";
		}
		cout<<endl; 
	}
	
	int dPrin = 0; 
	int dSec = 0; 
	
	for(int i=0; i<n; i++){
		dPrin += a[i][i]; 
		dSec += a[i][n-i-1];   
	}
	
	int suma = abs(dPrin - dSec); 
	
	cout<<"Resultado: "<<suma<<endl; 
	
	return 0; 
}