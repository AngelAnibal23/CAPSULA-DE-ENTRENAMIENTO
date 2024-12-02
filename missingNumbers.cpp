#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long sumaEsperada = (long long)n * (n + 1) / 2;
    long long sumaReal = 0;
    
    for (int i = 0; i < n - 1; i++) {
        int num;
        cin >> num;
        sumaReal += num;
    }

    cout << sumaEsperada - sumaReal << endl;

    return 0;
}