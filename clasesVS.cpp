#include <iostream> 
#include <string>
#include <vector>
using namespace std; 

int main(){
    int queri, count = 0; 

    cin>>queri; 

    vector<int> a={3,4,6,2,1,6,8,3,9}; 

    int  n = a.size(); 

    for(auto val: a){
        cout<<val<<" "; 
    }
    cout<<endl; 

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int sum=0;
            sum = a[i] + a[j]; 
            if(sum == queri) count++; 
        }
    }

    cout<<endl; 
    cout<<"Contador: "<<count<<endl; 

    return 0;
}
