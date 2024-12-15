#include <bits/stdc++.h>
using namespace std;

int main() {
    string dna;
    getline(cin, dna);

    int max_repetition = 1; 
    int current_repetition = 1; 

    for (size_t i = 1; i < dna.size(); i++) {
        if (dna[i] == dna[i - 1]) {
            current_repetition++;  
        } else {
            max_repetition = max(max_repetition, current_repetition);  
            current_repetition = 1;  
        }
    }

    max_repetition = max(max_repetition, current_repetition);

    cout << max_repetition << endl;
    return 0;
}
