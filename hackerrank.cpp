#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int a[4]={1,4,3,2}, b[4];
    
    for(int i=0; i<4; i++){
    	b[4-1-i]=a[i]; 
	}
    
    for(int i=0; i<4; i++){
    	cout<<b[i]<<" "; 
	}
      
    return 0;
}

