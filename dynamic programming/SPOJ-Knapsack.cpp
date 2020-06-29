/* Classic 0/1-Knapsack problem solution*/
#include <bits/stdc++.h>

using namespace std;

int main() {
    int S, N; 
    cin >> S >> N; 
    vector<pair<int,int>> v;
    int x, y;
    for (int i = 0; i < N; ++i) { 
        cin >> x >> y;
        v.push_back({x, y});
    }
    sort(v.begin(), v.end());
    int dp[N][S+1] = {0}; 
    for (int i = 0; i < N; ++i) 
        for (int j = 0; j <= S; ++j) 
            dp[i][j] = 0;

    for (int i = 0; i < N; ++i) { 
        for (int j = 1; j <= S; ++j) { 
            if (j < v[i].first) {
                if (i > 0) { 
                    dp[i][j] = dp[i-1][j];
                }
            } else { 
                if (i > 0) { 
                    dp[i][j] = max(dp[i-1][j], v[i].second + dp[i-1][j-v[i].first]);
                } else { 
                    dp[i][j] = v[i].second;
                }
            }
        }
    }
   
    cout << dp[N-1][S];
    
}