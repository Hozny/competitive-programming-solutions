#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k; 
    cin >> n >> k; 
    int a[n];
    int c, p; 
    vector<pair<int,int>> v; 
    for (int i = 0; i < n; ++i) { 
        cin >> c >> p; 
        v.push_back({p, c});
    }
    sort(v.rbegin(), v.rend());
    int dp[n];
    fill(dp, dp+n, 1);
    for (int i = 0; i < n; ++i) { 
        //cout << v[i].second << " ";
        for (int j = 0; j < i; ++j) {
            if (v[i].second >= v[j].second)
                dp[i] = max(dp[i], dp[j]+1);
        }
    }
    cout << endl;
    int ans = -100;
    for (int i = 0; i < n; ++i) { 
        //cout << dp[i] << " ";
        if (dp[i] > ans) { 
            ans = dp[i];
        }
    }
    cout << ans;
}