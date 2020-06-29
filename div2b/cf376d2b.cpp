#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; 
    cin >> n >> m; 
    int owe[n+1] = {0};
    int a, b, c; 
    for (int i = 0; i < m; ++i) { 
        cin >> a >> b >> c; 
        owe[a] += c; 
        owe[b] -= c; 
    }
    long long sum = 0;
    for (int i = 0; i <= n; ++i)  { 
        sum += max(0, owe[i]);
    }
    cout << sum;
}