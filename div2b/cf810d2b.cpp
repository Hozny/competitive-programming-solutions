#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, f; 
    cin >> n >> f; 
    int a[n], p, c;
    vector<pair<int, int>> b; 
    for (int i = 0; i < n; ++i) { 
        cin >> p >> c; 
        a[i] = min(p,c); 
        b.push_back(make_pair(min(2*p, c) - min(p,c), i));
    }
    sort(b.begin(), b.end(), greater<pair<int,int>>());
    int i = 0; long long ans = 0; 
    for (auto x : b) { 
        if (i < f) { 
            ans += x.first + a[x.second];
            a[x.second] = 0;
        } 
        ++i;
    }
    for (int i = 0; i < n; ++i) { 
        ans += a[i];
    }
    cout << ans;
}