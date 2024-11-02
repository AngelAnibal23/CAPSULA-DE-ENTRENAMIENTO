#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n; 
    
    cin>>n; 
       
    vector<int> arr; 
       
    for(int i=0; i<n; i++){
        int num; 
        cin>>num; 
        arr.push_back(num); 
    }
    
    int q; 
    
    cin>>q; 
    
     while (q--) {
        int query;
        cin >> query; // Leer cada consulta

        // Usar lower_bound para encontrar el primer elemento no menor que query
        auto lb = lower_bound(arr.begin(), arr.end(), query);

        // Calcular el indice
        int index = distance(arr.begin(), lb); // indice del lower_bound

        // Verificar si el elemento esta presente
        if (lb != arr.end() && *lb == query) {
            cout << "Yes " << index + 1 << endl; // +1 para idice 1-based
        } else {
            cout << "No " << index + 1 << endl; // +1 para indice 1-based
        }
    }

    
    return 0;
}
