#include <bits/stdc++.h>
using namespace std; 

int main(){
    string S;  

    getline(cin, S);  

    int l = S.length(); 
    
    for( int i = l-1; i >= 0 ; i--) cout<<S[i];  

    return 0; 
}
