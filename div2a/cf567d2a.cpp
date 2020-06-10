#include <bits/stdc++.h> 

using namespace std; 
int a[100001]; 
int main() { 
    int n; 
    cin >> n; 
    for (int i = 0; i < n; ++i) { 
        cin >> a[i]; 
    } 
    int mx = 0, mn = 0; 
    for (int i = 0; i < n; ++i) { 
        if (i == 0) { 
            cout << a[1] - a[0] << " " << a[n-1] - a[0]; 
        } else if (i < n-1) { 
            mx = max(a[i] - a[0], a[n-1] - a[i]); 
            mn = min(a[i+1] - a[i], a[i] - a[i-1]);
            cout << mn << " " << mx; 
        } else { 
            cout << a[i] - a[i-1] << " " << a[i] - a[0]; 
        } 
        cout << endl; 
    }
}
