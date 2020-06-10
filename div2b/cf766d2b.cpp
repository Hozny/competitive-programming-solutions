#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i) { 
        cin >> a[i];
    } 
    sort(a, a+n); 
    string ans = "NO";
    for (int i = 0; i < n - 2; ++i) { 
        int x = a[i];
        int b = a[i+1];
        int c = a[i+2];
        if (x + b > c && x + c > b && b + c > x) {
            ans = "YES";
        }
    }
    cout << ans;
    
}