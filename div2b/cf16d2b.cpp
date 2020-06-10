#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m; 
    cin >> n >> m;
    long long int ans = 0; 
    pair<int, int> a[m];
    for (int i = 0; i < m; ++i) { 
        cin >> a[i].second >> a[i].first; 
    }
    sort (a, a + m);
    
    for (int i = m - 1; i >= 0; --i) { 
        if (n >= a[i].second) { 
            ans += (a[i].first * a[i].second);
            n -= a[i].second;
        } else { 
            ans += a[i].first * n;
            n -= n;
        }
    }
    cout << ans;
}