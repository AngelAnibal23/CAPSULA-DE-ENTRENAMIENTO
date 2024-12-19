#include <bits/stdc++.h>
using namespace std; 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        bool possible = true;
        
        if ((a + b) % 3 != 0) possible = false;
        
        if (a > 2*b || b > 2*a) possible = false;
        
        if (a < 0 || b < 0) possible = false;
        
        cout << (possible ? "YES" : "NO") << "\n";
    }
    
    return 0;
}