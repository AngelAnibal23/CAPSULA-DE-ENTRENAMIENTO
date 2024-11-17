#include <iostream> 
#include <vector> 
#include <algorithm>
#include <random>

using namespace std; 

int main(){
	vector<int> num = {1,2,3,4,5,6,7,8,90,29};  
	
	int dato; 
	
	cin>>dato; 
	int count = 0; 

	
	for(int i=0; i<num.size(); i++){ 
		for(int j=i+1; j<num.size(); j++){
			int sum = num[i] + num[j];
			if(sum == dato) count++;  
		}
	}
	
	cout<<count<<endl; 
	
	return 0; 
}