#include <bits/stdc++.h> 

using namespace std; 

int main() {
    map<string, int> in;
    string t; 
    int n; 
    cin >> n; 
    for (int i = 0; i < n; ++i) { 
        cin >> t; 
        in[t] += 1; 
    }
    int m = 0; 
    string winner = ""; 
    for (auto x : in) { 
        if (x.second > m) { 
            m = x.second; 
            winner = x.first;  
        }
    }
    cout << winner;
}