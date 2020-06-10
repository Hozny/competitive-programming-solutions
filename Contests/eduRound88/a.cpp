#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t; 
    int n, m, k, u, l; 
    for (int j = 0; j < t; ++j) { 
        cin >> n >> m >> k; 
        u = min(n/k, m); 
        int r = m - u;
        while (r > 0) { 
            r -= (k -1);
            u -= 1;
        }
        
        cout << u << endl;
    }
    
}