#include <cmath>
#include <cstdio>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v; 
    int n; // Variable para almacenar la cantidad de numeros

    cin >> n; 

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num; 
        v.push_back(num); // Agregar el numero ingresado al vector
    }

    sort(v.begin(), v.end()); // Ordenar el vector

    for (int val : v) {
        cout << val << " "; 
    }  
    cout << endl; // Aadir un salto de linea al final

    return 0;
}