#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    cin >> n; 
    int a[n];
    int b[n]; 
    for (int i = 0; i < n; ++i) { 
        cin >> a[i]; 
        b[i] = a[i];
    }
    sort(b, b+n); 
    long long sa[n+1], sb[n+1];
    sa[0] = 0; sb[0] = 0; 
    for (int i = 1; i < n + 1; ++i) { 
        sa[i] = sa[i-1] + a[i-1];
        sb[i] = sb[i-1] + b[i-1];
    }
    
    int t, c, l , r; 
    cin >> t; 
    for (int i = 0; i < t; ++i) { 
        cin >> c >> l >> r;
        if (c == 1) { 
            cout << sa[r] - sa[l - 1]; 
        } else { 
            cout << sb[r] - sb[l - 1];
        }
        cout << endl;
    }
}