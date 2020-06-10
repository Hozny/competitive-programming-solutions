#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; 
    cin >> n; 
    int ans = 0;
    float p;  
    while (n) { 
        p = floor(log(n) / log(2));
        n -= pow(2, p); 
        ans += 1;
    }
    cout << ans;
}