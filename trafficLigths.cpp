#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int x, n;
    cin >> x >> n;
    
    set<int> lights = {0, x};
    multiset<int> passages = {x};
    
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        
        auto it = lights.upper_bound(p);
        int right = *it;
        int left = *(--it);
        
        passages.erase(passages.find(right - left));
        
        lights.insert(p);
        passages.insert(p - left);
        passages.insert(right - p);
        
        cout << *passages.rbegin() << (i == n-1 ? "\n" : " ");
    }
    
    return 0;
}