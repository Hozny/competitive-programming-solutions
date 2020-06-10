#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; 
    cin >> n >> k; 
    int a[n], s[n+1];
    s[0] = 0; 
    for (int i = 0; i < n; ++i) { 
        cin >> a[i]; 
        s[i+1] = s[i] + a[i]; 
    }
    int min = INT_MAX;
   
    int ans = 0; 
    for (int i = k; i <= n; ++i) { 
        if (s[i] - s[i-k] < min) { 
            min = s[i] - s[i-k];
            ans = i - k + 1; 
        }
    }
    cout << ans; 
}