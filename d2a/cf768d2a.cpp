#include <bits/stdc++.h> 

using namespace std; 

long int n, x; 
int main() { 
    cin >> n; 
    long int a[100001] = {0}; 
    for (int i = 0; i < n; ++i) { 
        cin >> a[i]; 
    }
    sort(a, a+n); 
    int ans = 0; 
    for (int i = 0; i < n - 1; ++i) { 
        if (a[i] != a[0] && a[i] != a[n-1]) { 
           ans += 1;  
        }
    } 
    cout << ans; 
}
