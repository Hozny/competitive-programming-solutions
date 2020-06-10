#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, x; 
    long long v = 0;
    long long p = 0;
    cin >> n; 
    int a[n+1] = {0};
    for (int i = 0; i < n; ++i) { 
        cin >> x;
        a[x] = i;
    }
    cin >> m;
    for (int i = 0; i < m; ++i) { 
        cin >> x; 
        v += a[x] + 1;
        p += n - a[x]; 
    }
    cout << v << " " << p;
}