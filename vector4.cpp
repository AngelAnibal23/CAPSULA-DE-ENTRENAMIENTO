#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n; 
        
    cin>>n; 
    
    vector<int> a; 
    
    for(int i=0; i<n; ++i){
        int num;
        cin>>num;  
        a.push_back(num);
    } 
    
    int x; 
    
    cin>>x; 
    
    a.erase(a.begin()+x-1); 
    
    int start; 
    int end; 
    
    cin>>start; 
    cin>>end; 
    
    a.erase(a.begin()+start-1, a.begin()+end-1); 
        
    int size = a.size(); 
    
    cout<<size<<endl; 
    for(int val: a){
        cout<<val<<" "; 
    }

    return 0;
}
