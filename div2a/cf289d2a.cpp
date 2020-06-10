#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, x, y; 
    int v = 0; 
    cin >> n >> k;
    for (int i = 0; i < n; ++i)  {
        cin >> x >> y; 
        v += y - x + 1; 
    }
    int m = (v / k) * k; 
    if (m < v) { 
        m += k;
    }
    cout <<  m - v;
}